The C Programming Language 
===

Code examples and exercises from
Book by Brian W. Kernighan and Dennis M. Ritchie

Abstract
---

This playground project is a follow up on a book examples and exercises given 
in the book "The C Programming Language".

All code collected in a tree-formed directory structure where `chN` is a short 
for the corresponding chapter and `subN_N` is a short for sub-chapter in it.

Every book example code file will have preceding `exmpl_` prefix.
Every exercise code file will have preceding `exerc_` prefix.

```
.
|-- ch01
|   |-- sub01_01
|   |-- sub01_...
|   |-- sub01_N
|-- ch...
|-- chN

```

### Chapter 1. A tutorial introduction

This chapter will give you brief introduction to the C language basic syntax. 
Introduce you to main compilation command. And will give an overview on basic 
language concepts, such as function block, library inclusion, variable 
declaration and assignment, and so on.

#### 1.1 Getting Started

> All code placed in corresponding directory: `./ch01/sub01_01`.

From this chapter, you will know how basic program structured. It gives you 
idea of a `main` entry-point, and that `printf` function, that used to print out
text into output, **is not a part of language**, but a part of library.

The book suggest to start with a _hello world_ application, -- simple 
application that just print out hello world text.

Corresponding code can be found in `./ch01/sub01_01/exmpl_hello_world.c`.

To compile this application you can use cc (C compiler), gcc (GNU C compiler),
clang (from LLVM family), or any other, like so: `gcc ./exmlp_hello_world.c`. 
Almost certainly, it will warn you about lack of return type of a main function.

Last edition of this book was issued back in 1988 and describe ANSI version of 
language. So to suppress this warning, you can provide `-ansi` argument to 
your compile, it will eliminate this warning.

Compiler will produce binary file for your CPU architecture and current OS 
runtime.

Book suggest you to experiment with syntax, and intentionally make mistakes to 
get a feedback from compiler. As well as, create version of the same 
application but with text splitted onto several lines.

As an exercise, book ask you to leaving-out parts of program, to see whats 
happened on compile time, and to add some `\c` into `printf` in regards to 
specified char control-sequence like: `\t` for tab, `\n` for new line, `\b` 
for backspace and so on.

You can find code corresponding from corresponding exercise by 
`./ch01/sub01_01/exerc_hello_world_c.c`. Also, there is a use-case with `\b` 
sequence given.

#### 1.2 Variables and Arithmetic Expressions

Bu also types, loops, conditions and format flags.

As the core example, book suggest you to write application that will print out 
fahrenheit to celsius table of conversion.

So, it provides you with basic knowledge of what variable is, and how it should 
be declared and initialized, on how loop works and should be described. Give 
you a sense of condition and numeric comparison and math operands.

Basic idea is this, application defines lower value, higher value and step for 
fahrenheit to grow, and value of celsius is calculated for each step and then 
both should be printed.

Corresponding code can be found in `./ch01/sub01_02/exmpl_fahrenheit_celsius.c`.

Authors informs you that within math operation under integers the real part of 
number will be truncated, so they suggested you to rewrite same application 
using float numbers instead of integers.

This version of the code you can find in 
`./ch01/sub01_02/exmpl_floated_fahrenheit_celsius.c`.

This sub-chapter ask you to do two exercises: first, to modify application 
that way, that table will have header, and second, create an application that 
will revert calculation, and will print conversion table from celsius to 
fahrenheit.

Those two exercises are `./ch01/sub01_02/exerc_headed_fahrenheit_celsius.c` 
and `./ch01/sub01_02/exerc_celsius_fahrenheit.c`.

#### 1.3 The for statement

* For loop.

#### 1.4 Symbolic Contants

* #define declaration - basically this is a macro;

#### 1.5 Character Input / Output

* getchar / putchar;
* Special EOF signal;
* Post-assignment comparison;
* Post-/Pre-increment / decrement;
* If and else conditioning and logical or `||` operator.

#### 1.6 Arrays

* Arrays and indexing;
* If else-if else branching.

#### 1.7 Functions

* Function declaration and definition;
* Function invocation;
* Return operator.

#### 1.8 Arguments - Call by Value

* Function arguments are passed by value.

#### 1.9 Character Arrays

* Char array and string terminator `\0`;
* Hidden passing by reference.

#### 1.10 External Variables and Scope

* Global access via extern;
* Extern can be omitted if variable declared in a upper scope and used after.
