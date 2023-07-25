![42r](https://github.com/adenord/libft/assets/20702781/a66bf83a-800d-4e1a-9bf3-9d9d821d4070)

<div align=center><h1>Libft 🛠️</h1>
<i>First 42 project</i></div>
<p align="center">
<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white">
<img alt="number of lines" src="https://tokei.rs/b1/github/adenord/libft">
<img alt="GitHub repo size" src="https://img.shields.io/github/repo-size/adenord/libft">
<img alt="GitHub language count" src="https://img.shields.io/github/languages/count/adenord/libft">
<img alt="Neovim" src="https://img.shields.io/badge/NeoVim-%2357A143.svg?&style=for-the-badge&logo=neovim&logoColor=white">
</p>
<h2>Index 📍</h2>
<ul>
  <li><a href="#libft">What is Libft ? 👨‍💻</a></li>
  <li><a href="#list">List of Functions ? 📁</a></li>
  <li><a href="#usage">Usage 👷</a></li>
</ul>

<h2 id="libft">What is Libft ? 👨‍💻</h2>
<p>
  Libft is an individual project in C and the first one in the 42 cursus. 
  
  It requires us to make our own implementation of some of the standard C library functions and some additional ones that can be useful and are missing from the standard C library.

Indeed, at 42 we're not allowed to use some standard libraries on our projects, so we have to make it from scratch and keep growing this library with our own functions for the next projects.
</p>
</br>
<h2 id="list">List of Functions 📁</h2>
<h3>Functions from the <code>&lt;ctype.h&gt;</code> library :</h3>
<ul>
  <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_isalpha.c"><code>ft_isalpha</code></a> - checks for an alphabetic character.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_isdigit.c"><code>ft_isdigit</code></a> - check for a digit (0 through 9).</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_isalnum.c"><code>ft_isalnum</code></a> - checks for an alphanumeric character.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_isascii.c"><code>ft_isascii</code></a> - checks whether c fits into the ASCII character set.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_isprint.c"><code>ft_isprint</code></a> - checks for any printable character.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_toupper.c"><code>ft_toupper</code></a> - convert char to uppercase.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_tolower.c"><code>ft_tolower</code></a> - convert char to lowercase.</li>
</ul>

<h3>Functions from the <code>&lt;string.h&gt;</code> library :</h3>
<ul>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_strlen.c"><code>ft_strlen</code></a> - calculate the length of a string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_memset.c"><code>ft_memset</code></a> - fill memory with a constant byte.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_bzero.c"><code>ft_bzero</code></a> - zero a byte string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_memcpy.c"><code>ft_memcpy</code></a> - copy memory area.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_memmove.c"><code>ft_memmove</code></a> - copy memory area even when overlapping.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_strlcpy.c"><code>ft_strlcpy</code></a> - copy string to a specific size.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_ft_strlcat.c"><code>ft_strlcat</code></a> - concatenate a string to a specific size.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_strchr.c"><code>ft_strchr</code></a> - locate character in a string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_strrchr.c"><code>ft_strrchr</code></a> - locate character in a string (reverse).</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_strncmp.c"><code>ft_strncmp</code></a> - compare two strings (n characters).</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_memchr.c"><code>ft_memchr</code></a> - scan memory for a character.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_memcmp.c"><code>ft_memcmp</code></a> - compare memory areas.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_strnstr.c"><code>ft_strnstr</code></a> - locate a substring in a string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_ft_strdup.c"><code>ft_strdup</code></a> - creates a duplicate for the string passed as a parameter.</li>
</ul>

<h3>Functions from the <code>&lt;stdlib.h&gt;</code> library :</h3>
<ul>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_atoi.c"><code>ft_atoi</code></a> - convert a string to an integer.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part1/ft_calloc.c"><code>ft_calloc</code></a> - allocates memory and sets its bytes values to 0.</li>
</ul>

<h3>Customs functions :</h3>
<ul>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_substr.c"><code>ft_substr</code></a> - returns a substring from a string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_strjoin.c"><code>ft_strjoin</code></a> - concatenates two strings.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_strtrim.c"><code>ft_strtrim</code></a> - trims the beginning and end of a string with a specific set of chars.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_split.c"><code>ft_split</code></a> - splits a string using a char as parameter.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_itoa.c"><code>ft_itoa</code></a> - converts a number into a string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_strmapi.c"><code>ft_strmapi</code></a> - applies a function to each character of a string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_striteri.c"><code>ft_striteri</code></a> - applies a function to each character of a string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_putchar_fd.c"><code>ft_putchar_fd</code></a> - output a char to a file descriptor.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_putstr_fd.c"><code>ft_putstr_fd</code></a> - output a string to a file descriptor.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_putendl_fd.c"><code>ft_putendl_fd</code></a> - output a string to a file descriptor, followed by a new line.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/part2/ft_putnbr_fd.c"><code>ft_putnbr_fd</code></a> - output a number to a file descriptor.</li>
</ul>

<h3>Linked list functions :</h3>
<ul>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/bonus/ft_lstnew.c"><code>ft_lstnew</code></a> - creates a new list element.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/bonus/ft_lstadd_front.c"><code>ft_lstadd_front</code></a> - adds an element at the beginning of a list.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/bonus/ft_lstsize.c"><code>ft_lstsize</code></a> - counts the number of elements in a list.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/bonus/ft_lstlast.c"><code>ft_lstlast</code></a> - returns the last element of the list.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/bonus/ft_lstadd_back.c"><code>ft_lstadd_back</code></a> - adds an element at the end of a list.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/bonus/ft_lstclear.c"><code>ft_lstclear</code></a> - deletes and free list.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/bonus/ft_lstdelone.c"><code>ft_lstdelone</code></a> - deletes and free a node.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/bonus/ft_lstiter.c"><code>ft_lstiter</code></a> - applies a function to each element of a list.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/bonus/ft_lstmap.c"><code>ft_lstmap</code></a> - applies a function to each element of a list by creating a new list.</li>
</ul>

<h3>Additional functions (not asked in the subject):</h3>
<ul>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/additional_fct/ft_strstr.c"><code>ft_strstr</code></a> - locate a substring in a string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/additional_fct/ft_memccpy.c"><code>ft_memccpy</code></a> - copy n bytes of memory area.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/additional_fct/ft_strcat.c"><code>ft_strcat</code></a> - concatenate two strings.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/additional_fct/ft_strcmp.c"><code>ft_strcmp</code></a> - compare two strings.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/additional_fct/ft_strcpy.c"><code>ft_strcpy</code></a> - copy a string.</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/additional_fct/ft_strncat.c"><code>ft_strncat</code></a> - concatenate two strings (up to n characters).</li>
   <li><a href ="https://github.com/adenord/libft/blob/master/srcs/additional_fct/ft_strncpy.c"><code>ft_strncpy</code></a> - copy a string (up to n characters).</li>

<h2 id="usage">Usage 👷</h2>
<p>With the Makefile rules you'll be able to create a static library : libft.a.</p>
<p>There's three version of libft.a :</p>
  <p>To make libft.a with only &lt;ctype.h&gt;, &lt;string.h&gt;, &lt;stdlib.h&gt; and customs functions (Mandatory part) :</p>
  <pre>make</pre>
  <p>or</p>
  <pre>make libft.a</pre>
  <p>To make libft.a mandatory part + bonus :</p>
  <pre>make bonus</pre>
  <p>To make libft.a with all the functions :</p>
  <pre>make additional</pre>
  <p>Other rules :</p>
  <pre>make re </pre>
  <pre>make clean</pre>
  <pre>make fclean</pre>
