#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv){
    char buf[91];
    int fd = open(argv[1],O_RDONLY);
    int size = read(fd,buf,90);

    printf("%s\n", buf);
    printf("%i\n", size);
    buf[size] = "\0";
    close(fd);
}
