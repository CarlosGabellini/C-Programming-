#include <stdio.h>

typedef struct {

    int id;
    int horas_trabalhadas;
    float valor_hora;
    float salario;

} funcionarios;

int main () {

    funcionarios funcionario[8];                                //Declarando um espaço na memoria para 8 funcionarios;
    int controle_while = 0;                                     //Usado para o while e mostrar os resultados;
    int indice_maior = 0;
    int indice_menor = 0;
    float media_salarial = 0;

    for (int i = 0; i < 8; i++) {

        printf ("Digite o id do funcionario: \n");
        scanf ("%d", &funcionario[i].id);

        printf ("digite quantas horas ele trabalhou: \n");
        scanf ("%d", &funcionario[i].horas_trabalhadas);

        printf ("Digite o valor hora: \n");
        scanf ("%f", &funcionario[i].valor_hora);

        funcionario[i].salario = funcionario[i].valor_hora * funcionario[i].horas_trabalhadas;
    }

    printf ("\n\n");

    while (controle_while < 8) {

        printf ("ID: %d\n Salario: %.2f\n", funcionario[controle_while].id, funcionario[controle_while].salario);

        if (funcionario[indice_maior].salario < funcionario[controle_while].salario) {

            indice_maior = controle_while;
        }
        
        if (funcionario[indice_menor].salario > funcionario[controle_while].salario) {

            indice_menor = controle_while;
        }

        media_salarial += funcionario[controle_while].salario;

        controle_while++;
    }

    printf ("\n\n");

    printf ("ID do maior salario: %d\t Maior salario: %.2f\t", funcionario[indice_maior].id, funcionario[indice_maior].salario);
    printf ("ID do menor salario: %d\t Menor salario: %.2f\t", funcionario[indice_menor].id, funcionario[indice_menor].salario);

    printf ("Media salarial: %.2f\n", media_salarial / 8);
    
    return 0;
}