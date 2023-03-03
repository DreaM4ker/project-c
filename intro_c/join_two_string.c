#include "includes.h"

int gd_strlen(const char *str){
    int len = 0;
    while(str[len])
        len++;
    return(len);
}

char *join_two_string(char const *s1, char const *s2){
    char *ret;
    int len;
/*  
logique = d'abord creer une nouvelle variable ret vide
ensuite prendre malocc de la premiere puis de la deuxieme
 et ensuite les ajouter les un à la suite des autres en uilisant la longueur des deux chaine de caractere
 et les ajouter la premiere et la deuxieme avec +len de la premiere
*/


    len = gd_strlen(s1)+gd_strlen(s2)+1;
    printf("%d\n",len);
    ret = (char *)malloc(sizeof(char) * len);
    return(ret);
    free(ret);
}
int main(void){
    char *result;
    result = join_two_string("premiezefgerre","dxieme");
}

