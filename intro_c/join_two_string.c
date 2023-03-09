#include "includes.h"
char *join_two_string(char const *s1, char const *s2){
    char *ret;
    int i = 0;
    int j = 0;

    while(s1[i] != '\0')
        i++;
    while(s2[j] != '\0'){
        i++;
        j++;
    }

    i = i + 1;
    ret = (char *)malloc(sizeof(char)* i);

    i = 0;
    while(s1[i]){
        ret[i] = s1[i];
        i++;
    }

    j = 0;
    while (s2[j] != '\0'){
        ret[i] = s2[j];
        j++;
        i++;
    }

    ret[i] = '\0';

    return(ret);
}

int main(void){
    char *join;
    join = join_two_string("premiermot", "deuxiememot");
    printf("%s\n", join);
    if (join)
        free(join);
    return 0;
}
