//Bibliotecas necessárias para executar o programa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
/*Estrutura do tipo paciente*/
struct paciente{
    char Nome[30];
    int Cpf[20];
    char telefone[10];
    char nascimento[10];
    char email[20];
};
struct paciente pac1, *ptr_pac1;

/*Estrutura do tipo endereço junto com a estrutura usuário*/
struct endereco{
    char logradouro[10];
    char numero[4];
    char complemento[20];
    char cep[10];
    char bairro[20];
    char cidade[20];
    char estado[3];
};
struct endereco end1, *ptr_end1;

ptr_pac1=&pac1;
printf("\n Digite seu nome completo: ");
scanf("%d",&ptr_pac1->nNome);
ptr_pac1=&pac1;
printf("\n Digite seu cpf: ");
scanf("%d",&ptr_pac1->nCpf);













//Validar usuário e senha

typedef struct{
    char login[30];
    char senha[30];
} pessoa; pessoa p[1];

int main(){
    setlocale (LC_ALL,"portuguese");
    char login[30];
    char senha[30];

    strcpy (p[0].login, "David");
    strcpy (p[0].senha, "123");


    printf("\n\t\tlogin:");
    scanf("%s", login);
    printf("\n\t\tsenha:");
    scanf("%s", senha);

    if ((strcmp(login,p[0].login)==0) || (strcmp(senha,p[0].senha)==0)){
        printf("Usuário logado");
    }else{
        printf("Login e/ou senha incorretos");
    }

    return 0;




}
