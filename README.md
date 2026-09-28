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
   char str[] = "string";

   The true representation in memory is string\0, with \0 being a single character null terminator. Functions like strlen() and printf() continuously read characters until they read the null terminator.

7. A pointer in C is a special data type that has a value which matches another variable's memory address. A pointer can be passed into a function by inputting it as a function parameter to a function that takes a pointer as a parameter. The advantage to this is that functions are able to change a variable's value in memory, instead of making and using a copy, which takes time and memory space.

8. * is the indirection operator which returns the value at an address. The & operator is the address of operator, which returns the memory address of a variable.
  
9. In do while loops, the code executes, then checks if the condition in the while portion is true, then executes the code in the do while loop again if true. In while loops, the code checks if the condition is true, then executes.

10. The break statement stops the code in a loop from executing at that point and ends the loop. A continue statement skips the current loop from that point and begins the next loop, if the condition is still true.

11. Bitwise operators act on each individual bit of an integer. & (AND) returns 1 only if both bits are 1, and is used to clear or check bits. | (OR) returns 1 if either bit is 1, and is used to set bits. ^ (XOR) returns 1 if the bits are different, and is used to toggle bits. ~ (NOT) flips every bit, and is used to build a mask for clearing. << and >> shift bits left or right by n places, and 1 << n builds a mask for bit n.
    ```c
   x |= 0x08;       //set bit 3
   x &= ~0x08;      //clear bit 3
   x ^= 0x08;       //toggle bit 3
   if (x & 0x08)    //check bit 3
```

12. PxSEL0 and PxSEL1 select what function each pin performs. Each pin has one bit in each register, and together those two bits choose whether the pin acts as a GPIO or is connected to one of the chip's peripherals. Setting both bits to 0 selects the GPIO function.
```c
   P1->SEL0 &= ~0x81;
   P1->SEL1 &= ~0x81;
```

13.
   ```c
   void P1_1_and_P1_4_Init(void) {
       P1->SEL0 &= ~0x12;   //GPIO function
       P1->SEL1 &= ~0x12;
       P1->DIR  &= ~0x12;   //input
       P1->REN  |=  0x12;   //enable resistor
       P1->OUT  |=  0x12;   //1 = pull-up
   }

```c
   void Buttons_Init(void) {
       //P3.1 and P3.6
       P3->SEL0 &= ~0x42;
       P3->SEL1 &= ~0x42;
       P3->DIR  &= ~0x42;   //input
       P3->REN  |=  0x42;   //enable resistor
       P3->OUT  &= ~0x42;   //0 = pull-down

       //P5.0 and P5.4
       P5->SEL0 &= ~0x11;
       P5->SEL1 &= ~0x11;
       P5->DIR  &= ~0x11;   //input
       P5->REN  |=  0x11;   //enable resistor
       P5->OUT  &= ~0x11;   //0 = pull-down
   }
```
14.
```c
   void LEDs_Init(void) {
       P7->SEL0 &= ~0xFF;   //GPIO function
       P7->SEL1 &= ~0xFF;
       P7->OUT  &= ~0xFF;   //set low before enabling outputs
       P7->DIR  |=  0xFF;   //output
   }
```
