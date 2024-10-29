
#include <stdio.h>
#include <math.h>
int main() {
    //armazenamento de dados
    int numero;
    
    //saída e entrada

    printf("INFORME UM NUMUERO INTEIRO INDICANDO UMA OPERACAO NO CAIXA ELETRONICO 1-SALDO, 2-EXTRATO, 3-SAQUE, 4-SAIR : ");
    scanf("%d",&numero);
    
    if(numero==1){
    printf("SALDO");
    }

    else if(numero==2){
    printf("EXTRATO");
    }

    else if(numero==3){
    printf("SAQUE");
    }

    else if(numero==4){
    printf("SAIR");
    }

    else{
    printf("INVALIDO");
    }
}

 












    