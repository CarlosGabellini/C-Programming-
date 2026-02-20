#include <stdio.h>
#include <string.h>

    struct pessoa {

    char nome[100];
    int idade;
    float altura;
    };

    struct predio {

    float metragem;
    int numero_de_andares;
    int numero_de_pessoas_comportadas;
    };

int main () {

    //Primeira maneira de atribuir valores;

    struct pessoa a, b;
    strcpy(a.nome, "Amanda Ferrari");
    a.idade = 24;
    a.altura = 1.67;

    printf ("Nome: %s\n Idade: %d\n Altura: %.2f\n", a.nome, a.idade, a.altura);

    //Segunda maneira;
    //Instanceando e atribuindo na mesma sentença;

    struct pessoa p = {"Pedro", 20, 1.75};

    if (p.idade < a.idade) {

        printf ("Amanda é maior que João!\n");
    }

    return 0;
}