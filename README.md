# ece_528_hw1

1(a). A compiler in the theoretical sense turns assembly code into machine code. A compiler is also colloquially defined as a preprocessor, assembler, compiler, and linker, all in one. An interpreter, on the other hand, turns code from a interpreted language like python, into optimized C-equivalent code, which matches with how a computer thinks.

1(b). The output of a C program's main function is an int, with 1 denoting successful execution and 0 denoting unsuccessful execution.

2. Header files are a way to centralize definitions and act as a contract between code files and the compiler. Instead of defining addresses, functions, or struct definitions in every file, we can just define them in a single header file and reference that file. Header files can also be used as a contract between code files and compilers by filling it with function prototypes, by using the compiler ensure the functions in the code file match the ones in the header files. 

The #include directive is a way to reference contents of a header file or libraries in C.

3. A function can be declared and defined by giving it a return type, a function name, parameters, and code to execute. In C, the format is
   returnType Name(parameter1, parameter2) {
   //code
   return returnType;
   }
   The point of a return statement is to pass back the result after doing computations or making decisions with it. A function can not have more than one return statement.

4. Type-casting in C is a way to denote to the compiler that the variable data sitting in memory, represented in binary, should be decoded under a different type's representation.

   int double_to_int (double 
