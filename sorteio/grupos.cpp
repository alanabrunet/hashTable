#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int funcao(){
    int v[11];
    srand (13);
    for(int i=1; i<11; i++){
        v[i] = rand() % 2;
        if(v[i] == 0){
            printf("Grupo %d: Endereçamento Aberto\n", i);
        }else{
            printf("Grupo %d: Endereçamento Encadeado\n", i);
        }
    }
}

int pote1(){
    int v[11];
    srand (13);
    for(int i=2; i<=6; i++){
        v[i] = rand() % 3;
        if(v[i] == 0){
            printf("Grupo %d: Sondagem Linear\n", i);
        }else if(v[i] == 1){
            printf("Grupo %d: Sondagem Quadratica\n", i);
        }else{
            printf("Grupo %d: Duplo Hash\n", i);
        }
    }
}

void pote2(){
    int v[12];
    srand (13);
    for(int i=7; i<=11; i++){
        v[i] = rand() % 2;
        if(v[i] == 0){
            printf("Grupo %d: Encadeamento Interior\n", i);
        }else{
            printf("Grupo %d: Encadeamento Exterior\n", i);
        }
    }
}


int main(){
    printf("Sorteio dos grupos*\n:");
    funcao();   
    pote1();
    pote2();
    printf("*Grupo 1 também é conhecido como grupo 11\n:");
}
