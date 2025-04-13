#include <stdio.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct{
    char nome[30];
    char cpf[12];
    char sexo; //lembrar de usar M para masculindo e F para feminino
    Data nascimento;
}Pessoa;


void dadosbycpf(Pessoa *pessoa, int *qnt){
    
        printf("\ndigite o seu nome:");
        scanf("%s", pessoa[(*qnt)].nome);

        printf("\ninforme o seu sexo, digite F para feminino e M para masculimo : ");
        scanf("%s", &pessoa[(*qnt)].sexo);
        
        printf("\ndigite o seu CPF: ");
        scanf("%s", pessoa[(*qnt)].cpf);

        printf("\ninforme sua data de nascimento \n");
        printf("dia:");
        scanf("%d", &pessoa[(*qnt)].nascimento.dia);

        printf("\nmes:");
        scanf("%d", &pessoa[(*qnt)].nascimento.mes);
        
        printf("\nano:");
        scanf("%d", &pessoa[(*qnt)].nascimento.ano);
        qnt++;
}

void contarcexo(Pessoa *pessoa, int qnt){
    int masculino = 0;
    int feminino = 0;
    for(int i = 0; i < qnt; i++){
    
    if(pessoa[i].sexo == 'F' || pessoa[i].sexo == 'f'){
        feminino++;
        printf("\n%d mulheres", feminino);
    }
    if(pessoa[i].sexo == 'M' || pessoa[i].sexo == 'm'){
        masculino++;
        printf("\n%d homens", masculino);
    }
    else{
        printf("\nsexo nao identificado");
        
    }

    }
}

void recebendo_cpf(Pessoa *pessoa, int qnt, char cpf[]){
    printf("digite seu cpf e ai mostraremos seus dados : ");
    scanf("%s", cpf);
    
    for(int i = 0; i < qnt; i++){
        if(strcmp(pessoa[i].cpf, cpf) == 0){
            printf("\nDados da pessoa: \n");
            printf("Nome: %s", pessoa[i].nome);
            printf("\nSexo :%c", pessoa[i].sexo);
            printf("\ndata de nascimento: %d/%d/%d",
             pessoa[i].nascimento.dia, pessoa[i].nascimento.mes, pessoa[i].nascimento.ano);
            printf("CPF: %s ", pessoa[i].cpf);
            
            
        }
        else{
            printf("cpf nao encontrado no nosso banco de dados");
        }
    }
   

}
void buscarpordata (Data databuscada, Pessoa *pessoa, int qnt){

    bool cont = false;
    printf("digite uma data dd//mm//aa :");
    scanf("%d/%d/%d", &databuscada.dia, &databuscada.mes, &databuscada.ano);

    for(int i = 0; i < qnt; i++){
        if((databuscada.ano * 365 + databuscada.mes *30 +databuscada.dia)
         == (pessoa[i].nascimento.ano * 365 + pessoa[i].nascimento.mes *30 +pessoa[i].nascimento.dia)){
            printf("pessoas nascidas no dia: ");
            printf("nome: %s ", pessoa[i].nome);
            cont = true;
         }
        
    }
    if(cont == false){
        printf("nenhuma pessoa nasceu nesse dia");

    }
}


void intervalodedata(Pessoa *pessoa, int qnt, Data datainicial, Data datafinal){

    printf("\ndigite a data inicial dd//mm/aa :");
    scanf("%d/%d/%d", &datainicial.dia, &datainicial.mes, &datainicial.ano);

     printf("\ndigite a data final dd//mm/aa :");    
    scanf("%d/%d/%d", &datafinal.dia, &datafinal.mes, &datafinal.ano);

    int contpeople = 0;

    for(int i = 0; i < qnt; i++){
        if((datainicial.ano * 365 + datainicial.mes * 30 + datainicial.dia) 
        <= (pessoa[i].nascimento.ano *365 + pessoa[i].nascimento.mes * 30 + pessoa[i].nascimento.dia) &&
        (pessoa[i].nascimento.ano *365 + pessoa[i].nascimento.mes * 30 + pessoa[i].nascimento.dia)
        <= (datafinal.ano * 365 + datafinal.mes * 30 + datafinal.dia)){
            contpeople++;
           
        }
        else{
            printf("nenhuma pessoa encontrada");
        }

    }printf("numero de pessoas nascidas no intervalo de tempo: %d", contpeople);
}

int buscar_cpf(Pessoa *pessoa, int qnt, char buscacpf[12]) {
    for (int i = 0; i < qnt; i++) {
        if (strcmp(pessoa[i].cpf, buscacpf) == 0) {
            return i;
        }
    }
    return -1;
}

void edicao(Pessoa *pessoa, int qnt, char buscacpf[12]){
        int indice = buscar_cpf(pessoa, qnt, buscacpf);

    if (indice != -1) {
        printf("\ndigite o seu nome:");
                scanf("%s", pessoa[indice].nome);

                printf("\ninforme o seu sexo, digite F para feminino e M para masculimo : ");
                scanf("%c", &pessoa[indice].sexo);
                
                printf("\ninforme sua data de nascimento \n");
                printf("dia:");
                scanf("%d", &pessoa[indice].nascimento.dia);

                printf("\nmes:");
                scanf("%d", &pessoa[indice].nascimento.mes);
                
                printf("\nano:");
                scanf("%d", &pessoa[indice].nascimento.ano);
    } else {
        printf("Cadastro não encontrado :D\n");
    }

}

void maisvelhomaisnovo(Pessoa *pessoa, int qnt){
    Data datamaisvelho = pessoa[0].nascimento;
    Data datamaisnovo = pessoa[0].nascimento;

    for(int i = 0; i < qnt; i++){
        if(pessoa[i].nascimento.ano * 365 +pessoa[i].nascimento.mes *30 + pessoa[i].nascimento.dia >
        datamaisnovo.ano *365 + datamaisnovo.mes *30 + datamaisnovo.dia){
            datamaisnovo = pessoa[i].nascimento;

        }
        if(pessoa[i].nascimento.ano * 365 +pessoa[i].nascimento.mes *30 + pessoa[i].nascimento.dia <
        datamaisvelho.ano *365 + datamaisvelho.mes *30 + datamaisvelho.dia){
            datamaisvelho = pessoa[i].nascimento;
        }

    }
    
    for(int i = 0; i < qnt; i++){
        if((datamaisvelho.ano * 365 + datamaisvelho.mes *30 +datamaisvelho.dia)
         == (pessoa[i].nascimento.ano * 365 + pessoa[i].nascimento.mes *30 +pessoa[i].nascimento.dia)){
            printf("nome do mais velho: %s ", pessoa[i].nome);
        
         }
        
    }
 for(int i = 0; i < qnt; i++){
        if((datamaisnovo.ano * 365 + datamaisnovo.mes *30 +datamaisnovo.dia)
         == (pessoa[i].nascimento.ano * 365 + pessoa[i].nascimento.mes *30 +pessoa[i].nascimento.dia)){
            printf("nome do mais novo: %s ", pessoa[i].nome);
        
         }
        
    }
}

void qnt_aniversario(Pessoa *pessoa, int qnt)
{
  int jan = 0, fev = 0, mar = 0, abr = 0, mai = 0, jun = 0, jul = 0,
   ago = 0, set = 0, out = 0, nov = 0, dec = 0;
  for (int i = 0; i < qnt; i++)
  {
    switch (pessoa[i].nascimento.mes)
    {
    case 1:
      jan++;
      break;

    case 2:
      fev++;
      break;

    case 3:
      mar++;
      break;

    case 4:
      abr++;
      break;

    case 5:
      mai++;
      break;

    case 6:
      jun++;
      break;

    case 7:
      jul++;
      break;

    case 8:
      ago++;
      break;

    case 9:
      set++;
      break;

    case 10:
      out++;
      break;

    case 11:
      nov++;
      break;

    case 12:
      dec++;
      break;

    default:
    printf("mes invalido, pare de gracinha");
      break;
    }
  }
  printf("jan: %d\n", jan);
  printf("fev: %d\n", fev);
  printf("mar: %d\n", mar);
  printf("abr: %d\n", abr);
  printf("mai: %d\n", mai);
  printf("jun: %d\n", jun);
  printf("jul: %d\n", jul);
  printf("ago: %d\n", ago);
  printf("set: %d\n", set);
  printf("out: %d\n", out);
  printf("nov: %d\n", nov);
  printf("dec: %d\n", dec);
}


int menu() {
  int opc;
  printf("\n\n======= MENU =======\n");
  printf("1 - registrar pessoa \n");
  printf("2 - buscar por CPF \n");
  printf("3 - Buscar por data \n");
  printf("4 - pessoas que nasceram no intervalo de data \n");
  printf("5 - mostrar quantidade de homens e mulheres\n");
  printf("6 - editar dados\n");
  printf("7 - Descobrir quem eh o mais velho e o mais novo\n");
  printf("8 - Descobrir quantas pessoas nasceram em cada mes\n");
  printf("0 -sair\n");
  printf("\nDigite a opcao: ");
  scanf("%d", &opc);
  return opc;
}
int main(){
Pessoa pessoa[1000];
int qnt = 0;
char buscacpf[12];
Data datainicial, datafinal, databuscada;
int opc = -1;
char cpf[12]; 
while(opc != 0){
    
    opc = menu();
        switch(opc){
           case 1: 
                dadosbycpf(pessoa, &qnt);
                break; 
        
            case 2:
                recebendo_cpf(pessoa,qnt, cpf);
                break;
            case 3:
                buscarpordata(databuscada, pessoa, qnt);
                break;
            case 4:
                intervalodedata(pessoa, qnt, datainicial, datafinal);
                break;
            case 5:
                contarcexo(pessoa, qnt);
                break;

            case 6:
                printf("Digite o CPF para edição: ");
                scanf("%11s", buscacpf);
                edicao(pessoa, qnt, buscacpf);
                break;

            case 7:
                maisvelhomaisnovo(pessoa, qnt);
                break;

            case 8:
                qnt_aniversario(pessoa, qnt);
                break;            

            case 0:
                printf("volte sempre que tiver filhos");
                break; 
            default:
                printf("volte sempre que tiver filhos");
                break;
}
}

return 0;
}