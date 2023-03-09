#include "includes.h"
// on utilise la fonction quicksort pour trier le tableau dans l'ordre croissant
// on crée 5 structures

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
    int array[5] = { 5, 6, 4, 2, 1};
    int i = 0;
    type_lst *lst;
    type_lst *lst2;
    type_lst *lst3;
    type_lst *lst4;
    type_lst *lst5;
  
    lst = (type_lst *)malloc(sizeof(lst));
    lst2 = (type_lst *)malloc(sizeof(lst2));
    lst3 = (type_lst *)malloc(sizeof(lst3));
    lst4 = (type_lst *)malloc(sizeof(lst4));
    lst5 = (type_lst *)malloc(sizeof(lst5));

    while (i < 5){
        qsort( array,5, sizeof(int),cmpfunc);
        printf("%i\n",array[i]);
        i ++;
    }

    lst->nbr = array[0];
    lst2->nbr = array[1];
    lst3->nbr = array[2];
    lst4->nbr = array[3];
    lst5->nbr = array[4];


    lst->next = lst2;
    lst2->next = lst3;
    lst3->next = lst4;
    lst4->next = lst5;
    lst5->next = NULL;
    
/*tant que lst != de NULL*/
    while (lst) {
        printf("le nombre = %i\n", lst->nbr);
        lst = lst->next;
    }
   
}
