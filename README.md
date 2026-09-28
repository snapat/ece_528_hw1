# ece_528_hw1

1(a). A compiler in the theoretical sense turns high level code, in a language like C, into assembly code. A compiler is also colloquially defined as a preprocessor, assembler, compiler, and linker, all in one. An interpreter translates code from a language like python line-by-line at runtime, and executes it without first turning all of the code into an executable.

1(b). The output of a C program's main function is an int, with 0 denoting successful execution by default since C99 and 1 denoting unsuccessful execution.

2. Header files are a way to centralize definitions and act as a contract between code files and the compiler. Instead of defining addresses, functions, or struct definitions in every file, we can just define them in a single header file and reference that file. Header files can also be used as a contract between code files and compilers by filling it with function prototypes, by using the compiler ensure the functions in the code file match the ones in the header files. 

The #include directive is a way to reference contents of a header file or libraries in C.

3. A function can be defined by giving it a return type, a function name, parameters, and code to execute. In C, the format is
   returnType Name(parameter1, parameter2) {
   //code
   return value;
   }
   The declaration is just the function signature, which is the first line.
   The point of a return statement is to pass back the result after doing computations or making decisions with it. A function can have more than one return statement in the code, but can only return one statement.

4. Type-casting is a way to convert one variable type to another. From double to int, it will truncate the decimal portion.
   int double_to_int (double var1, double var2) {
   return (int)(var1+var2);
   }

5. The difference between a global variable and a local variable is scope. A global variable is defined in a global sense, outside of any singular function. A local variable is defined inside a particular function, and it's memory can only be accessed inside that function.

int globalvar; //this is a global variable

void functionName(void) {
int localvar; //this is a local variable
}

6. Strings are declared and initialized in C using character arrays.
   char str[] = "string"

   The true representation in memory is string\0, with \0 being a single character null terminator. The null terminator tells the compiler that the string data type has ended.
