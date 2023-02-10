#include<stdio.h> // biblioteca de comunicação do usuário
#include<stdlib.h> // biblioteca de alocação do espaço de memória
#include<locale.h> // biblioteca de alocação de texto por região 
#include<string.h> // biblioteca que cuida das strings
int registro()
{ 
    printf("Você escolheu Inserir nome!\n\n");

	
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
    setlocale(LC_ALL, "portuguese"); //Definição da lingua
     
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
	{
		printf("Não foi possível encontrar o conteúdo, tente novamente.\n");
		
	}
	    
	    while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações dos usuários: ");
	    printf("%s", conteudo);
	    printf("\n\n");
	}
    
	        
	    system("pause");
}
    

int deletar()
{
	printf("Você escolheu Deletar nome!\n\n");
	system("pause");
}


int main()
{
	
	int opcao=0;
	
	int laco=1;
	
	for(laco=1;laco=1;)
    {
	  system("cls");
	  
	  setlocale(LC_ALL, "portuguese"); // Definição d alinguagem
	
	  printf("\tOlá, bem-vindo ao cartório da EBAC\n\n"); // Início do menu
	  printf("selecione  opção desejada:\n\n");
 	  printf("\t1-Inserir nome\n");
	  printf("\t2-Consultar nome\n");
	  printf("\t3-Deletar nome\n");
	  printf("\t4-Sair do sistema\n\n");
	  printf("Opção:");// Fim do menu
	
	  scanf("%d", &opcao); // Armazenando a escolha do usuário
	
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
		
		case 4:
		  printf("Obrigado por utilizar o sistema!\n");
		  return 0;
		  break;
		
		default:
		  printf("Essa opção não existe, tente novamente.\n\n");
 		  system("pause");
	  }
	}
}
