# Libft (42 Project)

**Libft** is a foundational project in the 42 curriculum. The goal is to recreate a selection of standard C library functions — without using any external libraries — and compile them into a static library for use in future projects.

## Project Overview

You're not allowed to use most standard C library functions in many 42 projects, so **Libft** is your own personal implementation of essential C functions. Once built, it acts as a reusable static library (`libft.a`) that you can include in future projects.

The project is divided into parts:

### Part 1 – Libc Functions

Reimplement standard C functions such as:

- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`

### Part 2 – Additional Functions

- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`, `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus Part (Optional)

If completed, also implement linked list utilities:

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## 🛠 Compilation

To compile the library:

```bash
make
```

This creates `libft.a`, a static library you can link with:

```bash
gcc -L. -lft your_program.c
```

