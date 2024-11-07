/* Name: Ishaan Rajani
   roll no: 08
   UIN: 241P008

   WAP to define a counter function to print how many times
   the function is called use storage classes*/
#include <stdio.h>

void counter() {

    static int count = 0;


    count++;

    printf("Function called %d times\n", count);
}

int main() {

    counter();
    counter();
    counter();
    counter();

    return 0;
}


