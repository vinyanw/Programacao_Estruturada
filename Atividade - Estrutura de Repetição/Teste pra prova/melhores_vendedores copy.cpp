#include <stdio.h>
int main() {

    int numVendas, totalVendas, maiorVenda;
    char cpf[11], cpfEscolhido;
    maiorVenda = 0;
    cpfEscolhido = 0;
    totalVendas = 0;
    

    while (1)
    {
        printf("Digite seu CPF: ");
        scanf("%f", &cpf);

        if (cpf[0] == 0 || cpf[1] == '/')
        {
            
            printf("total de vendas: %d\n", totalVendas);
            printf("CPF que mais vendeu foi: %f\n", cpfEscolhido);
            printf("programa finalizado\n");
            return 0;
        }        

        printf("Digite a quantidade de vendas: ");
        scanf("%d", &numVendas);

        totalVendas += numVendas;

        if (maiorVenda < numVendas)
        {
            maiorVenda = numVendas;
            cpfEscolhido = maiorVenda;
            cpfEscolhido = cpf[11]; 
        }

    }
    
    return 0;
}