#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {

    FILE *fd;
    int n, i = 1;
    long int tam;

    if (argc < 3){
        printf ("Voce nao informou todos os parametros\n");
        return 1;
    }
    fd = fopen(argv[2], "r");

    if (fd == NULL){
        printf("nao foi possivel abrir o arquivo\n");
        return 1;
    }

    n = atoi(argv[1]+1);
    fseek(fd, 0, 2);
    tam = ftell(fd);

    while(!fseek(fd,tam-i, 0) && n > 0){
        if (fgetc(fd) == '\n')
            n--;
        i++;
    }

    if (n>0){
        fseek(fd, 0, 0);
    }

    while (!feof(fd)){
        printf("%c", fgetc(fd));
    }

    return 0;

}