/*#include <stdio.h>
#include "ishaanownlibrary.c"
int c = 3;

int add(int a , int b){

return a+b;
}

int add(){

    int b = 4;
    printf("%d this is a variable b", b);


return 1;
}
int main(){

    int a = 5;
    int result;
    result = add(4,5);
    printf("%d" a,b)
    //add();

return 0;
}*/








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


