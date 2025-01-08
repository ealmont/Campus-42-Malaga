# 📖 Ft_Printf

Ft_Printf is a project that re-implements the C library function `printf` from scratch, focusing on handling formatted output.

---

## 📝 Description

Ft_Printf reproduces the behavior of `printf`, allowing formatted output to the standard output. The project involves managing variable argument lists and supporting a subset of format specifiers.

---

## 🚀 Features

✅ Handles a variety of format specifiers (e.g., `%d`, `%s`, `%c`, `%x`, etc.).  
✅ Manages flags, width, precision, and length modifiers.  
✅ Implements variadic functions for flexible argument handling.  
✅ Provides robust and optimized performance.  

---

## 📂 Project Structure

```
ft_printf/
├── ft_printf.c       # Main implementation
├── format_handlers.c # Format-specific handling
├── utils.c           # Utility functions
├── Makefile          # Build configuration
```

---

## ⚙️ How It Works

### Key Concepts

#### 1️⃣ **Format Specifiers**
`ft_printf` interprets format strings like:
```c
"Hello %s, you are %d years old."
```
- `%s`: String.  
- `%d`: Decimal integer.  
- `%c`: Character.  

#### 2️⃣ **Variadic Functions**
Using `va_list`, `ft_printf` handles variable numbers of arguments:
```c
#include <stdarg.h>

void ft_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    // Process format
    va_end(args);
}
```

#### 3️⃣ **Buffer Management**
Efficiently writes to the output buffer, minimizing system calls:
```c
void append_to_buffer(char *buffer, char c) {
    buffer[index++] = c;
}
```

---

## 🛠️ Compilation & Usage

### Compile the Project:
```bash
make
```

### Example Usage:
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello %s, the value is %d\n", "world", 42);
    return 0;
}
```

---

## 📖 Supported Format Specifiers

| Specifier | Description          |
|-----------|----------------------|
| `%c`      | Character            |
| `%s`      | String               |
| `%d`/`%i` | Signed integer       |
| `%u`      | Unsigned integer     |
| `%x`/`%X` | Hexadecimal integer  |
| `%%`      | Percent sign         |

---

## 🌟 Advanced Features

### Flag Handling
Supports flags like `-` (left-align), `+` (force sign), ` ` (space for positive), `0` (zero-padding), and `#` (alternative format).

Example:
```c
ft_printf("%05d", 42); // Output: 00042
```

### Width and Precision
Define minimum field width and precision for numeric and string output.

Example:
```c
ft_printf("%.3s", "Hello"); // Output: Hel
```

---

## 🔍 Debugging Tips

- **Check Edge Cases:** Test with empty strings, `NULL` pointers, and very large numbers.
- **Validate Memory Usage:** Ensure no leaks occur with dynamic memory allocations.
- **Use Reference Outputs:** Compare outputs with the standard `printf` for consistency.

---

## 🧪 Testing

Run a variety of tests to ensure correctness:
- **Basic Tests:** Validate simple format strings.
- **Complex Cases:** Combine multiple flags, width, and precision.
- **Edge Cases:** Handle invalid or unusual inputs gracefully.

---

## 🤝 Contributing

Feel free to contribute to this project by opening a pull request. All suggestions and improvements are welcome! 😊

---

## 📜 License

This project is part of the 42 School curriculum. Follow its academic guidelines when using or sharing this code.

---

### Made with ❤️ by Enmanuel (https://github.com/ealmont)



