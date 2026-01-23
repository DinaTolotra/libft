*This project has been created as part
of the 42 curriculum by **todina-r**.*

# LIBFT

## DESCRIPTION
libtf is a personal c library. It contains a re-implementaion of several common function from `glibc` and `libbsd` and some utility function aboit file io and linked list. It is meant to be used on a linux OS due to some system call.

### Prototypes
#### From ctype.h
Set of function to test an manipulate char found in ctype.h.

| function | return | description |
| :------- | :----: | :---------- |
| ft_isascii | int | test if an integer can be an ascii |
| ft_isalpha | int | test if a char is alphabetical |
| ft_isdigit | int | test if a char is numerical |
| ft_isalnum | int | test if a char is alphabetical or numerical |
| ft_isprint | int | test if a char is printable or a space |
| ft_toupper | int | make a lower case char upper case|
| ft_tolower | int | make a upper case char lower case|

#### From string.h
##### Null-terminated string
Set of function to test and manipulate null-terminated string found in string.h.

| function | return | description |
| :------- | :----: | :---------- |
| ft_strlen | int | mesure the size of a string |
| ft_strncmp | int | compare two string |
| ft_strlcpy | int | copy n char in a string |
| ft_strlcat | int | append a string to the end of an another |
| ft_strdup | char * | create and fill a new string with the content of an another |
| ft_strchr | char * | find the first occurence of a char in a string |
| ft_strrchar | char * | find the last occurence of a char in a string |

##### Non null-terminated string
Set of function to test and manipulate non-null-terminated string or memory area found in string.h.

| function | return | description |
| :------- | :----: | :---------- |
| ft_bzero | void | fill a memory area with 0 |
| ft_strnstr | char * | find the first occurence of a string in an another string |
| ft_memchr | void * | find the first ocurence of a value in a memory are |
| ft_memcmp | int | compare two memory area |
| ft_memcpy | void * | copy a memory area to an another |
| ft_memmove | void * | copy a memory area to an another. Both can overlap |

#### From stdlib.h
Set of utility function found in stdlib.h.

| function | return | description |
| :------- | :----: | :---------- |
| ft_calloc | void * | allocate a memory area an fill it with 0 |
| ft_atoi | int | convert a string to an integer |

#### About string
Set of custom function to test and manipulate string.

| function | return | description |
| :------- | :----: | :---------- |
| ft_substr | char * | extract a substring from a string |
| ft_strjoin | char * | join two string to obtain a new one |
| ft_strtrim | char * | remove a set of character from a string |
| ft_split | char ** | split a string and store its part in an array |
| ft_itoa | char * | convert an integer to a string |
| ft_strmapi | char * | apply a function to each char of a string to create a new string |
| ft_striter | void | apply a function to each char of a string to modify this string |

#### About file i/o
Set of not so custom function for file input/output.

| function | return | description |
| :------- | :----: | :---------- |
| ft_putchar_fd | void | write a char to a file |
| ft_putstr_fd | void | write a string to a file |
| ft_putendl_fd | void | write a string and a newline to a file |
| ft_putnbr_fd | void | write an integer to a file |

#### About linked list
Set of custom function for linked list manipulation.

```c
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
```

| function | return | description |
| :------- | :----: | :---------- |


## INSTRUCTIONS

## RESSOURCES

### Documentations
 - printable character: https://www.ascii-code.com/characters/printable-characters
