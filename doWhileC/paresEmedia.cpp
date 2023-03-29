#include <stdio.h>

int main(){

    int  x, y, pos=0, i=0;


    do{
        scanf("%i %i", &x, &y);

        if(x>y){

            printf("Crescente\n");

        }
        else if(y>x){

            printf("Decrescente\n");
        }

    }
    while (x!=y);

    printf("Acabou!\n");

    return 0;
}
