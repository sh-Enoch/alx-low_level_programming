Dynamic libraries in c
static libraries-when we link statically everything is bundled up this simplifies distribution to anyone who wants to run a program.
libraries in software dev are a collection of pre compiled code that provide reusable functions and resources for programs.
Static libraries:
compiled into the executable during the linking phase.
all the code from the library that your program uses is physically present in the final executable.
leading to larger executables but ensures that your program is self-contained and doesn't rely on external libraries dduring runtime.
have a '.a' file extension on unix sytems.

what is a dynamic library.
also called shared libraries.
are loaded into memory during runtime when program that uses them is executed.
they aren't physically part of the executable file.
it allows multiple programs to share the same copy of the library in the memory.reducing memory consuption.
have the file extensio '.so'
-link in at runtime

how does it work

how is it created and how it is used
creating a dll involves compiling the source code into an object file and then linking it into  a shared object.
1..the first step in making dll is compiling the source code into an object file
gcc -c -fPIC library.c -o library.o
-fPIC flag generates position independent code necessary for shared libraries.

what is a position independent code??
ensures that the code within the shared library can be loaded and executed from any memory address without requiring modification or recompilation.

2..create the shared object file.
gcc -shared -o lilibrary.so library.o
 this command creates the dll 'liblibrary.so'

How to use dll
link against it during compilation and specify its location during runtime  
  ...compile the program with the dll gcc -o my_program my_program.c -L/path/to/library -llibrary
  ...set the $LD_LIBRARY_PATH environment variable to include the directory containing the dynamic library export LD_LIBRARY_PATH=/path/to/library:$LD_LIBRARY_PATH
  ...run the program.

what is the environment variable $LD_LIBRARY_PATH
is an environnment variable that specifies a list of directories where the system should look for dynamic libraries before searching in the default system paths.
how is it used
allows you to control the search path for shared libraries and ensures your program finds the required dynamic libraries.


difference between static and shared libraries
size - static can increase the size of the executable.
memory - dynamic are loaded at runtime.
updates - changes in a dyl are immediately reflected to all its programs. 
isolation - static provides better since program is self contained
basic usage of:
nm :- command lists symbols from object files or shared libraries showing names and types of symbols defined or used in a library
ldd :- lists the dynamic dependencies of an executable or shared library showing which libraries it links to.

Idconfig :- updates the cache used by the dynamic linker/loader helping to manage dynamic libraries



