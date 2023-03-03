#include "includes.h"
int gd_strlen(const char *str){
    int len = 0;
    while(str[len])
        len++;
    return(len);
}

char *gd_strdup(const  char *src){
    int len_src;
    char *ret;

    len_src = gd_strlen(src);
    ret = (char *)malloc(sizeof (char) *len_src);
    if (ret == NULL)
        return NULL;

    len_src=0;
    while(src[len_src]){
        ret[len_src] = src[len_src];
        len_src++;
    }
    ret [len_src] = '\0';
    return (ret);
}


int main(void){
    char *str = "lachainedecaractere";
    char *res;
    res = gd_strdup(str);
    printf("%s\n",res);
    free(res);
}