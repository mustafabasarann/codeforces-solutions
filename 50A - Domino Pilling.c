#include <stdio.h>

#define DOMINO_SIZE 2 

int main(){
    int M,N;

    scanf("%d %d",&M,&N);

    int BOARD_SIZE = M*N;

    printf("%d\n",BOARD_SIZE/DOMINO_SIZE);
    return 0;

}