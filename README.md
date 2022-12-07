# CS-330

This is the Programming Project for CS330: Structure and Organization of Programming Languages. The goal of this project is to provide a guide on how to use a chosen coding language, in this case C++. The primary resources that will be used in this guide are https://www.codecademy.com/ https://www.geeksforgeeks.org/ and 

## Brief History of C++
C++ was created by Bjarne Stroustrup in 1979 after modifying an older coding language C so that it would be better for program organization. It's ideal for coding operating systems, video games, web browsers, and more. People have used C++ to make Windows, Microsoft Office, Unreal Engine, and Google Chrome.

## Getting Started
C++ can be difficult to work with on Windows computers. Although some recomend Visual Code Studios, my computer's been having a few glitches with it lately. I've found that the standard Visual Studio works best. It's fairly easy to download and, although it may seem daunting to manuever, there are plenty of resources online describing how to get Visual Studio to work for you. Since C++ is a Static language, we'll need to compile the code first before running it. The keyboard command to do this is CTRL + SHIFT + B. Then to actually run the code, you'll do the command ALT + F11 (or ALT + FN + F11 if you're working on a keyboard withere the F keys have multiple uses).
To comment out a single line, begin the line with two slashes
https://github.com/MaryMay1923/CS-330/blob/9642e37de31444cc734ea06c3ea253b426c56c81/plp1.cpp#L3
To comment out a larger chunk of code, surround the code with slashes and asterick
https://github.com/MaryMay1923/CS-330/blob/9642e37de31444cc734ea06c3ea253b426c56c81/plp1.cpp#L4-L5

### Reserve Words
C++ has a little less than 100 reserved words (95 to be exact). Most should be familiar to you or self explainitory. The following are just some of the reserve words in C++:
R|E|S|E|R|V|E|W|O|R|D|S
---|---|---|---|---|---|---|---|---|---|---|---
asm | auto | break | case | catch | char | class | const | continue | default | delete | do 
double | else | enum | extern | float | for | friend | goto | if | inline | int | long
new | operator | private | protected | public | register | return | short | signed | sizeof | static | struct
switch | template | this | throw | try | typedef | union | unsigned | virtual | void | violate | while

### Variable Naming Rules
Obviously you cannot use any of the reserved words as variables in C++. Variable names must start with either a lowercase letter or an underscore, and they cannot include whitespaces or special characters (#!% ect) anywhere within the name. It’s also good to keep in mind that C++ is case sensitive, so the variable names countEggs and counteggs are seen as unique variable names.
C++ being a strong, static, explicitly typed language means that you will have to declair what type of variable you are creating. Before naming your variable, you must type whichever is accurate: char, double, float, int, long, short, boolean, ect. Additionally, once a variable is declaired as one of these types, it cannot change it's type (unless it was origionally declaired as a mutable variable).
https://github.com/MaryMay1923/CS-330/blob/f61636daf65b6d1682f83ef5459084fbe4b3d022/plp2.cpp#L5-L9

### Operators
C++ has a serise of basic operators, similar to other languages, that consist of +, -, \*, /, %, ++, --, ?, <, >, <=, >=, ==. All of these operators work for integers and floats. Strings will work with + to add two strings together, as well as with the comparison operators (<, >, <=, >=, ==) to compare the length of two strings. == Works for boolean data types. Mixed type arithmetic is allowed to a certain extent. Floats and ints can interact, but they will be saved as either a float or int depending on the type declaration of the variable the value is saved in. However, ints and strings cannot interact.
https://github.com/MaryMay1923/CS-330/blob/f61636daf65b6d1682f83ef5459084fbe4b3d022/plp2.cpp#L11-L15

## Scope
Variables declaired outside a code block (code that is surrounded by curly brackets) can be accessed within the code block. Often times they will need to be referenced in the parameters of a code block though. However, a variable declaied within a code block is local to that block and cannot be referenced outside of it unless it is returned in some fashion. This is the case for conditional statements, functions loops, and more, so it is important to note.

## If/Else, Switch, and Logical Operators
C++, like most languages, use boolean statements to access if/else, switch, and logical operator statements. C++ represents true as 1, and false as 0. This means if you print a true statement, it will print out "1".
https://github.com/MaryMay1923/CS-330/blob/f61636daf65b6d1682f83ef5459084fbe4b3d022/plp3.cpp#L5-L6

### If/Else
C++ utilizes the conditional statements if, else if, and else, as well as the ? operator.
"if" and "else if" must have a conditional statement surrounded by parenthesis. If that statement is true, then it will run the code block that immediately follows it, and that code block must be surrounded by curly brackets. "else" does not have a statement inside parenthesis, instead it goes straight to the curly brackets to delimit the code block. 
https://github.com/MaryMay1923/CS-330/blob/f61636daf65b6d1682f83ef5459084fbe4b3d022/plp3.cpp#L8-L20
It is possible to have any of these code blocks mentioned above not surrounded by curly brackets if and only if the code block is one line long. However, it is generally good practice to have the curly brackets there regardless because it will help to avoid the "dangling else" problem. However, if this issue does arise, C++ will default to having the dangling else be in response to the closest if statement before it.
C++ also has the semi-unique operator "?". It essentially allows for a simple if/else statement to be on one line instead of many.
https://github.com/MaryMay1923/CS-330/blob/f61636daf65b6d1682f83ef5459084fbe4b3d022/plp3.cpp#L22-L25

### Short-Circuiting
C++ uses short-circuiting evaluation when “&&” (and) or “| |” (or) operators are used in conditional statements. In a statement that includes “&&”, if the left side of the statement is false, then C++ will not check the right hand side and just mark it as false. Similarly, if the left hand side of a “| |” statement is true, then C++ will mark it as true without checking the right hand side.

### Switches
C++ uses switches, and they are set up in a very similar way to other languages. You may use "break"s to escape the switch or "continue"s to keep evaluating the conditionals.
https://github.com/MaryMay1923/CS-330/blob/d1b4f9f334d7dd50dbebb8a257434939db63c3a1/plp3.cpp#L27-L40

## Loops
C++ has four different types of loops: while, do-while, for, and for-each. Though they are similar, their set up and uses are different and useful in unique applications. Other than the fact that loops are repeated, the code block within a loop is no different than that in a function.

### While Loops
While loops repeat a block of code as long as the conditional statement within the parenthesis remains true. If the conditional statement is ever false, including if it is false before the start of the loop, it will not run. It is important that something within the while loop changes that conditional so that the loop does not go on forever.
https://github.com/MaryMay1923/CS-330/blob/0fa82fa425312777eef4f2a46e2bb19069110076/plp4.cpp#L4-L8

### Do-While Loops
Though similar to while loops, a do-while loop will execute at least once regardless of if the conditional was true at the beginning or not.
https://github.com/MaryMay1923/CS-330/blob/0fa82fa425312777eef4f2a46e2bb19069110076/plp4.cpp#L10-L13

### For Loops
For loops are good for applications in which you know exactly how many times a block of code needs to repeat.
https://github.com/MaryMay1923/CS-330/blob/0fa82fa425312777eef4f2a46e2bb19069110076/plp4.cpp#L15-L17

### For-Each Loops
This is the correct function to use when itterating through lists, arrays, or other list-like structures. Although the regular for-loop can do this, for-each loops provide a more susinct syntax. If you do not know the variable type that will be itterated within the loop, then you can use the key word "auto" when declairing that variable type. C++ should be able to figure out the rest.
https://github.com/MaryMay1923/CS-330/blob/0fa82fa425312777eef4f2a46e2bb19069110076/plp4.cpp#L19-L22

## Functions
To declare a function, you must first state what you want your function to return. This can be either integer (int), double, boolean (bool), or nothing (void). Then state the name of the function and follow it by an open and closed parenthesis, leave it empty if the function doesn’t need to take in any values, or type out the parameters. There can be any amount of parameters and they do not have to all be the same datatype. Then the rest of the code is placed in between two curly brackets. Functions in C++ must be created before the main function. They can be called at any point in the code after they are initialized.
https://github.com/MaryMay1923/CS-330/blob/8c99c96a5f6883a6eef6159b2be1afb13980d7de/plp4.cpp#L3-L10
C++ cannot explicitly return more than one variable in a function. However, if you return an array, list, or object, you can store multiple values in them and achieve essentially the same thing.
Parameters of a function are pass-by-reference, but augment are pass by value. Any augments, parameters, and variables are stored on a stack by default. If you want to save things in a heap, you must explicitly code that.

### Side Effects
Side effects are possible in C++. Oftentimes these communication errors are caused by accidentally modifying a global variable. In general, it’s good practice to reduce how many global variables you have in your code anyways. In general, if a side effect is happening, it’s always good practice to use a debugger.

## Objects and Structures
Since C++ is an object oriented program, objects are arguably the most important thing to learn about when it comes to this language. C++ supports both objects and structures. While there is no struct naming convention for either of these, it seems to be the internet's consensus that objects and structures should begin with capitol letters.

### Create a Class
To create a class, start by declairing the object as a class and then naming it. Then create open and closed curly brackets followed by a semi colon. All of the information about the class will go inside this. Inside you can assign attributes to the object as well as methods (i.e. functions sepcific to the object).
To call an object with this class, state the name of the class where you would normally put the variable type definition. Afterwords you can add that object's class attribute by writing the variable's name dot (.) and then the attribute name. To call the method, write the variable name dot (.) method name, followed by open and closed parenthesis and a semicolon. If the method requires any pareameters, include those in the parenthesis. 

### Inheritance
If you’re using inheritance in C++, you will have a base or parent class that is being inherited from, and a derived or child class that inherits from the base class. The child class inherits the attributes and methods the parent class has. To declare a child class, put a colon after the class name and then write the parent class. If you’d like to make a grandchild class (i.e. multiple inheritance), then you would write the child’s class after the colon.
