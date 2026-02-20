#include <stdio.h>
#include <string.h>

struct pessoa {

    char nome[100];
    int idade;
    float altura;
};

int main () {

    struct pessoa parray[2];

    for (int i = 0; i < 2; i++) {

        printf ("Digite um nome: ");
        setbuf (stdin, NULL);
        gets(parray[i].nome);
        setbuf (stdin, NULL);

        printf ("Digite a idade: ");
        setbuf (stdin, NULL);
        scanf ("%d", &parray[i].idade);
        setbuf (stdin, NULL);

        printf ("Digite a altura: ");
        setbuf (stdin, NULL);
        scanf ("%f", &parray[i].altura);
        setbuf (stdin, NULL);

        printf ("\n");
    }

    //Mostrando os inputs selecionados;
    
    for (int j = 0; j < 2; j++) {

        printf ("Nome: %s\n", parray[j].nome);
        printf ("Idade: %d\n", parray[j].idade);
        printf ("Altura: %.2f\n", parray[j].altura);

        printf ("\n\n");
    }

    return 0;
}