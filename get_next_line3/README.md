# 📜 Get Next Line

Welcome to the **Get Next Line** project! 🚀 This is a coding challenge from the amazing [42 School](https://42.fr) curriculum that focuses on reading from a file, one line at a time, in an efficient and elegant way. 

---

## 📝 Description

The goal of this project is to implement the function `get_next_line`:

```c
char *get_next_line(int fd);
```

This function reads a line (ending with a newline character `\n` or EOF) from the file descriptor `fd` and returns it as a string. 

It's a great exercise to practice:
- **Memory management** 🧠
- **File I/O operations** 📂
- **Buffer manipulation** ⚙️

---

## 📂 Project Structure

```
get_next_line/
├── get_next_line.c       # Core implementation of the function
├── get_next_line_utils.c # Helper functions
├── get_next_line.h       # Header file
├── main.c                # Test cases (optional)
├── Makefile              # Build configuration
```

---

## 🚀 Features

✅ Reads a single line from a file descriptor, including `\n` or EOF.  
✅ Handles files, standard input (stdin), and more.  
✅ Manages buffers of variable size (defined by `BUFFER_SIZE`).  
✅ Robust error handling.

---

## ⚙️ Usage

### 1️⃣ Clone the repository:

```bash
git clone https://github.com/yourusername/get_next_line.git
cd get_next_line
```

### 2️⃣ Compile the project:

Use the provided `Makefile`:
```bash
make
```
This will create the `get_next_line.a` library.

### 3️⃣ Test the function:

You can test the function by linking it with your test files. For example:

```bash
gcc -Wall -Wextra -Werror main.c get_next_line.a -o gnl
./gnl < testfile.txt
```

Replace `testfile.txt` with the file you want to read from.

---

## 📖 How It Works

1. **Buffering**: Reads data in chunks of `BUFFER_SIZE` bytes.
2. **Static Variable**: Uses a static variable to keep track of the leftover data between function calls.
3. **Line Splitting**: Extracts and returns a complete line, handling `\n` and EOF appropriately.
4. **Memory Management**: Ensures no memory leaks occur by dynamically allocating and freeing memory as needed.

---

## 🛠️ Configuration

You can customize the `BUFFER_SIZE` during compilation:

```bash
make BUFFER_SIZE=42
```

The default `BUFFER_SIZE` is usually set in the Makefile.

---

## 🧪 Testing

Test your implementation with various edge cases:

- Empty files 📂
- Very large files 📚
- Files without newline characters ❌\n
- Multiple file descriptors at the same time 🔄
- Standard input (stdin) 🎤

Example test:

```bash
cat testfile.txt | ./gnl
```

---

## 🧹 Cleanup

Remove all compiled files with:

```bash
make fclean
```

---

## 📜 License

This project is part of the 42 School curriculum and follows its academic guidelines. Please adhere to the [42 Norm](https://github.com/42School/norminette) when submitting your work.

---

## 🙌 Acknowledgments

Shoutout to [42 School](https://42.fr) for designing such an engaging curriculum! ✨ And to all the fellow cadets working on this project—happy coding! 💻

---

## 🤝 Contributing

Feel free to fork this repository and submit a pull request if you have suggestions or improvements!

---

### Made with ❤️ by Enmanuel (https://github.com/ealmont)

