//
// Created by brant on 12/12/2022.
//

#ifndef SOFTBUS_VENDAS_H
#define SOFTBUS_VENDAS_H

struct vendas {
    char Nome[51];
    char CPF[15];
    char Telefone[21];
    char Endereco[51];
    int Preferencial;
};
typedef struct vendas Vendas;

#endif //SOFTBUS_VENDAS_H
