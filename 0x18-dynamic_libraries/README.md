differences btn dynamic and static lib's
preprocessing -> compilation -> assembly -> linker

dynamic linking 
libraries are loaded in memory
linker takes object code includes the address not the entire object thus no size issue.
updation:: no need to recompile the program incase of an update.

create a dll
gcc using -c to generate .o from .c files and -fPIC to make the code position independent 
 soo gcc -c -fPIC *.c
 then put the object files into one library to do this as a dynamic library we use gcc but with -shared option.the -o is to specify the name of the file you want it to have.
 gcc -shared -o liball.so *.o
 this way we have created outr dynamic library to verify that
 nm -D liball.so


 how to use

 compile the library with main.c file to link it and use it as you want.
 add the location of your library files into the environmental variable to know where to find the functions
 export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
 then compile it by:
 gcc -L . 0-main.c -l all -o example
