#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int opcao;
int ncadastros;
int i;
int x = 1;
char cpfprocura[11];
int y = 1;
int verdade;

struct cadastro {
	int codigo;
	char nome[50];
	int cpf;
	char nomevacina[20];
	char data[100];
	int numerolote;
};




int main() {
    
    struct cadastro lista[10];
    
    
	printf("Bem-vindo ao programa de vacinas do estado do Rio de Janeiro! Digite uma opcao:\n1 - Cadastrar Vacina\n2 - Listar Aplicacoes\n3 - Consultar por CPF\n4 - Sair\n\n");
	scanf("%d", &opcao);
	while (opcao != 4){
	switch(opcao){
		case 1:
		    printf("quantos cadastros deseja fazer?\n");
		    fflush(stdout);
		    scanf("%d", &ncadastros);
		    for (i = 1; i <= ncadastros; i = i + 1){
		        lista[i].codigo = i;
				fflush(stdout);
				__fpurge(stdin);
				printf("Digite o seu Nome %d :\n",i);
			    fflush(stdout);
			    __fpurge(stdin);
				gets(lista[i].nome);
				printf("Digite o seu CPF:\n");
				fflush(stdout);
				scanf("%d",&lista[i].cpf);
				printf("Digite o nome da vacina:\n");
				fflush(stdout);
				__fpurge(stdin);
				gets(lista[i].nomevacina);
				printf("Digite a Data da Vacina:\n");
				fflush(stdout);
				__fpurge(stdin);
				gets(lista[i].data);
				printf("Digite o numero de lote:\n");
				fflush(stdout);
				__fpurge(stdin);
				scanf("%d", &lista[i].numerolote);
				fflush(stdout);
		        
		    }
		    printf("Oque deseja fazer agora?\n1 - Cadastrar Vacina\n2 - Listar Aplicacoes\n3 - Consultar por CPF\n4 - Sair\n");
		    fflush(stdout);
			__fpurge(stdin);
			scanf("%d", &opcao);
			break;
		case 2:
				for (x = 1; x <= ncadastros; x = x + 1){
					printf("------------------\nRegistro %d:\nCodigo: %d\nNome: %s\nCPF: %d\nNome da Vacina: %s\nData da vacina: %s\nNumero de Lote: %d\n------------------\n",x, lista[x].codigo, lista[x].nome, lista[x].cpf, lista[x].nomevacina, lista[x].data,lista[x].numerolote);
				
			}
			printf("Oque deseja fazer agora?\n1 - Cadastrar Vacina\n2 - Listar Aplicacoes\n3 - Consultar por CPF\n4 - Sair\n");
			scanf("%d", &opcao);
			break;
		
		
		
		case 3:
		    
			printf("Digite o CPF o qual quer consultar cadastro:\n");
			gets(cpfprocura);
			fflush(stdout);
			__fpurge(stdin);
			for (y = 1; y <= ncadastros; y = y + 1){
			    verdade= strcmp(lista[y].cpf,cpfprocura == 0);
			    if (verdade==0){
			        printf("CPF encontrado, segue cadastro:\nCodigo: %d\nNome: %s\nCPF: %d\nNome da Vacina: %s\nData da vacina: %s\nNumero de Lote: %d", lista[y].codigo, lista[y].nome, lista[y].cpf, lista[y].nomevacina, lista[y].data,lista[y].numerolote);
			    }
			    else{
			        printf("CPF não encontrado.\n");
			    }
			
			    
			    
			    
			}
			
			printf("Oque deseja fazer agora?\n1 - Cadastrar Vacina\n2 - Listar Aplicacoes\n3 - Consultar por CPF\n4 - Sair\n");
			fflush(stdout);
			__fpurge(stdin);
			scanf("%d", &opcao);
			break;
		
	}
}
	printf("Obrigado por usar o programa de vacinas do Rio de Janeiro :)");
	
	
	
	
	
		return 0;
}