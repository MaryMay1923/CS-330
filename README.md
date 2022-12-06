# CS-330

This is the Programming Project for CS330: Structure and Organization of Programming Languages. The goal of this project is to provide a guide on how to use a chosen coding language, in this case C++. The primary resources that will be used in this guide are https://www.codecademy.com/ https://www.geeksforgeeks.org/ and 

## Brief History of C++
C++ was created by Bjarne Stroustrup in 1979 after modifying an older coding language C so that it would be better for program organization. It's ideal for coding operating systems, video games, web browsers, and more. People have used C++ to make Windows, Microsoft Office, Unreal Engine, and Google Chrome.

## Getting Started
C++ can be difficult to work with on Windows computers. Although some recomend Visual Code Studios, my computer's been having a few glitches with it lately. I've found that the standard Visual Studio works best. It's fairly easy to download and, although it may seem daunting to manuever, there are plenty of resources online describing how to get Visual Studio to work for you. Since C++ is a Static language, we'll need to compile the code first before running it. The keyboard command to do this is CTRL + SHIFT + B. Then to actually run the code, you'll do the command ALT + F11 (or ALT + FN + F11 if you're working on a keyboard withere the F keys have multiple uses).
To comment out a single line, begin the line with two slashes
//like this
To comment out a larger chunk of code, surround the code with slashes and asterick
/* like this */

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

###Operators
C++ has a serise of basic operators, similar to other languages, that consist of +, -, *, /, %, ++, --, ?, <, >, <=, >=, ==. All of these operators work for integers and floats. Strings will work with + to add two strings together, as well as with the comparison operators (<, >, <=, >=, ==) to compare the length of two strings. == Works for boolean data types. Mixed type arithmetic is allowed to a certain extent. Floats and ints can interact, but they will be saved as either a float or int depending on the type declaration of the variable the value is saved in. However, ints and strings cannot interact. 

##If/Else, Switch, and Logical Operators
C++, like most languages, use boolean statements to access if/else, switch, and logical operator statements. C++ represents true as 1, and false as 0. This means if you print a true statement, it will print out "1".

###If/Else
C++ utilizes the conditional statements if, else if, and else. It also has the semi-unique operator "?". It essentially allows for a simple if/else statement to be on one line instead of many.
*PICTURE HERE*
"if" and "else if" must have a conditional statement surrounded by parenthesis. If that statement is true, then it will run the code block that immediately follows it, and that code block must be surrounded by curly brackets. "else" does not have a statement inside parenthesis, instead it goes straight to the curly brackets to delimit the code block. It is possible to have any of these code blocks mentioned above not surrounded by curly brackets if and only if the code block is one line long. However, it is generally good practice to have the curly brackets there regardless because it will help to avoid the "dangling else" problem. However, if this issue does arise, C++ will default to having the dangling else be in response to the closest if statement before it.

###Short-Circuiting
C++ uses short-circuiting evaluation when “&&” (and) or “| |” (or) operators are used in conditional statements. In a statement that includes “&&”, if the left side of the statement is false, then C++ will not check the right hand side and just mark it as false. Similarly, if the left hand side of a “| |” statement is true, then C++ will mark it as true without checking the right hand side.

###Switches
C++ uses switches, and they are set up in a very similar way to other languages. You may use "break"s to escape the switch or "continue"s to keep evaluating the conditionals.

##Loops
C++ has four different types of loops: while, do-while, for, and for-each. Though they are similar, their set up and uses are different and useful in unique applications.

###While Loops
While loops repeat a block of code as long as the conditional statement within the parenthesis remains true. If the conditional statement is ever false, including if it is false before the start of the loop, it will not run. It is important that something within the while loop changes that conditional so that the loop does not go on forever.
INSERT PICTURE HERE

###Do-While Loops
Though similar to while loops, a do-while loop will execute at least once regardless of if the conditional was true at the beginning or not.
INSERT PICTURE HERE

###For Loops
For loops are good for applications in which you know exactly how many times a block of code needs to repeat.
INSERT PICTURE HERE

##For-Each Loops
This is the correct function to use when itterating through lists, arrays, or other list-like structures. Although the regular for-loop can do this, for-each loops provide a more susinct syntax. If you do not know the variable type that will be itterated within the loop, then you can use the key word "auto" when declairing that variable type. C++ should be able to figure out the rest.
INSERT 
