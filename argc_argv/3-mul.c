#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if(argc <= 2) {
        printf("Error\n");
        return 1;
    }
    else {

        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        printf("%d\n", a * b);
        return 0;
    }
}