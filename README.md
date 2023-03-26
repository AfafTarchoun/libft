# LIBFT :books:
## Your very first library
**This project is about coding a C library.
It contains a lot of general purpose functions,
some you might find in basic C libraries and implemented in my own way,
and others suggested by 42 to ease up coding in c.**
## Mandatory part::pushpin:
### Part 1 - Libc functions::dart:
> Implementing the following original ones without using any external functions.
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi

*the two following functions were implemented using malloc()*
- calloc
- strdup
### Part 2 - Additional functions::dart:
> Implementing a set of functions that are either not in the libc, or that are part of it but in a different form.
- **ft_substr** : *Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.*
- **ft_strjoin** :  *Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.*
- **ft_strtrim** : *Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.*
- **ft_split** : *Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.*
- **ft_itoa** : *Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.*
- **ft_strmapi** : *Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.*
- **ft_striter** : *Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.*
- **ft_putchar_fd** : *Outputs the character ’c’ to the given file descriptor.*
- **ft_putstr_fd** : *Outputs the string ’s’ to the given file descriptor.*
- **ft_putendl_fd** : *Outputs the string ’s’ to the given file descriptor followed by a newline.*
- **ft_putnbr_fd** : *Outputs the integer ’n’ to the given file descriptor.*

## Bonus part::pushpin:
> Implementing the following functions in order to easily use lists.
- **ft_lstnew** : *Allocates (with malloc(3)) and returns a new node.*
- **ft_lstadd_front** : *Adds the node ’new’ at the beginning of the list.*
- **ft_lstsize** : *Counts the number of nodes in a list.*
- **ft_lstlast** : *Returns the last node of the list.*
- **ft_lstadd_back** : *Adds the node ’new’ at the end of the list.*
- **ft_lstdelone** : *Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node.*
- **ft_lstclear** : *Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3).*
- **ft_lstiter** : *Iterates the list ’lst’ and applies the function ’f’ on the content of each node.*
- **ft_lstmap** : *Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’.*

### Clone :
`git clone https://github.com/AfafTarchoun/libft.git`

### Compilation :
- make - to compile C files - create object files and library libft.a
- make clean - to remove object files
- make fclean - remove libft.a file
- make re - recompile the library
