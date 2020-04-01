#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
//Variveis Globais Bebidas
int contS =0,contR=0,contCo=0,contD=0;
//Variveis Globais Comidas
int contL=0,contSob=0,contAc=0;
//Variavel Global Funcionario
int contF=0;

struct cadastro{
	char nome[90];
	int cod;
	float preco;
	int ativo;

}suco[20],refri[20],coqui[20],drink[20],/*Comidas*/lanche[20],acomp[20],sobreme[20]; //o [20] delimita a quantidade de registro para Apenas 20 Registros de Cada variavel de controle
struct cadastrofun{
    char nome[150];
    char cpf[11];
    char sexo[90];
    char cargo[100];
    int telefone;
    int ativo;
}funcio[40];
//Bebidas
void TelaSuco();
void TelaRefri();
void TelaCoqui();
void TelaDrink();
//Cadastros,impress�o e remo��o de sucos
void CadastroSu();
void verSucos();
void RemoverSu();
void AlterarSu();
//Cadastros,impress�o e remo��o de refrigerantes
void CadastroRe();
void verRefri();
void RemoverRe();
void AlterarRe();
//Cadastros,impress�o e remo��o de Coquiteis
void CadastroCock();
void verCock();
void RemoverCock();
void AlterarCock();
//Cadastros,impress�o e remo��o de Drinks
void CadastroDrink();
void verDrink();
void RemoverDrink();
void AlterarDrink();

//Comidas
void TelaLanche();
void TelaSobre();
void TelaAcomp();
//Cadastros,impress�o e remo��o de Lanches
void CadastroLa();
void verLanche();
void RemoverLa();
void AlterarLa();
//Cadastros,impress�o e remo��o de Sobremesa
void CadastroSo();
void verSobre();
void RemoverSo();
void AlterarSo();
//Cadastros,impress�o e remo��o de Acompanhamento
void CadastroAc();
void verAcomp();
void RemoverAc();
void AlterarAc();
//Funcion�rios
void Cadastrofunc();
void verFunc();
void RemoverFunc();
void AlterarFunc();


void Bebida();
void Comida();
void Funcionario();



int main(){
    setlocale(LC_ALL,"Portuguese");
    system("mode con:cols=100 lines=30"); //Define o tamanho da janela que ser� aberto
    SetConsoleTitle("Giga Lanches"); //Define o t�tulo da janela que sera aberta
    int op;
    do{
		system("cls");
		system("color b");
		printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t        Tela de Cadastro\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Bebida                      2-Comida       \n");
    	printf("                            3-Funcion�rio                 \n");
    	printf("                                              0-Sair\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
    	    case 1:
    	    	Bebida();
    	        break;
    	    case 2:
    	    	Comida();
    	        break;
    	    case 3:
    	    	Funcionario();
    	        break;
    	    case 4:
    	        break;
    	    default:
    	    	if((op!=0)&&(op!=1)){
    	        	system("cls");
    	        	system("color c");
    	        	printf("Digite uma op��o v�lida\n");
    	        	Sleep(1500); }
    	        break;
}
}while(op!=0);

	return 0;
}


void Bebida(){
    int op;
    do{
    	system("cls");
    	system("color a");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t        Cadastro de Bebidas\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Sucos                      2-Refrigerantes       \n");
    	printf("                            3-Coquit�is                  4-Drinks\n");
    	printf("                                             0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a opcao desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        TelaSuco();
    	        break;
    	    case 2:
    	        TelaRefri();
    	        break;
    	    case 3:
    	        TelaCoqui();
    	        break;
    	    case 4:
    	        TelaDrink();
    	        break;
    	    default:
    	    	if(op!=0){
    	        	system("cls");
       		     	system("color c");
            		printf("Digite uma op��o v�lida\n");
                    Sleep(1500);
					}
        		break;
	}
}while(op!=0);
}


void Comida(){
    int op;
    do{
    	system("cls");
    	system("color e");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t        Cadastro de Comidas\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Lanche                      2-Sobremesa       \n");
    	printf("                            3-Acompanhamento              \n");
    	printf("                                             0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        TelaLanche();
    	        break;
    	    case 2:
    	        TelaSobre();
    	        break;
    	    case 3:
    	        TelaAcomp();
    	        break;
   		    case 4:
   	 	        break;
        	default:
        		if(op!=0){
        	    	system("cls");
        	    	system("color c");
        	    	printf("Digite uma op��o v�lida\n");
        	    	Sleep(1500);
        	}
        	    break;


		}
}while(op!=0);

}

void Funcionario(){
    int op;
    do{
    	system("cls");
    	system("color d");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t        Cadastro de Funcionarios\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Cadastrar Funcion�rio       2-Remover Funcion�rio       \n");
    	printf("                            3-Ver Funcion�rios            4-Alterar\n");
    	printf("                                              0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        Cadastrofunc();
    	        break;
    	    case 2:
    	        RemoverFunc();
    	        break;
    	    case 3:
    	        verFunc();
    	        break;
    	    case 4:
    	        AlterarFunc();
    	        break;
    	    default:
    	    	if(op!=0){
    	        	system("cls");
    	        	system("color c");
    	        	printf("Digite uma op��o v�lida\n");
    	        	Sleep(1500);
                }
    	        break;
	}
}while(op!=0);
}
void TelaSuco(){
    int op;
    do{
    	system("cls");
    	system("color a");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t        Cadastro de Sucos\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Cadastrar suco       2-Remover suco       \n");
    	printf("                            3-Ver sucos            4-Alterar\n");
    	printf("                                              0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        CadastroSu();
                break;
    	    case 2:
    	        RemoverSu();
    	        break;
    	    case 3:
    	        verSucos();
    	        break;
    	    case 4:
    	        AlterarSu();
    	        break;
    	    default:
    	    	if(op!=0){
    	        	system("cls");
    	        	system("color c");
    	        	printf("Digite uma op��o v�lida\n");
    	        	Sleep(1500);
                }
    	        break;
	}
}while(op!=0);
}
void TelaCoqui(){
        int op;
    do{
    	system("cls");
    	system("color a");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t      Cadastro de Coquiteis\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Cadastrar coquit�l       2-Remover coquit�l       \n");
    	printf("                            3-Ver Coquit�is            4-Alterar\n");
    	printf("                                              0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        CadastroCock();
    	        break;
    	    case 2:
    	        RemoverCock();
    	        break;
    	    case 3:
    	        verCock();
    	        break;
    	    case 4:
    	        AlterarCock();
    	        break;
    	    default:
    	    	if(op!=0){
    	        	system("cls");
    	        	system("color c");
    	        	printf("Digite uma op��o v�lida\n");
    	        	Sleep(1500);
                }
    	        break;
	}
}while(op!=0);
}
void TelaDrink(){
        int op;
    do{
    	system("cls");
    	system("color a");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t        Cadastro de Drinks\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Cadastrar drink       2-Remover drink       \n");
    	printf("                            3-Ver drinks            4-Alterar \n");
    	printf("                                              0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        CadastroDrink();
    	        break;
    	    case 2:
    	        RemoverDrink();
    	        break;
    	    case 3:
    	        verDrink();
                break;
    	    case 4:
    	        AlterarDrink();
    	        break;
    	    default:
    	    	if(op!=0){
    	        	system("cls");
    	        	system("color c");
    	        	printf("Digite uma op��o v�lida\n");
    	        	Sleep(1500);
                }
    	        break;
	}
}while(op!=0);


}
void TelaRefri(){
    int op;
    do{
    	system("cls");
    	system("color a");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t     Cadastro de Refrigrantes\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Cadastrar refrigerante   2-Remover refrigerante       \n");
    	printf("                            3-Ver refrigerantes        4-Alterar   \n");
    	printf("                                              0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        CadastroRe();
    	        break;
    	    case 2:
    	        RemoverRe();
    	        break;
    	    case 3:
    	        verRefri();
    	        break;
    	    case 4:
    	        AlterarRe();
    	        break;
    	    default:
    	    	if(op!=0){
    	        	system("cls");
    	        	system("color c");
    	        	printf("Digite uma op��o v�lida\n");
    	        	Sleep(1500);
                }
    	        break;
	}
}while(op!=0);

}
void TelaLanche(){
    int op;
    do{
    	system("cls");
    	system("color a");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t        Cadastro de Lanches\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Cadastrar lanche       2-Remover lanche       \n");
    	printf("                            3-Ver lanches            4-Alterar \n");
    	printf("                                              0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        CadastroLa();
    	        break;
    	    case 2:
    	        RemoverLa();
    	        break;
    	    case 3:
    	        verLanche();
    	        break;
    	    case 4:
    	        AlterarLa();
    	        break;
    	    default:
    	    	if(op!=0){
    	        	system("cls");
    	        	system("color c");
    	        	printf("Digite uma op��o v�lida\n");
    	        	Sleep(1500);
                }
    	        break;
	}
}while(op!=0);

}
void TelaAcomp(){
    int op;
    do{
    	system("cls");
    	system("color a");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t   Cadastro de Acompanhamentos\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Cadastrar acompanhamento       2-Remover acompanhamento       \n");
    	printf("                            3-Ver acompanhamento             4-Alterar\n");
    	printf("                                              0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        CadastroAc();
    	        break;
    	    case 2:
    	        RemoverAc();
    	        break;
    	    case 3:
    	        verAcomp();
    	        break;
    	    case 4:
    	        AlterarAc();
    	        break;
    	    default:
    	    	if(op!=0){
    	        	system("cls");
    	        	system("color c");
    	        	printf("Digite uma op��o v�lida\n");
    	        	Sleep(1500);
                }
    	        break;
	}
}while(op!=0);

}
void TelaSobre(){
        int op;
    do{
    	system("cls");
    	system("color a");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\t  Giga Lanches\n \t\t\t\t      Cadastro de Sobremesa\n");
    	printf("----------------------------------------------------------------------------------------------------\n");
    	printf("____________________________________________________________________________________________________\n\n");
    	printf("                            1-Cadastrar Sobremesa      2-Remover Sobremesa       \n");
    	printf("                            3-Ver Sobremesas           4-Alterar \n");
    	printf("                                             0-Voltar\n");
    	printf("____________________________________________________________________________________________________\n");
    	printf("Escolha a op��o desejada \n");
		printf("____________________________________________________________________________________________________\n");
		scanf("%d",&op);
		switch(op){
		    case 1:
		        CadastroSo();
    	        break;
    	    case 2:
    	        RemoverSo();
    	        break;
    	    case 3:
    	        verSobre();
    	        break;
    	    case 4:
    	        AlterarSo();
    	        break;
    	    default:
    	    	if(op!=0){
    	        	system("cls");
    	        	system("color c");
    	        	printf("Digite uma op��o v�lida\n");
    	        	Sleep(1500);
                }
    	        break;
	}
}while(op!=0);

}
//Sucos
void CadastroSu(){

    system("cls");
    printf("Nome do Suco \n");
    scanf(" %[^\n]s",suco[contS].nome);
    printf("C�digo do Suco \n");
    scanf("%d",&suco[contS].cod);
    printf("Pre�o do Suco \n");
    scanf("%f",&suco[contS].preco);
    system("cls");
    printf("Suco Cadastrado\n");
    Sleep(1000);
    contS++;
}
void verSucos(){
    int i = contS;
    system("cls");
    for(contS=0;contS<i;contS++){
        if(suco[contS].ativo==0){
            printf("Nome: %s\nN�digo: %d\nPre�o: R$ %0.2f\n\n",suco[contS].nome,suco[contS].cod,suco[contS].preco);
        }
    }
    getchar();
    getchar();
}
void RemoverSu(){
    int nRegis;
    int i = contS;
    system("cls");
    for(contS=0;contS<i;contS++){
        if(suco[contS].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contS,suco[contS].nome,suco[contS].cod,suco[contS].preco);
        }
    }
    printf("\nEscolha o n�mero do Registro que deseja Remover \n");
    scanf("%d",&nRegis);
    suco[nRegis].ativo=1;
    system("cls");
    printf("Removendo.\n");
    Sleep(400);
    system("cls");
    printf("Removendo..\n");
    Sleep(400);
    system("cls");
    printf("Removendo...\n");
    Sleep(400);

}
void AlterarSu(){
    int nRegis;
    int i = contS;
    system("cls");
    for(contS=0;contS<i;contS++){
        if(suco[contS].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contS,suco[contS].nome,suco[contS].cod,suco[contS].preco);
        }
    }
    printf("\nEscolha o numero do Registro que deseja Alterar \n");
    scanf("%d",&nRegis);
    printf("Nome \n");
    scanf(" %[^\n]s",suco[nRegis].nome);
    printf("Codigo \n");
    scanf("%d",&suco[nRegis].cod);
    printf("Preco \n");
    scanf("%f",&suco[nRegis].preco);
    system("cls");
    printf("Alterando.\n");
    Sleep(400);
    system("cls");
    printf("Alterando..\n");
    Sleep(400);
    system("cls");
    printf("Alterando...\n");
    Sleep(400);

}
//Refrigerante
void CadastroRe(){
    system("cls");
    printf("Nome do Refrigerante \n");
    scanf(" %[^\n]s",refri[contR].nome);
    printf("C�digo do Refrigerante \n");
    scanf("%d",&refri[contR].cod);
    printf("Pre�o do Refrigerante \n");
    scanf("%f",&refri[contR].preco);
    system("cls");
    printf("Refrigerante Cadastrado\n");
    Sleep(1000);
    contR++;
}
void verRefri(){
    int i = contR;
    system("cls");
    for(contR=0;contR<i;contR++){
        if(refri[contR].ativo==0){
            printf("Nome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",refri[contR].nome,refri[contR].cod,refri[contR].preco);
        }
    }
    getchar();
    getchar();
}
void RemoverRe(){
    int nRegis;
    int i = contR;
    system("cls");
    for(contR=0;contR<i;contR++){
        if(refri[contR].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contR,refri[contR].nome,refri[contR].cod,refri[contR].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja remover \n");
    scanf("%d",&nRegis);
    refri[nRegis].ativo=1;
    system("cls");
    printf("Removendo.\n");
    Sleep(400);
    system("cls");
    printf("Removendo..\n");
    Sleep(400);
    system("cls");
    printf("Removendo...\n");
    Sleep(400);

}
void AlterarRe(){
    int nRegis;
    int i = contR;
    system("cls");
    for(contR=0;contR<i;contR++){
        if(refri[contR].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contR,refri[contR].nome,refri[contR].cod,refri[contR].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja alterar \n");
    scanf("%d",&nRegis);
    printf("Nome \n");
    scanf(" %[^\n]s",refri[nRegis].nome);
    printf("C�digo \n");
    scanf("%d",&refri[nRegis].cod);
    printf("Pre�o \n");
    scanf("%f",&refri[nRegis].preco);
    system("cls");
    printf("Alterando.\n");
    Sleep(400);
    system("cls");
    printf("Alterando..\n");
    Sleep(400);
    system("cls");
    printf("Alterando...\n");
    Sleep(400);
}
//Coquiteis
void CadastroCock(){
    system("cls");
    printf("Nome do Coquit�l \n");
    scanf(" %[^\n]s",coqui[contCo].nome);
    printf("C�digo do Coquit�l \n");
    scanf("%d",&coqui[contCo].cod);
    printf("Pre�o do Coquit�l \n");
    scanf("%f",&coqui[contCo].preco);
    system("cls");
    printf("Coquit�l Cadastrado\n");
    Sleep(1000);
    contCo++;
}
void verCock(){
    int i = contCo;
    system("cls");
    for(contCo=0;contCo<i;contCo++){
        if(coqui[contCo].ativo==0){
            printf("Nome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",coqui[contCo].nome,coqui[contCo].cod,coqui[contCo].preco);
        }
    }
    getchar();
    getchar();
}
void RemoverCock(){
    int nRegis;
    int i = contCo;
    system("cls");
    for(contCo=0;contCo<i;contCo++){
        if(coqui[contCo].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contCo,coqui[contCo].nome,coqui[contCo].cod,coqui[contCo].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja remover \n");
    scanf("%d",&nRegis);
    coqui[nRegis].ativo=1;
    system("cls");
    printf("Removendo.\n");
    Sleep(400);
    system("cls");
    printf("Removendo..\n");
    Sleep(400);
    system("cls");
    printf("Removendo...\n");
    Sleep(400);

}
void AlterarCock(){
    int nRegis;
    int i = contCo;
    system("cls");
    for(contCo=0;contCo<i;contCo++){
        if(coqui[contCo].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contCo,coqui[contCo].nome,coqui[contCo].cod,coqui[contCo].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja alterar \n");
    scanf("%d",&nRegis);
    printf("Nome \n");
    scanf(" %[^\n]s",coqui[nRegis].nome);
    printf("C�digo \n");
    scanf("%d",&coqui[nRegis].cod);
    printf("Pre�o \n");
    scanf("%f",&coqui[nRegis].preco);
    system("cls");
    printf("Alterando.\n");
    Sleep(400);
    system("cls");
    printf("Alterando..\n");
    Sleep(400);
    system("cls");
    printf("Alterando...\n");
    Sleep(400);
}
//Drinks
void CadastroDrink(){
    system("cls");
    printf("Nome do Drink \n");
    scanf(" %[^\n]s",drink[contD].nome);
    printf("C�digo do Drink \n");
    scanf("%d",&drink[contD].cod);
    printf("Pre�o do Drink \n");
    scanf("%f",&drink[contD].preco);
    system("cls");
    printf("Drink Cadastrado\n");
    Sleep(1000);
    contD++;
}
void verDrink(){
    int i = contD;
    system("cls");
    for(contD=0;contD<i;contD++){
        if(drink[contD].ativo==0){
            printf("Nome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",drink[contD].nome,drink[contD].cod,drink[contD].preco);
        }
    }
    getchar();
    getchar();
}
void RemoverDrink(){
    int nRegis;
    int i = contD;
    system("cls");
    for(contD=0;contD<i;contD++){
        if(drink[contD].ativo==0){
            printf("N�mero do registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contD,drink[contD].nome,drink[contD].cod,drink[contD].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja remover \n");
    scanf("%d",&nRegis);
    drink[nRegis].ativo=1;
    system("cls");
    printf("Removendo.\n");
    Sleep(400);
    system("cls");
    printf("Removendo..\n");
    Sleep(400);
    system("cls");
    printf("Removendo...\n");
    Sleep(400);
}
void AlterarDrink(){
    int nRegis;
    int i = contD;
    system("cls");
    for(contD=0;contD<i;contD++){
        if(drink[contD].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contD,drink[contD].nome,drink[contD].cod,drink[contD].preco);
        }
    }
    printf("\nEscolha o numero do Registro que deseja Alterar \n");
    scanf("%d",&nRegis);
    printf("Nome \n");
    scanf(" %[^\n]s",drink[nRegis].nome);
    printf("C�digo \n");
    scanf("%d",&drink[nRegis].cod);
    printf("Pre�o \n");
    scanf("%f",&coqui[nRegis].preco);
    system("cls");
    printf("Alterando.\n");
    Sleep(400);
    system("cls");
    printf("Alterando..\n");
    Sleep(400);
    system("cls");
    printf("Alterando...\n");
    Sleep(400);
}
void CadastroLa(){
    system("cls");
    printf("Nome do Lanche \n");
    scanf(" %[^\n]s",lanche[contL].nome);
    printf("C�digo do Lanche \n");
    scanf("%d",&lanche[contL].cod);
    printf("Pre�o do Lanche \n");
    scanf("%f",&lanche[contL].preco);
    system("cls");
    printf("Lanche Cadastrado\n");
    Sleep(1000);
    contL++;
}
void verLanche(){
    int i = contL;
    system("cls");
    for(contL=0;contL<i;contL++){
        if(lanche[contL].ativo==0){
            printf("Nome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",lanche[contL].nome,lanche[contL].cod,lanche[contL].preco);
        }
    }
    getchar();
    getchar();
}
void RemoverLa(){
    int nRegis;
    int i = contL;
    system("cls");
    for(contL=0;contL<i;contL++){
        if(lanche[contL].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contL,lanche[contL].nome,lanche[contL].cod,lanche[contL].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja remover \n");
    scanf("%d",&nRegis);
    lanche[nRegis].ativo=1;
    system("cls");
    printf("Removendo.\n");
    Sleep(400);
    system("cls");
    printf("Removendo..\n");
    Sleep(400);
    system("cls");
    printf("Removendo...\n");
    Sleep(400);
}
void AlterarLa(){
    int nRegis;
    int i = contL;
    system("cls");
    for(contL=0;contL<i;contL++){
        if(lanche[contL].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contL,lanche[contL].nome,lanche[contL].cod,lanche[contL].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja alterar \n");
    scanf("%d",&nRegis);
    printf("Nome \n");
    scanf(" %[^\n]s",lanche[nRegis].nome);
    printf("C�digo \n");
    scanf("%d",&lanche[nRegis].cod);
    printf("Pre�o \n");
    scanf("%f",&lanche[nRegis].preco);
    system("cls");
    printf("Alterando.\n");
    Sleep(400);
    system("cls");
    printf("Alterando..\n");
    Sleep(400);
    system("cls");
    printf("Alterando...\n");
    Sleep(400);
}
void CadastroSo(){
    system("cls");
    printf("Nome da Sobremesa \n");
    scanf(" %[^\n]s",sobreme[contSob].nome);
    printf("C�digo da Sobremesa \n");
    scanf("%d",&sobreme[contSob].cod);
    printf("Pre�o da Sobremesa \n");
    scanf("%f",&sobreme[contSob].preco);
    system("cls");
    printf("Sobremesa Cadastrada\n");
    Sleep(1000);
    contSob++;

}
void verSobre(){
    int i = contSob;
    system("cls");
    for(contSob=0;contSob<i;contSob++){
        if(sobreme[contSob].ativo==0){
            printf("Nome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",sobreme[contSob].nome,sobreme[contSob].cod,sobreme[contSob].preco);
        }
    }
    getchar();
    getchar();
}
void RemoverSo(){
    int nRegis;
    int i = contSob;
    system("cls");
    for(contSob=0;contSob<i;contSob++){
        if(sobreme[contSob].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contSob,sobreme[contSob].nome,sobreme[contSob].cod,sobreme[contSob].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja remover \n");
    scanf("%d",&nRegis);
    sobreme[nRegis].ativo=1;
    system("cls");
    printf("Removendo.\n");
    Sleep(400);
    system("cls");
    printf("Removendo..\n");
    Sleep(400);
    system("cls");
    printf("Removendo...\n");
    Sleep(400);
}
void AlterarSo(){
    int nRegis;
    int i = contSob;
    system("cls");
    for(contSob=0;contSob<i;contSob++){
        if(sobreme[contSob].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contSob,sobreme[contSob].nome,sobreme[contSob].cod,sobreme[contSob].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja alterar \n");
    scanf("%d",&nRegis);
    printf("Nome \n");
    scanf(" %[^\n]s",sobreme[nRegis].nome);
    printf("C�digo \n");
    scanf("%d",&sobreme[nRegis].cod);
    printf("Pre�o \n");
    scanf("%f",&sobreme[nRegis].preco);
    system("cls");
    printf("Alterando.\n");
    Sleep(400);
    system("cls");
    printf("Alterando..\n");
    Sleep(400);
    system("cls");
    printf("Alterando...\n");
    Sleep(400);
}
void CadastroAc(){
    system("cls");
    printf("Nome do Acompanhamento \n");
    scanf(" %[^\n]s",acomp[contAc].nome);
    printf("C�digo do Acompanhamento \n");
    scanf("%d",&acomp[contAc].cod);
    printf("Pre�o do Acompanhamento \n");
    scanf("%f",&acomp[contAc].preco);
    system("cls");
    printf("Acompanhamento Cadastrado\n");
    Sleep(1000);
    contAc++;
}
void verAcomp(){
    int i = contAc;
    system("cls");
    for(contAc=0;contAc<i;contAc++){
        if(acomp[contAc].ativo==0){
            printf("Nome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",acomp[contAc].nome,acomp[contAc].cod,acomp[contAc].preco);
        }
    }
    getchar();
    getchar();
}
void RemoverAc(){
    int nRegis;
    int i = contAc;
    system("cls");
    for(contAc=0;contAc<i;contAc++){
        if(acomp[contAc].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contAc,acomp[contAc].nome,acomp[contAc].cod,acomp[contAc].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja remover \n");
    scanf("%d",&nRegis);
    acomp[nRegis].ativo=1;
    system("cls");
    printf("Removendo.\n");
    Sleep(400);
    system("cls");
    printf("Removendo..\n");
    Sleep(400);
    system("cls");
    printf("Removendo...\n");
    Sleep(400);
}
void AlterarAc(){
    int nRegis;
    int i = contAc;
    system("cls");
    for(contAc=0;contAc<i;contAc++){
        if(acomp[contAc].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nC�digo: %d\nPre�o: R$ %0.2f\n\n",contAc,acomp[contAc].nome,acomp[contAc].cod,acomp[contAc].preco);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja alterar \n");
    scanf("%d",&nRegis);
    printf("Nome \n");
    scanf(" %[^\n]s",acomp[nRegis].nome);
    printf("C�digo \n");
    scanf("%d",&acomp[nRegis].cod);
    printf("Pre�o \n");
    scanf("%f",&acomp[nRegis].preco);
    system("cls");
    printf("Alterando.\n");
    Sleep(400);
    system("cls");
    printf("Alterando..\n");
    Sleep(400);
    system("cls");
    printf("Alterando...\n");
    Sleep(400);
}
//Funcionarios
void Cadastrofunc(){
    system("cls");
    printf("Nome\n");
    scanf(" %[^\n]s",funcio[contF].nome);
    printf("Sexo\n");
    scanf(" %[^\n]s",&funcio[contF].sexo);
    printf("CPF \n");
    scanf(" %[^\n]s",&funcio[contF].cpf);
    printf("Cargo \n");
    scanf(" %[^\n]s",funcio[contF].cargo);
    printf("Telefone \n");
    scanf("%d",&funcio[contF].telefone);
    system("cls");
    printf("Funcion�rio Cadastrado\n");
    Sleep(1000);
    contF++;
}
void verFunc(){
    int i = contF;
    system("cls");
    for(contF=0;contF<i;contF++){
        if(funcio[contF].ativo==0){
            printf("Nome: %s\nCPF: %s\nSexo: %s\nCargo: %s\nTelefone: %d\n\n",funcio[contF].nome,funcio[contF].cpf,funcio[contF].sexo,funcio[contF].cargo,funcio[contF].telefone);
        }
    }
    getchar();
    getchar();
}
void RemoverFunc(){
    int nRegis;
    int i = contF;
    system("cls");
    for(contF=0;contF<i;contF++){
        if(funcio[contF].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nCPF: %s\nSexo: %s\nCargo: %s\nTelefone: %d\n\n",contF,funcio[contF].nome,funcio[contF].cpf,funcio[contF].sexo,funcio[contF].cargo,funcio[contF].telefone);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja remover \n");
    scanf("%d",&nRegis);
    funcio[nRegis].ativo=1;
    system("cls");
    printf("Removendo.\n");
    Sleep(400);
    system("cls");
    printf("Removendo..\n");
    Sleep(400);
    system("cls");
    printf("Removendo...\n");
    Sleep(400);
}
void AlterarFunc(){
    int nRegis;
    int i = contF;
    system("cls");
    for(contF=0;contF<i;contF++){
        if(funcio[contF].ativo==0){
            printf("N�mero do Registro:%d\nNome: %s\nCPF: %s\nSexo: %s\nCargo: %s\nTelefone: %d\n\n",contF,funcio[contF].nome,funcio[contF].cpf,funcio[contF].sexo,funcio[contF].cargo,funcio[contF].telefone);
        }
    }
    printf("\nEscolha o n�mero do registro que deseja alterar \n");
    scanf("%d",&nRegis);
    printf("Nome \n");
    scanf(" %[^\n]s",funcio[nRegis].nome);
    printf("Sexo\n");
    scanf(" %[^\n]s",&funcio[nRegis].sexo);
    printf("CPF \n");
    scanf(" %[^\n]s",&funcio[nRegis].cpf);
    printf("Cargo \n");
    scanf(" %[^\n]s",funcio[nRegis].cargo);
    printf("Telefone \n");
    scanf("%d",&funcio[nRegis].telefone);
    system("cls");
    printf("Alterando.\n");
    Sleep(400);
    system("cls");
    printf("Alterando..\n");
    Sleep(400);
    system("cls");
    printf("Alterando...\n");
    Sleep(400);
}
