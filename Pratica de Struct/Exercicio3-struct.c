#include <stdio.h>
#define un 2                                        //Unidade, vou querer testar com 2 produtos para não ficar digitando;

typedef struct {

    int codigo_declaracao;
    float preco;
    int quantidade;

} produto;

int main () {

    produto produtos[un];
    float valor_total = 0;
    int indicador = 0;                              //Variavel usada para saber qual produto é o mais caro;
    int indicador_quantidade = 0;                   //Variavel usada para saber qual produto tem a maior quantidade;

    for (int i = 0; i < un; i++) {

        printf ("Digite o codigo do produto: \n");
        scanf ("%d", &produtos[i].codigo_declaracao);

        printf ("Digite o preço dele: \n");
        scanf ("%f", &produtos[i].preco);

        printf ("Digite a sua quantidade: \n");
        scanf ("%d", &produtos[i].quantidade);

        printf ("\n");
    }

    for (int l = 0; l < un; l++) {

        valor_total += (produtos[l].preco * produtos[l].quantidade);

        //Tratando caso o produto 0 tenha o maior preço em comparação aos outros e não estourar o vetor;

        if (produtos[indicador].preco < produtos[l].preco) {

            indicador = l;                                  //Muito importante aprender isso daqui, posso sempre avaliar o maior ou menos;
        }

        //Fazendo a mesma coisa aqui mas caso o produto 0 tenha a maior quantidade;

        if (produtos[indicador_quantidade].quantidade < produtos[l].quantidade) {

            indicador_quantidade = l;
        }
    }

    printf ("O valor total de todos os produtos eh igual: %.2f\n", valor_total);
    printf ("O produto mais caro custa: %.2f\n", produtos[indicador].preco);
    printf ("O produto com mais quantidade tem: %d\n", produtos[indicador_quantidade].quantidade);

    //Passar em 2 vezes;

    return 0;
}