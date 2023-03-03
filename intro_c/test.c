#include "includes.h"
#define INT_ARRAY_COUNT 5


int intComparator ( const void * first, const void * second ) {
    int firstInt = * (const int *) first;
    int secondInt = * (const int *) second;
    return firstInt - secondInt;
}

int main() {
    int array_int[5] = {5,6,4,2,1};
    qsort( array_int, INT_ARRAY_COUNT, sizeof(int), intComparator );
    for( int i=0; i<INT_ARRAY_COUNT; i++ ) {
        printf( "%u", array_int[i] );
        printf( "\n" );
    }
    return 0;
}

     /*
    1/ Trier array_int avec qsport, ou avec un tri a bulle
    2/ Création de 5 "type_lst *" contenant un chiffre chacune
    3/ chainer ses listes grâce au "next". La première liste doit être la valeur
       la plus petite, la derniere, et la plus grand
    4/ Bonus si doublement chainer avec un prev
    5/ bonus si bouclé, le dernier pointe
        sur le premier et inversement

    */


