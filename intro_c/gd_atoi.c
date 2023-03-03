#include "includes.h"
int gd_atoi(char *str);
void gd_putnbr(int nb);
void gd_putchar(char c);

int gd_atoi(char *str){


    int i = 0;
    int ret;
    int neg = 1;


    while(str[i]){
        if ((str[i]>= 48 && str[i] <= 59) || (str[i] == 43 || str[i] == 45 ))
            break;
        i++;


    }
    if (str[i] >= 43 || str[i] == 45){
        if (str[i]==45)
            neg = -1;
        
    }
    return(ret*neg);

    while (str[i]){
        i ++;
    }
    
}



int main(void){
    int result;
    result = gd_atoi("-5000");
    printf(result);
    return(1);
}