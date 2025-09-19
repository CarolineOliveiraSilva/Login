#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>


#define vermelho "\x1b[31m"
#define verde "\x1b[32m"
#define reset "\x1b[0m"

#define usuario  "Administrador"
#define senha "1234"
#define tentativas 3


int login(){

    char nome[20];
    char senhau[10];
    int chances = 0;


    while(chances < tentativas){
        printf("Digite seu nome do usuario ");
        scanf("%s", nome);
        printf("%s agora digite sua senha: ", nome);
        scanf("%s", senhau);

        if(strcmp(nome, usuario)==0 && strcmp(senhau, senha)==0){

            printf(verde "Login efetuado com sucesso" reset);
            
            Sleep(1500);

            return 0;

        }else{

            printf(vermelho" Usuario ou senha invalido\n" reset);

        }
            if(chances < tentativas){
                
                chances++;
                printf("Você tem %d tentantivas\n" ,tentativas - chances);

            }

    }
     return 1;

}
int main(){

    
    SetConsoleOutputCP(65001);


    if(login()!=0){
        return 1;
    }
    system("cls");

    printf("Seja bem vindo");

    return 0;

}