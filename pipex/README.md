# 📖 Pipex

Pipex is a project that re-creates in C the way two commands are piped together via `|` in the shell.

---

## 📝 Description

Pipex replicates the behavior of shell pipes, allowing you to connect two commands together so that the output of the first command is the input of the second. This involves working with `pipe()`, `fork()`, `dup2()`, and `execve()` functions.

---

## 🚀 Features

✅ Recreates shell-like piping of commands.  
✅ Handles file descriptors and process forking.  
✅ Uses `dup2()` for stdin/stdout redirection.  
✅ Integrates well into UNIX-like systems.  

---

## 📂 Project Structure

```
pipex/
├── pipex.c        # Main implementation
├── child.c        # Child process handling
├── parent.c       # Parent process handling
├── utils.c        # Utility functions
├── Makefile       # Build configuration
```

---

## ⚙️ How It Works

### Program Execution

Pipex is run with the following syntax:
```bash
./pipex infile "cmd1" "cmd2" outfile
```

```bash
# ./pipex infile cmd1 cmd2 outfile
pipe()
 |
 |-- fork()
      |
      |-- child // cmd1
      :     |--dup2()
      :     |--close end[0]
      :     |--execve(cmd1)
      :
      |-- parent // cmd2
            |--dup2()
            |--close end[1]
            |--execve(cmd2)
```

### Key Concepts

#### 1️⃣ **Pipe Creation**
The `pipe()` system call creates a unidirectional communication channel with two ends:
- **end[0]:** Read end.
- **end[1]:** Write end.

```c
int end[2];
pipe(end);
```

#### 2️⃣ **Forking Processes**
Using `fork()`, the program creates two processes:
- **Child Process:** Executes `cmd1`.
- **Parent Process:** Executes `cmd2`.

```c
pid_t pid = fork();
if (pid == 0) {
    // Child process
} else {
    // Parent process
}
```

#### 3️⃣ **File Descriptors (FDs)**
File descriptors connect files, pipes, and processes:
- `0`: stdin  
- `1`: stdout  
- `2`: stderr  
- Additional FDs are created for `infile`, `outfile`, and the pipe.

#### 4️⃣ **Redirection with dup2()**
`dup2()` redirects file descriptors to stdin or stdout:
```c
dup2(infile_fd, STDIN_FILENO);
dup2(pipe_end[1], STDOUT_FILENO);
```

#### 5️⃣ **Command Execution with execve()**
Executes the command by searching for its path in the system's `PATH` environment variable:
```c
execve("/bin/ls", args, envp);
```

---

## 🛠️ Compilation & Usage

### Compile the Project:
```bash
make
```

### Run Pipex:
```bash
./pipex infile "cmd1" "cmd2" outfile
```

### Example:
```bash
./pipex file1 "ls -l" "wc -l" file2
```
This will:
1. Read from `file1`.
2. Execute `ls -l`.
3. Pipe its output to `wc -l`.
4. Write the result into `file2`.

---

## 📖 Explanation with Code

### Setting Up the Pipe
```c
void pipex(int infile_fd, int outfile_fd) {
    int pipe_fds[2];
    pipe(pipe_fds);
}
```

### Process Forking
```c
pid_t child_pid = fork();
if (child_pid == 0) {
    child_process(infile_fd, pipe_fds, cmd1);
} else {
    parent_process(outfile_fd, pipe_fds, cmd2);
}
```

### File Descriptor Table Example
| FD | Description   |
|----|---------------|
| 0  | stdin         |
| 1  | stdout        |
| 2  | stderr        |
| 3  | infile        |
| 4  | outfile       |
| 5  | pipe end[0]   |
| 6  | pipe end[1]   |

---

## 🔍 Debugging Tips

- **Check Open FDs:**
  ```bash
  ls -la /proc/$$/fd
  ```
- **Debug Errors:** Use `perror("Error")` to print error messages.
- **Validate File Permissions:** Ensure `infile` and `outfile` have the correct read/write permissions.

---

## 🌟 Advanced Features

### Access Checking with `access()`
Validate the existence of a command before execution:
```c
if (access(cmd_path, X_OK) != 0) {
    perror("Command not found");
    exit(EXIT_FAILURE);
}
```

---

## 🧪 Testing

Test your pipex implementation with various input files and commands:
- Valid commands: `ls -l`, `grep something`
- Edge cases: Empty files, invalid commands, or permissions issues.

---

## 🤝 Contributing

Feel free to contribute to this project by opening a pull request. All suggestions and improvements are welcome! 😊

---

## 📜 License

This project is part of the 42 School curriculum. Follow its academic guidelines when using or sharing this code.

---

### Made with ❤️ by Enmanuel (https://github.com/ealmont)

