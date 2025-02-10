#include "emissoes.h"
#include "emissoes.c"

int main() {
    double combustivel_consumido;

    printf("Digite a quantidade de combustível consumido (litros): ");
    scanf("%lf", &combustivel_consumido);

    Emissoes emissao = calcular_emissoes(combustivel_consumido);

    exibir_emissoes(emissao);

    return 0;
}
