# 0x11. C - printf

## Project Overview

This project is a collaborative effort by Samuel Egundeyi and Ian Kioko to create their own implementation of the `printf` function in C. The project is assigned a weight of 5 and is part of a group project series organized by Julien Barbier, co-founder & CEO. The team is expected to adhere to specific guidelines and concepts related to group projects, pair programming, flowcharts, technical writing, and the `printf` function.

## Project Details

- **Team Members:**
  - Samuel Egundeyi
  - Ian Kioko

## Concepts to Focus On

The project emphasizes understanding and application of the following concepts:

- Group Projects
- Pair Programming - How To
- Flowcharts
- Technical Writing
- Printf function brief - What to know to create your own Printf function
- All about Team Projects + Pairings + FAQ

## Background Context

The primary task is to write a custom `printf` function. The team is expected to create their implementation by exploring the provided resources, including the "Secrets of printf," group projects concept page, and flowcharts concept page. The goal is to gain a deep understanding of how the `printf` function works and to apply this knowledge in creating a functional version.

## Requirements

### General

- **Allowed Editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS using gcc with specific options (-Wall -Werror -Wextra -pedantic -std=gnu89)
- **Code Style:** Follow the Betty style, checked using betty-style.pl and betty-doc.pl
- **Project Structure:**
  - No global variables
  - No more than 5 functions per file
  - Prototypes of all functions included in a header file (main.h)
  - Header files include guarded

### GitHub

- One project repository per group
- Other team members do not fork the project to avoid scoring 0%
- Push the README.md file and header files

### Compilation Details

- Compilation command: `$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
- Avoid pushing any C file containing a main function in the root directory (test files with main functions can be placed in a test folder)

### Authorized Functions and Macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Tasks

### Task 0: I'm not going anywhere...

- **Mandatory:** Yes
- **Description:** Write a function that produces output according to a format.
- **Prototype:** `int _printf(const char *format, ...)`
- **Returns:** Number of characters printed (excluding the null byte used to end output to strings)
- **Output:** Write output to stdout, the standard output stream
- **Format Directives to Handle:**
  - c
  - s
  - %
- **Additional Notes:**
  - Do not reproduce the buffer handling of the C library printf function
  - Do not handle flag characters, field width, precision, or length modifiers

### Task 1: Education is when you read...

- **Mandatory:** Yes
- **Description:** Handle the following conversion specifiers:
  - d
  - i
- **Additional Notes:**
  - Do not handle flag characters, field width, precision, or length modifiers

## Testing

- Work together on a set of tests
- Ensure to test edge cases
- Follow the behavior of the standard printf in cases not specified in the task

## Conclusion

This README provides an overview of the collaborative project undertaken by Samuel Egundeyi and Ian Kioko to implement their version of the `printf` function in C. The guidelines, concepts, and tasks outlined above serve as a roadmap for the successful completion of the project. Adhering to the specified requirements and best practices is crucial for a well-executed and original solution.
