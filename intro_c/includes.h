#ifndef INCLUDES_H
#define INCLUDES_H 


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct my_lst {
    int nbr;
    struct my_lst *next;
} type_lst;


#endif