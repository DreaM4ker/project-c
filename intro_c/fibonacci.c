#include "includes.h"
int fibonacci(int max_fib){
    int f1;
    f1 = 0;
    int f2;
    f2 = 1;

    int ret_fib;
    ret_fib = 0;
    int compteur;
    compteur = 1;

    while (compteur < max_fib){
        ret_fib = f1 + f2;
        f1 = f2;
        f2 =  ret_fib;
        compteur++;
    }
    return(ret_fib);
}

int main(void){
int fib;
fib = fibonacci(10);
printf("%i\n", fib);
return(1);
}