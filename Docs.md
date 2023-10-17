# The Process.

The project involved the use on not only watching videos(which is my default source of knowledge), It involved the reading of documentation, Materials from the internet and even reading the forget man files.

Collecting that info to one place wa the second step:
Your Shell should:
# The CheckList

(DONE) Display a prompt and wait for the user to type a command. A command line always ends with a new line.
(DONE )The prompt is displayed again each time a command has been executed.
( )The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
(DONE )The command lines are made only of one word. No arguments will be passed to programs.
( )If an executable cannot be found, print an error message and display the prompt again.
( )Handle errors.
( )You have to handle the “end of file” condition (Ctrl+D)





REQUIRED FILES that handle:
 	 -the prompt and the working directory
	 -that handles user input
	     USER INPUTS
	      -simple, No semicolon, no pipes no redirection or advenced features
	      -one word arguements
	      * Executble cannot be found. print error message then show prompt again.
	      *handle errors.
	      * end file (^D)

# the System calls resulted in also making a system call list


access (man 2 access) - chacks users permissions for a file
                      -can also change permissions
chdir (man 2 chdir) - Changes the working directory

close (man 2 close) - closes a file descriptor

closedir (man 3 closedir) - closes a directory

execve (man 2 execve) - replces the existing program with a new one

exit (man 3 exit) - Causes Normal process termination

_exit (man 2 _exit) - also _Exit . Terminates the calling process

fflush (man 3 fflush)

fork (man 2 fork) - creates a child process

free (man 3 free) - frees dynamic memory

getcwd (man 3 getcwd) - gets current workin directory

getline (man 3 getline) - reads an entire line from stream. stores the test into a pointer. buffer is null-terminated.

getpid (man 2 getpid) - gets process Identification. it's stored in the variable of type pid_t

isatty (man 3 isatty) -The  isatty()  function tests whether fd is an open file descriptor re‐
       ferring to a terminal.
       
kill (man 2 kill) - send signal to a process depending on it's PID

malloc (man 3 malloc) - Allocates dynamic memory

open (man 2 open) - opens and can create a file specified by pathname.

opendir (man 3 opendir) - opens a directory

perror (man 3 perror) - prints a system error message

read (man 2 read) - reads from an fd.it reads specified no of bytes(COUNT)
     
readdir (man 3 readdir) - reads a directory.

signal (man 2 signal) - ANSI C signal handling.

stat (__xstat) (man 2 stat) - gets file status.
lstat (__lxstat) (man 2 lstat) - gets file status.
fstat (__fxstat) (man 2 fstat) - gets file status.

strtok (man 3 strtok) - Extracts tokens from strings.

wait (man 2 wait) - wait for process to change state.
waitpid (man 2 waitpid) - wait for process to chnage state.
wait3 (man 2 wait3) - wait for process to change state.
wait4 (man 2 wait4) - wait for process to change state.

write (man 2 write) - write to a fd