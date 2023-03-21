# Simple Shell Project
This is a simple shell project done by C Progamming Language

# Concept
A Shell ( Unix shell ) is a command-line interpreter that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.

# OutPut
The program Will have the exact same output as sh (/bin/sh) as well as the exact same error output.                                                                       
### Example of error with sh:
$ echo "qwerty" | /bin/sh                                                                                                                                                 
/bin/sh: 1: qwerty: not found                                                                                                                                             
$ echo "qwerty" | /bin/../bin/sh                                                                                                                                         
/bin/../bin/sh: 1: qwerty: not found                                                                                                                                     
$                         
### Same error with your program hsh:
$ echo "qwerty" | ./hsh                                                                                                                                                   
./hsh: 1: qwerty: not found                                                                                                                                               
$ echo "qwerty" | ./././hsh                                                                                                                                               
./././hsh: 1: qwerty: not found                                                                                                                                           
$    

# Compilation
The shell will be compiled this way:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

# Testing
The shell should work like this in interactive mode:
$ ./hsh                                                                                                                                                                 
($) /bin/ls                                                                                                                                                             
hsh main.c shell.c                                                                                                                                                     
($)                                                                                                                                                                     
($) exit                                                                                                                                                               
$                                                                                                                                                                       
In non-interactive mode:
$ echo "/bin/ls" | ./hsh                                                                                                                                               
hsh main.c shell.c test_ls_2                                                                                                                                           
$                                                                                                                                                                       
$ cat test_ls_2                                                                                                                                                         
/bin/ls                                                                                                                                                                 
/bin/ls                                                                                                                                                                 
$                                                                                                                                                                       
$ cat test_ls_2 | ./hsh                                                                                                                                                 
hsh main.c shell.c test_ls_2                                                                                                                                           
hsh main.c shell.c test_ls_2                                                                                                                                           
$                                                                                                                                                                      
