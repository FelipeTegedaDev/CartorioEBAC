#include<stdio.h> // biblioteca de comunica��o do usu�rio
#include<stdlib.h> // biblioteca de aloca��o do espa�o de mem�ria
#include<locale.h> // biblioteca de aloca��o de texto por regi�o 
#include<string.h> // biblioteca que cuida das strings
int registro()
{ 
    printf("Voc� escolheu Inserir nome!\n\n");

	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das strings
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
    system("pause");

	
	
	
}

int consulta()
{   
    setlocale(LC_ALL, "portuguese"); //Defini��o da lingua
     
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
	{
		printf("N�o foi poss�vel encontrar o conte�do, tente novamente.\n");
		
	}
	    
	    while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es dos usu�rios: ");
	    printf("%s", conteudo);
	    printf("\n\n");
	}
    
	        
	    system("pause");
}
    

int deletar()
{
	printf("Voc� escolheu Deletar nome!\n\n");
	system("pause");
}


int main()
{
	
	int opcao=0;
	
	int laco=1;
	
	for(laco=1;laco=1;)
    {
	  system("cls");
	  
	  setlocale(LC_ALL, "portuguese"); // Defini��o d alinguagem
	
	  printf("\tOl�, bem-vindo ao cart�rio da EBAC\n\n"); // In�cio do menu
	  printf("selecione  op��o desejada:\n\n");
 	  printf("\t1-Inserir nome\n");
	  printf("\t2-Consultar nome\n");
	  printf("\t3-Deletar nome\n\n");
	  printf("Op��o:");// Fim do menu
	
	  scanf("%d", &opcao); // Armazenando a escolha do usu�rio
	
	  system("cls");
	  
	  switch(opcao)
	  {
	  	case 1:
	     registro();
	 	break;
	 	
	 	case 2:
		 consulta();
		break;
		
		case 3:
		  deletar();
		break;
		
		default:
		  printf("Essa op��o n�o existe, tente novamente.\n\n");
 		  system("pause");
	  }
	}
}
