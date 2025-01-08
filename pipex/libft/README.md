# 📚 Libft

Welcome to **Libft**! 🚀 This is the foundational project of the [42 School](https://42.fr) curriculum. In this project, you will recreate key functions from the C standard library and expand it with additional utilities to build your own library. 💡

---

## 📝 Description

The **Libft** project is all about creating a custom C library. It includes:

- Reimplementing essential C standard library functions.
- Adding additional utility functions for string manipulation, memory management, and more.
- Preparing a solid foundation for future projects.

---

## 📂 Project Structure

```
libft/
├── ft_*.c         # Individual function implementations
├── libft.h        # Header file
├── Makefile       # Build configuration
```

---

## 🚀 Features

✅ Reimplementation of C standard library functions like `strlen`, `memcpy`, `strdup`, etc.  
✅ Custom utility functions for lists, strings, and memory handling.  
✅ Fully norm-compliant and modular for future use.  
✅ Easy compilation into a reusable library.

---

## ⚙️ Usage

### 1️⃣ Clone the repository:

```bash
git clone https://github.com/yourusername/libft.git
cd libft
```

### 2️⃣ Compile the library:

Use the provided `Makefile`:
```bash
make
```
This will create the `libft.a` library.

### 3️⃣ Link the library to your projects:

To use `libft` in your projects, simply link it during compilation:

```bash
gcc -Wall -Wextra -Werror your_project.c libft.a -o your_program
```

Include the `libft.h` header in your files:

```c
#include "libft.h"
```

---

## 📖 Functions List

Here’s a breakdown of the functions included in `libft`:

### 🔤 Part 1 - Libc Functions
- Memory handling: `memset`, `memcpy`, `memmove`, `calloc`, `bzero`, etc.
- String operations: `strlen`, `strchr`, `strrchr`, `strcmp`, `strncmp`, etc.
- Conversion: `atoi`, `itoa`, etc.

### ✨ Part 2 - Additional Functions
- String manipulation: `ft_strjoin`, `ft_split`, `ft_strtrim`, etc.
- Memory allocation: `ft_calloc`, `ft_realloc`, etc.
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_toupper`, etc.

### 🌟 Bonus - Linked List Functions
- List creation: `ft_lstnew`
- List manipulation: `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`, etc.
- Iteration: `ft_lstiter`, `ft_lstmap`

---

## 🛠️ Configuration

The project is designed to work with a `Makefile` for easy compilation. You can:

- Compile the library: `make`
- Clean object files: `make clean`
- Clean all files, including `libft.a`: `make fclean`
- Rebuild everything: `make re`

---

## 🧪 Testing

You can test your `libft` library with:

- Your own test files 📂
- Open-source testers, like:
  - [libft-unit-test](https://github.com/alelievr/libft-unit-test)
  - [libft-war-machine](https://github.com/ska42/libft-war-machine)
  - [libftTester](https://github.com/Tripouille/libftTester)

To run testers, follow their instructions and link your `libft.a` file.

---

## 🤝 Contributing

If you’d like to improve this project or add more utility functions, feel free to fork the repository and submit a pull request. Contributions are always welcome! 😊

---

## 📜 License

This project is part of the 42 School curriculum and follows its academic guidelines. Please respect the [42 Norm](https://github.com/42School/norminette) when contributing or using the library.

---

## 🙌 Acknowledgments

A huge thanks to [42 School](https://42.fr) for creating such a challenging and rewarding program. 🌟 To all coders working on `libft`—good luck and enjoy the process! 💻

---

### Made with ❤️ by Enmanuel (https://github.com/ealmont)

