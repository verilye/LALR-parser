#include <stdio.h>
#include <string.h>


// As always refer to the architectural desription of SQLite for a higher level overview

// Useful links to the lemon parser for pointers and direction
// lemon.c - https://sqlite.org/src/file/tool/lemon.c
// lemon.html - https://sqlite.org/src/doc/trunk/doc/lemon.html
// lempar.c - https://sqlite.org/src/file/tool/lempar.c

// TOP LEVEL NOTES
// 
// Essentially I'm building a command line tool that generates code
// 
// Code that the tool generates should be super secure
// There is no guarantee that grammar fed into the parser is secure

// Two inputs
// - grammar specification
// - a parser template file

// Three outputs
// - C code to implement the parser for input grammar
// - a header file defining and integer ID for each terminal symbol (or 'token')
// - an information file that descreibes the states of the generated parser automaton

// Take a .y filetype (compatible with other kinds of code generators)

// Only subroutines should be generated, not a complete program. The programmer must use the generated
// subroutines to make a complete program. 
// A parser object should be called on start void * pParser = ParseAlloc(malloc);
// 
// Add every malloc to a doubly linked list and free at the end???
// Call free when finished with the parser


// When parser called, feed 'tokens' through one by one
// e.g. SELECT, GET, ALL, *, TABLE etc...
// Each of these will have a subroutine I guess

// Parse (pParser, hTokenID, sTokenData, pArg);
// The second argument is a small integer representing the type of the next token in the data stream. (GET, SET, TABLE, * etc..)
// Integers representing all token types are generated
// 0 normally means end of input has been reached
// 3rd argument is specific value of type. 2nd is broad def (Car), 3rd is specific (Connor's Car)

// Questions for next time:
// What does a parse tree look like
// How to transform a token into something that can be used with a parse tree
// How does a parse tree affect existing data 


// The goal here is to end up with a 'parse tree' that can be passed off and generated into bytecode by the virtual machine (next mini project)




int main(){

// Parse (as a human) how lemon works and then program one yourself ya bum
//
// Lemon writes wrappers around malloc(), calloc(), realloc() and free()
// This is done to add all memory allocations to a doubly linked list 
// which can be freed at the end of program execution (wow good idea)
//
// Lemon writes their own copy of a couple of functions because compilers 
// complain about some functions being unsafe
//
//

}
