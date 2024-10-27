**ft_printf**

### Overview
The **ft_printf** project is a custom implementation of the `printf` function in C, designed to deepen understanding of variadic functions and string formatting in C. It provides insight into how this widely-used function operates behind the scenes.

### Learning Objectives

- Gain experience with variadic functions in C.
- Learn techniques for string formatting and manipulation.
- Implement a streamlined version of the `printf` function.

### Getting Started
To compile the **ft_printf** library, simply use the provided Makefile. Navigate to the project directory and run:

```bash
make
```

This will generate the `libftprintf.a` static library file.

### Usage

To use **ft_printf** in your own C projects, follow these steps:

1. Include the header file:
   ```c
   #include "libftprintf.h"
   ```

2. Compile your program with `libftprintf.a`:
   ```bash
   gcc your_program.c libftprintf.a lib/libft/libft.a -o output_executable
   ```

3. Run your program:
   ```bash
   ./your_program
   ```

### Example

Here’s a simple example demonstrating **ft_printf** in action:

```c
#include "libftprintf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```

Compile and run the example above to see the output.
