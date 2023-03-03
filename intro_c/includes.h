#ifndef INCLUDES_H
#define INCLUDES_H 


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



#define VRAI 1
#define FAUX 0
typedef int BOOLEAN;

typedef struct my_lst {
    int nbr;
    struct my_lst *next;
} type_lst;

#endif