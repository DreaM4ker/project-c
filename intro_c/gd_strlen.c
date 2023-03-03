#include <stdio.h>
#include <unistd.h>

void gd_putchar(char c){
    write(1, &c, 1);
}

int gd_strlen(char *str){
    int x;
    x = 0;
    while (str[x] !='\0'){

        x++;

    }
    printf("%i\n",x);
    return(x);
}
/* chaine de caractere*/
int gd_putstr(char *str){
    int i;
    i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return(i);

}

int main(void){
    int nb_put;
    nb_put = gd_putstr("coucoubozo");
    printf("%i\n", nb_put);
    return(1);
}

