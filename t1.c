//
// Created by Eduks on 12/08/2024.
//

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

char *unidade[10] = {"um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
char *dezena[10] = {"dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
char *centena[10] = {"cem", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};
char *mil[1] = {"mil"};

int converteNumTabASCII(int c) {
    int aux = 0;
    for(int i = 48; i <= 57; i++) {
        aux++;
        if(i == c) {
            return aux-1;
        }
    }
}

int main(){
    int n, aux = 0;
    char valor[10];
    int matriz[10];


    scanf("%s", valor);
    n = strlen(valor);

    for (int i = n; i >= 0; i--) {
        matriz[i] =  valor[i];
        matriz[i] = converteNumTabASCII(matriz[i]);
    }

    for(int i = n; i >= 0; i--) {
        //char *testeSimples = unidade[matriz[i-1]];
        char *testeSimples;
        printf("\n Teste:  %d \n", converteNumTabASCII(valor));
            testeSimples = unidade[matriz[i-1]-1];

        printf("Vejamos se funcionou: %s", testeSimples);

        free(testeSimples);
        aux++;
        printf("Testando: %d", matriz[i-1]);

    }



   // printf("\n Matriz: %d", matriz[0]);
}
