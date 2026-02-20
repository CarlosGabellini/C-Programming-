#include <stdio.h>

struct pessoa 
{
    char nome[50];
    int idade;
    float altura;
};

    //Uma coisa bem importante, isso não é uma variavel, é um tipo, logo não tem espaço na memoria para isso;

int main () {

    int a;
    struct pessoa p;
    
    printf ("Digite o nome: \n");
    gets(p.nome);

    printf ("Digite a idade: \n");
    scanf ("%d", &p.idade);

    printf ("Digite a altura: \n");
    scanf ("%f", &p.altura);

    printf ("O nome dele eh: %s \n Idade: %d \n altura: %.2f \n", p.nome, p.idade, p.altura);

    return 0;
}
