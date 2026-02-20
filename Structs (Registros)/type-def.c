#include <stdio.h>

typedef int inteiro;

int main () {

    //Quase que substitui as nomeações para variaveis int com o typedef;
    //Basicamente não prescisamos digitar Struct ou int ou float o tempo todo com ele, ele agiliza melhor o processo;

    inteiro a, b;
    printf ("Digite dois inteiros: \n");
    scanf ("%d %d", &a, &b);

    inteiro s = a + b;

    printf ("Soma de a + b eh igual: %d \n", s);

    return 0;
}