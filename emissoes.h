#ifndef EMISSOES_H
#define EMISSOES_H

#include <stdio.h>

typedef struct {
    double CO2;
    double CH4;
    double N2O;
} Emissoes;

Emissoes calcular_emissoes(double combustivel);

void exibir_emissoes(Emissoes e);

#endif 
