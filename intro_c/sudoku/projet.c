#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv){
   
   /*81+8+1*/
    char buf[90];
    int i;
    i = 0;

    int **pointeur;
    if (argc<2){
        printf("%s\n","pas assez d'arguments\n");
        return 0;

    }
    int fd = open(argv[1],O_RDONLY);

    int size = read(fd,buf,89);


    pointeur = (int **)malloc(sizeof(int *)*9);

    while (i < 9){
        pointeur[i]= (int *)malloc(sizeof(int)*9);
        i++;
    }

    int z = 0;
    int x = 0;
    int y = 0;
   
    while (x<9){
        while (y<9){
            if (buf[z]>= '0'&& buf[z]<='9'){

                pointeur[x][y] = buf[z]-48;
                y++;
            }
            z++;
        }
        y=0;
        x++;
    }

    x = 0;
    y = 0;
    while (x < 9){
        while (y < 9) {
            /* print le tableau */
            printf("%i   ", (pointeur[x][y]));
            y++;
        }
        printf("%c\n", '\n');
        y = 0;
        x++;
    }

/*90eme on arrete avec \0*/
    buf[size] = '\0';

    close(fd);
    i = 0;
    while (i< 9){
        free(pointeur[i]);
        i++;
    }
    free(pointeur);
}


