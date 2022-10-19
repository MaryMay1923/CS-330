## Naming Conventions
C++ has a little less than 100 reserved words (95 to be exact). Obviously you cannot use any of the reserved words as variables in C++. Variable names must start with either a lowercase letter or an underscore, and they cannot include whitespaces or special characters (#!% ect) anywhere within the name. It’s also good to keep in mind that C++ is case sensitive, so the variable names countEggs and counteggs are seen as unique variable names.

## C++ Language Description
C++ is statically typed, meaning it checks what type a variable is during the compilation phase. It is also a strongly typed language, meaning it does not allow for variable type combinations easily. C++ is an explicitly typed language, meaning it does not allow for variable type switching easily. Variables are only mutable (able to change types) if they are declared with the keyword mutable (mutable int variableExample;)

## Operators
C++ has a series of basic operators, similar to other languages, that consist of +, -, \*, /, %, ++, --, ?, <, >, <=, >=, ==. All of these operators work for integers and floats. Strings will work with + to add two strings together, as well as with the comparison operators (<, >, <=, >=, ==) to compare the length of two strings. == Works for boolean data types. Mixed type arithmetic is allowed, so floats and ints can interact, but they will be saved as either a float or int depending on the type declaration of the variable the value is saved in.
