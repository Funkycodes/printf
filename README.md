# _printf
## Project basis
### Aim 
Create a function _printf_ which mimic the functions of the printf() function found in the stdio.h  header. This function should, just like printf(), be able to take in a variable number of arguments. 

This function allows for the printing of any given argument to stdout(Stand ard Output). This allows for the printing of a myriad combination of data types.

Repo info[#synopsis] 
This repo holds all the files necessary for the custom _printf_ function to run. This function can presently handle the following familiar format specifiers: _c_, _d_, _s_, _r_, _x_, _o_, _u_, _i_, _b_, _%_. This function also allows for the reversal of strings using the format specifier _r_.

### Format specifiers and functions
* r - reverse strings
* c - character
* d - decimal
* i - integer
* s - strings
* x - hexadecimal
* b - binary
* o - octal
* u - unsigned integer
* % - modulo

## Files and Contents
man_3_printf    =>      Custom man page
print.c         =>      custom _printf_ function.
main.h          =>      contains function prototypes of functions spread across all file
strlen.c        =>      contains custom made strlen function.
numlen.c        =>      contains custom made numlen function.
printrev.c      =>      contains custom made function to print string in reverse.
itoa.c          =>      contains all the functions necessary to handle conversion of number to string.

## Project Parameters
* Language : C
* OS : Ubuntu
* Compiler : gcc
* Style guide : Betty Style

## Authors
* theMaskedOtaku
* emma Majekodunmi
# printf
