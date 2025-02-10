#include "emissoes.h"

Emissoes calcular_emissoes(double combustivel) { // kg/L
    const double FE_CO2 = 2.632;  
    const double FE_CH4 = 0.000107;   
    const double FE_N2O = 0.0000213;  

    Emissoes resultado;
    resultado.CO2 = combustivel * FE_CO2;
    resultado.CH4 = combustivel * FE_CH4;
    resultado.N2O = combustivel * FE_N2O;

    return resultado;
}

void exibir_emissoes(Emissoes e) {
    printf("\nEmissões calculadas:\n");
    printf("CO2: %.4f kg\n", e.CO2);
    printf("CH4: %.6f kg\n", e.CH4);
    printf("N2O: %.6f kg\n", e.N2O);
}
