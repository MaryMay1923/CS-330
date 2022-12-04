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
C++ has a little less than 100 reserved words (95 to be exact). Most should be familiar to you or self explainitory. They are the following.
R|E|S|E|R|V|E|W|O|R|D|S
---|---|---|---|---|---|---|---|---|---|---|---
asm | auto | break | case | catch | char | class | const | continue | default | delete | do 
double | else | enum | extern | float | for | friend | goto | if | inline | int | long
new | operator | private | protected | public | register | return | short | signed | sizeof | static | struct
switch | template | this | throw | try | typedef | union | unsigned | virtual | void | violate | while

### Variable Naming Rules
Obviously you cannot use any of the reserved words as variables in C++. Variable names must start with either a lowercase letter or an underscore, and they cannot include whitespaces or special characters (#!% ect) anywhere within the name. It’s also good to keep in mind that C++ is case sensitive, so the variable names countEggs and counteggs are seen as unique variable names.
C++ being a strong, static, explicitly typed language means that you will have to declair what type of variable you are creating. Before naming your variable, you must type whichever is accurate: char, double, float, int, long, short, 
