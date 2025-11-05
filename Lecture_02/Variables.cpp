#include <iostream>
using namespace std;


int main()
{
    /*
        Variables :

        A variable is a memory location that stores some data or value in the
        memory.
    */

    int a = 5;

    /*
        A variable has 3 parts :

        Variable name : a
        Data Type : int,float,char,etc.
        Value : 5, 'a', 4.21
    */

    int b; // Variable declaration

    /*
        Compiler ko batana ki b name ka variable exist karta hai.
    */

    b = 7; // Initialization

    /*
        Variable ko first value provide karna.
    */

    cout << &a;

    /*
        Every variable has it's own address in memory, you can check it's address
        by using & operator.
    */

    /*
        ----------- Rules of defining a variable --------------------

        -> A variable name can contain alphabets, numbers, underscore.
        -> A variable name must start with a letter or underscore.
        -> It is case sensitive.
        -> No use of space and special characters.
        -> It should not be same as a predefined or reserved keyword.
        -> cannot start with a number.
    */

    /*
        ---------- Types of variable -----------------------

        -> Local Variable : Function ke andar declare hote hai (inside main()).
        -> Global Variable : Function ke bahar declare hote hai (Any outsider function).
        -> Static Variable : Apni value function ki multiple calls me retain karta hai (static int x = 0;).
        -> Automatic Variable : Default variable (created inside function, Destroyed when function ends) ex. int a = 1;
        -> Register variable : CPU ke register me store hota hai(Faster access) ex. register int count;
        -> Extern variable : Dusri file me declared variable ko access karne ke liye (extern int c;) 
    
        ---------- Constants and variables ------------------

        -> We cannot change the value after initializing in constant
        -> variable me value change kar sakte hai
        -> Example : const pi = 3.14;
    */
}

