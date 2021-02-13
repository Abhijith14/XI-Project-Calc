# XI-Project-Calc
Scientific Calculator


1. **INTRODUCTION**

**1.1 About the Project**

**1.1.1**  **Scientific Calculator-An Overview**

Scientific calculator is a type of electronic calculator, usually but not always handheld, designed to calculate problems in science, engineering, and mathematics. They have almost completely replaced slide rules in traditional applications, and are widely used in both education and professional settings.

Modern scientific calculators generally have many more features than a standard four or five-function calculator, and the feature set differs between manufacturers and models; however, this project deals with 20 simple and basic mathematical functions including:

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Sine function 
7. Cosine function 
8. Tangent function 
9. xy 
10. Root
11. Cosec function
12. Sec function
13. Cot function
14. X2
15. root
16. X!
17. 1/x
18. log
19. ln
20. E

**1.1.2**** Objective of the PROJECT**

The main objective of the project &quot; **SCIENTIFIC CALCULATOR**&quot; is to help the user to do calculations with some of the main important and useful functions in MATHEMATICS. This program targets at the comfortance of the user along with proper and accurate result of the entered questions.

It helps the user to also do complex operations like Natural Logarithm, Trigonometry, Logarithm, and even the e function. Has the feature like CLEARING, EXIT and also the mathematical number PI.

1. **SYSTEM SPECIFICATION**

**2.1 Development Environment**

**2.1.1 Hardware Configuration**

PROCESSOR : Intel Core i7-5960X

RAM : HyperX Predator 3600 2X8GB

GRAPHICS ADAPTER : Nvidia GeForce GTX Titan Xp

MONITOR : AOC Agon AG352UCG

KEYBOARD : Logitech G910 Orion Spectrum

MOUSE : Logitech G903

**2.1.2 Software Configuration**

OPERATING SYSTEM : Windows 10

EDITOR : DOSBox

PROGRAMMING LANGUAGE : C++

OOP CONCEPTS USED : Data Abstraction, Data Encapsulation, Modularity, Inheritance, Polymorphism, Reusability.

FEATURES USED : FUNCTIONS

DATABASE : SQL

**2.2**  **ABOUT C++**

**C++ PROGRAMMING**

The C++ programming Language was developed at AT&amp;T Bell laboratories by BjarneStroustroup in 1980s. C++ is a language developed by improving the language C. C++ was known as &quot;C with classes&quot;. C++ became famous and known widely by two events. (i) The formation of an ANSI (American National Standard Institute). (ii) The publication of a reference manual by Ellis and Stroustroup known as &quot;The Annotated C++ Reference Manual&quot;.

**C++ character set**

Character set is a set of valid characters that a language can recognize. A character represents any letter, digit or any other sign

The C++ has the following character set

Letters A-Z, a-z

Digits 0-9

Special symbols ! @ # $ % ^ &amp; \* \_ - + = \ / , . ; &#39; ? : &quot; | ~

( ) { } [] \&lt;\&gt;

White spaces blank space, horizontal tab, enter key

Note: 1. C++ can process any of the 256 ASCII characters (American Standard Code for Information

Interchange)

2. C++ is case sensitive as it treats upper and lower case characters differently.

**Header Files**

Files ending with **.h** extension are known as header files. iostream and conio are header files. The header files have some inbuilt functions and commands in it. When we include the header files in a program, automatically these functions are also included in it.

iostream.h has the commands cout and cin included in it. conio has the functions clrscr( ) and getch ( ).

**Functions**

A function is a subprogram that acts on data and often returns a value. Every function in C++ has its code included in a pair of curly braces { }. There are two types of functions:

1. **Built-in (Library ) functions**

These functions are part of the compiler. The code is already written and saved. If we write the name of these functions in a program the whole code will be included in it.

Eg:-clrscr ( ), getch ( ).

1. **User-defined functions.**

These functions are written by the programmer according to the users requirements.

Eg:-main ( )

**TOKENS**

The smallest individual unit in a program is known as Tokens. C++ have the following tokens

- Keywords
- Identifiers
- Literals
- Punctuators
- Operators

**Keywords**

Keywords are the words that convey a special meaning to the programming language. These are reserved for special purpose and must not be used as variable names.

Egs: void, int, float, char, if, else, for, while

**Identifier**

Identifiers are the fundamental building blocks of a program. They are used as the general terminology for the names given to the different parts of the program. (Variables, functions, arrays etc)

The rules for forming the variables are given below:

1. Variables must be the sequence of letters and digits.
2. The first character of the variable must be a letter.
3. The underscore ( \_ ) is count as a letter.
4. Upper and lower case letters are different.
5. It must not be a key word.
6. It should not contain the special characters(hyphen,space,dot etc )

Valid Identifiers: - num1, \_ABC, sum, a

Invalid identifiers: - 2num, PQ\*R, float, num 3

**Literals**

Literals are data items that never change their type of value during a program run

Different kinds of literals in C++ are

- Bool literal

Data items have only two values – true or false [0 or 1]

- Integer constants

Data items will be of numbers without decimals

- Floating constant

Data items will have numbers with decimals

- Character constant

Data items will be of single character

- String literal

Data items will be of one or more characters

**Punctuators**

The following characters are used as punctuators in C++ (also known as separators).

[] ( ) { } , ; : \* \_ = #

**Operators**

Operators are tokens that trigger some computation when applied to variables and other objects in an expression.

Generally there are three type of operators

- Unary operator
- Binary operator
- Ternary operator

**UNARY OPERATOR**

These are operators that require one operator to operate upon

Eg:- + (unary plus) - (unary minus)

++ (Increment Operator) - - (Decrement operator)

**Increment Operator and Decrement operator**

A++ means A = A +1

A-- means A= A-1

**BINARY OPERATOR**

These are operators that require two operands to operate upon.

Following are some of the Binary operator

- Arithmetic Operator [+ - \* / %]
- Relational Operator [\&lt; \&gt; \&lt;= \&gt;= == !=]
- Assignment Operator [= /= +=]
- Logical Operator [&amp;&amp; ||]

**TERNARY OPERATOR**

These are operators that require three operands to operate upon. They are also known as conditional operators. [? :]

**Flow of control**

In a program, statements may be executed sequentially, selectively or iteratively.

**Sequence**

In this type statements are being executed sequentially. Every C++ program begins with the first statement of main ( ). Each statement in turn is executed sequentially (one after another) and ends with the last line of the main ( ).

**Selection**

In this type, the statements are executed depending upon the condition test. If a condition evaluates to true, a set of statement is followed otherwise another set of statements. The selection statements are also called decision statements as decision is taken according to the condition.

**Iteration**

In this type a set of statements will be executed repeatedly as in a loop till the exiting condition becomes true

**SYSTEM DESIGN**

**1.**  **Functional Design**

A function is a sub program that acts on data and often returns a value. It is most important to use functions to make program handling easier as only a small part of the program is dealt at a time thereby avoiding ambiguity

Every program must contain a function main(). Program execution begins from the first line of main and ends with the last statement. Functions are the building block of C++ and the place where all activity occurs

This is a structured based program containing following functions




**2.**  **DATA FLOW DIGRAM**





**CONCLUTION**

Making programs designed for a real-life purpose is a great way to understand programming and programming concepts. This C++ project and OOP concepts used have been of greater help to me for understanding OOP concepts and for its functioning, it can be easily modified and maintained.

This calculator is designed in a user friendly manner. This software is economically feasible. As the cost of hardware and software required is low.

The main objectives that are achieved are to do complex operations and many other functions. All the calculations are done by the computer and provide greater speed and thus reduce time consumption. It provides the user a quick response with very accurate information.

The project has been developed to meet the aspirations indicated in the modern age. An attempt has been made through this project to do all work ease and fast.

**BIBLIOGRAPHY**

**1.**  **Textbooks:**

1. Computer Science with C++ A textbook for class XI by Sumita Arora
2. Computer Science with C++ A textbook for class XII by Sumita Arora

**2.**  **Websites:**

1. http//en.wikipedia.org/
2. www.softechworld.com



**Output Screen Layouts**

