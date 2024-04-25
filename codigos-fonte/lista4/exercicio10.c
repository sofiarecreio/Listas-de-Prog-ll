#include <stdio.h>
#include <string.h>

#define TAMANHO_RESPOSTA 20
#define MAX_RESPONDEDORES 100

int quantidadeOtimo(char respostas[][TAMANHO_RESPOSTA], int totalRespostas);

float diferencaPercentualBomRegular(char respostas[][TAMANHO_RESPOSTA], int totalRespostas);
  
float mediaIdadeRuim(int idades[], char respostas[][TAMANHO_RESPOSTA], int totalRespostas);

float porcentagemPessimoEMaiorIdadePessimo(int idades[], char respostas[][TAMANHO_RESPOSTA], int totalRespostas, int *maiorIdadePessimo);

int diferencaIdadeMaiorOtimoEMaiorRuim(int idades[], char respostas[][TAMANHO_RESPOSTA], int totalRespostas);

int main() 
{
    char respostas[MAX_RESPONDEDORES][TAMANHO_RESPOSTA];
    int idades[MAX_RESPONDEDORES];
    int totalRespostas;
    int maiorIdadePessimo;
    int otimo;
    float diferencaPorcentagem, media, porcentagem;

    printf("Quantas respostas foram registradas?: ");
    scanf("%d", &totalRespostas);

    for (int i = 0; i < totalRespostas; i++) {
        printf("Insira a idade do respondente %d: ", i + 1);
        scanf("%d", &idades[i]);

        printf("Insira a opinião (otimo, bom, regular, ruim, péssimo) do respondente %d: ", i + 1);
        scanf("%s", respostas[i]);
    }

    otimo = quantidadeOtimo(respostas, totalRespostas);
    diferencaPorcentagem = diferencaPercentualBomRegular(respostas, totalRespostas);
    media = mediaIdadeRuim(idades, respostas, totalRespostas);
    porcentagem = porcentagemPessimoEMaiorIdadePessimo(idades, respostas, totalRespostas, &maiorIdadePessimo);
    int diferencaIdade = diferencaIdadeMaiorOtimoEMaiorRuim(idades, respostas, totalRespostas);

    printf("A quantidade de resposta ótimo foi: %d\n", otimo);
    printf("A diferença percentual entre respotas bom e regular foi de: %.2f%%\n", diferencaPorcentagem);
    printf("A média de idades de quem respondeu ruim foi de: %.2f\n", media);
    printf("A porcentagem de respotas péssimo e a maior idade que a usou são de: %.2f%%\n", porcentagem);
    printf("A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim foi de: %d\n", diferencaIdade);

    return 0;
}

int quantidadeOtimo(char respostas[][TAMANHO_RESPOSTA], int totalRespostas) 
{
    int quantidade = 0;

    for (int i = 0; i < totalRespostas; i++) {
        if (strcmp(respostas[i], "otimo") == 0) {
            quantidade++;
        }
    }

    return quantidade;
}

float diferencaPercentualBomRegular(char respostas[][TAMANHO_RESPOSTA], int totalRespostas) 
{
    int quantidadeBom = 0, quantidadeRegular = 0;

    for (int i = 0; i < totalRespostas; i++) {
        if (strcmp(respostas[i], "bom") == 0) {
            quantidadeBom++;
        } else if (strcmp(respostas[i], "regular") == 0) {
            quantidadeRegular++;
        }
    }

    return ((float)(quantidadeBom - quantidadeRegular) / totalRespostas) * 100.0;
}

float mediaIdadeRuim(int idades[], char respostas[][TAMANHO_RESPOSTA], int totalRespostas) 
{
    int somaIdades = 0, quantidadeRuim = 0;

    for (int i = 0; i < totalRespostas; i++) {
        if (strcmp(respostas[i], "ruim") == 0) {
            somaIdades += idades[i];
            quantidadeRuim++;
        }
    }

    return (quantidadeRuim > 0) ? (float)somaIdades / quantidadeRuim : 0.0;
}

float porcentagemPessimoEMaiorIdadePessimo(int idades[], char respostas[][TAMANHO_RESPOSTA], int totalRespostas, int *maiorIdadePessimo) 
{
    int quantidadePessimo = 0;
    *maiorIdadePessimo = -1; 

    for (int i = 0; i < totalRespostas; i++) {
        if (strcmp(respostas[i], "péssimo") == 0) {
            quantidadePessimo++;
            if (idades[i] > *maiorIdadePessimo) {
                *maiorIdadePessimo = idades[i];
            }
        }
    }

    return ((float)quantidadePessimo / totalRespostas) * 100.0;
}

int diferencaIdadeMaiorOtimoEMaiorRuim(int idades[], char respostas[][TAMANHO_RESPOSTA], int totalRespostas) 
{
    int maiorIdadeOtimo = -1;
    int maiorIdadeRuim = -1;

    for (int i = 0; i < totalRespostas; i++) {
        if (strcmp(respostas[i], "ótimo") == 0 && idades[i] > maiorIdadeOtimo) {
            maiorIdadeOtimo = idades[i];
        } else if (strcmp(respostas[i], "ruim") == 0 && idades[i] > maiorIdadeRuim) {
            maiorIdadeRuim = idades[i];
        }
    } 

    return maiorIdadeOtimo - maiorIdadeRuim;
}