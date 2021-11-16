//Autores: Daniel Caetano de Souza Ferreira e Taynï¿½ Souza Malaquias.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int entradaUsuario;

void abertura()
{

    printf("\n/**************************/\n");
    printf("/* ESCOLHA O SEU MENU '-' */\n");
    printf("/**************************/\n\n");

    
}

void menu()
{
    printf("Qual operação deseja realizar? Digite o número de sua escolha: \n");
    printf("[1] - Fazer contas utilizando uma calculadora! \n");   
    printf("[2] - Realizar a conta da potência de um número!\n");   
    printf("[3] - Calcular o volume do tronco de uma pirâmide! \n"); 
    

    scanf("%d", &entradaUsuario);
}

void calcular()
{
    char outraOperacao;
    float numeroA;
    float numeroB;
    char operacao;
    float resultado;

    printf("\n _____________________\n");
    printf("|  _________________  |\n");
    printf("| |                 | |\n");
    printf("| |_________________| |\n");
    printf("|  ___ ___ ___   ___  |\n");
    printf("| | 7 | 8 | 9 | | + | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 4 | 5 | 6 | | - | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 1 | 2 | 3 | | x | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | . | 0 | = | | / | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("|_____________________|\n\n");

    printf("Digite o primeiro número que deseja para realizar a operação: \n");
    scanf(" %f", &numeroA);

    printf("\n _____________________\n");
    printf("|  _________________  |\n");
    printf("| |                 | |\n");
    printf("| |  %.2f             | |\n", numeroA);
    printf("| |_________________| |\n");
    printf("|  ___ ___ ___   ___  |\n");
    printf("| | 7 | 8 | 9 | | + | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 4 | 5 | 6 | | - | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 1 | 2 | 3 | | x | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | . | 0 | = | | / | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("|_____________________|\n\n");

    printf("Digite a operaï¿½ï¿½o que deseja fazer: [+][-][*][/]\n");
    scanf(" %c", &operacao);

    printf("\n _____________________\n");
    printf("|  _________________  |\n");
    printf("| |                 | |\n");
    printf("| |  %.2f  %c         | |\n", numeroA, operacao);
    printf("| |_________________| |\n");
    printf("|  ___ ___ ___   ___  |\n");
    printf("| | 7 | 8 | 9 | | + | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 4 | 5 | 6 | | - | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 1 | 2 | 3 | | x | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | . | 0 | = | | / | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("|_____________________|\n\n");

    printf("Digite o segundo nï¿½mero que deseja para realizar a operação: \n");
    scanf(" %f", &numeroB);

    printf("\n _____________________\n");
    printf("|  _________________  |\n");
    printf("| |                 | |\n");
    printf("| |  %.2f  %c   %.2f    | |\n", numeroA, operacao, numeroB);
    printf("| |_________________| |\n");
    printf("|  ___ ___ ___   ___  |\n");
    printf("| | 7 | 8 | 9 | | + | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 4 | 5 | 6 | | - | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | 1 | 2 | 3 | | x | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("| | . | 0 | = | | / | |\n");
    printf("| |___|___|___| |___| |\n");
    printf("|_____________________|\n\n");

    system("cls");

    printf("\nResultado: ");


    

    switch (operacao)
    {
        case '+':
            resultado = numeroA + numeroB;
            printf(" %.2f %c %.2f = %.2f\n\n", numeroA, operacao, numeroB, resultado);

            printf("\n _____________________\n");
            printf("|  _________________  |\n");
            printf("| |                 | |\n");
            printf("| |%.2f%c%.2f = %.2f| |\n", numeroA, operacao, numeroB, resultado);
            printf("| |_________________| |\n");
            printf("|  ___ ___ ___   ___  |\n");
            printf("| | 7 | 8 | 9 | | + | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 4 | 5 | 6 | | - | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 1 | 2 | 3 | | x | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | . | 0 | = | | / | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("|_____________________|\n\n");
            break;
        case '-':
            resultado = numeroA - numeroB;
            printf(" %.2f %c %.2f = %.2f\n\n", numeroA, operacao, numeroB, resultado);

            printf("\n _____________________\n");
            printf("|  _________________  |\n");
            printf("| |                 | |\n");
            printf("| |%.2f%c%.2f = %.2f| |\n", numeroA, operacao, numeroB, resultado);
            printf("| |_________________| |\n");
            printf("|  ___ ___ ___   ___  |\n");
            printf("| | 7 | 8 | 9 | | + | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 4 | 5 | 6 | | - | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 1 | 2 | 3 | | x | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | . | 0 | = | | / | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("|_____________________|\n\n");
            break;
        case '*':
            resultado = numeroA * numeroB;
            printf(" %.2f %c %.2f = %.2f\n\n", numeroA, operacao, numeroB, resultado);
            printf("\n _____________________\n");
            printf("|  _________________  |\n");
            printf("| |                 | |\n");
            printf("| |%.2f%c%.2f = %.2f| |\n", numeroA, operacao, numeroB, resultado);
            printf("| |_________________| |\n");
            printf("|  ___ ___ ___   ___  |\n");
            printf("| | 7 | 8 | 9 | | + | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 4 | 5 | 6 | | - | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 1 | 2 | 3 | | x | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | . | 0 | = | | / | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("|_____________________|\n\n");
            break;
        case '/':
            if(numeroB == 0){
                printf("Você não pode dividir um número por '0'!\n");
                break;
            }
            resultado = numeroA / numeroB;
            printf(" %.2f %c %.2f = %.2f\n\n", numeroA, operacao, numeroB, resultado);
            printf("\n _____________________\n");
            printf("|  _________________  |\n");
            printf("| |                 | |\n");
            printf("| |%.2f%c%.2f = %.2f| |\n", numeroA, operacao, numeroB, resultado);
            printf("| |_________________| |\n");
            printf("|  ___ ___ ___   ___  |\n");
            printf("| | 7 | 8 | 9 | | + | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 4 | 5 | 6 | | - | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 1 | 2 | 3 | | x | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | . | 0 | = | | / | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("|_____________________|\n\n");
            break;
        
        default:
            printf("Digite um valor válido para realizar a operação! [+][-][*][/]\n");
            printf("\n _____________________\n");
            printf("|  _________________  |\n");
            printf("| |                 | |\n");
            printf("| |     ERRROR      | |\n");
            printf("| |_________________| |\n");
            printf("|  ___ ___ ___   ___  |\n");
            printf("| | 7 | 8 | 9 | | + | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 4 | 5 | 6 | | - | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | 1 | 2 | 3 | | x | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("| | . | 0 | = | | / | |\n");
            printf("| |___|___|___| |___| |\n");
            printf("|_____________________|\n\n");
            break;
    }

    printf("\nDeseja fazer outra operação? 'S' ou 'N'\n");
    scanf(" %c", &outraOperacao);

    if(outraOperacao == 'S' || outraOperacao == 's'){
        calcular();
    }
}

void calculaPotencia(){

    char outraOperacao;
    float potencia;
    int base;
    int exp;


    printf("\nDigite a base: ");
    scanf(" %d",&base);
    printf("\nDigite o expoente: ");
    scanf(" %d",&exp);
    potencia = pow(base, exp);
    printf("\n%d^%d = %.2f\n", base, exp, potencia);

    printf("\nDeseja fazer outra operação? 'S' ou 'N'\n");
    scanf(" %c", &outraOperacao);

    if(outraOperacao == 'S' || outraOperacao == 's'){
        calculaPotencia();
    }

}

void areaTronco(){

    char outraOperacao;
    float altura;
    float baseMenor;
    float baseMaior;
    float raizQuadrada;
    float multiplica;

    
    printf("\nDigite a base menor: ");
    scanf(" %f",&baseMenor);
    printf("\nDigite a base maior: ");
    scanf(" %f",&baseMaior);
    printf("\nDigite a altura: ");
    scanf(" %f",&altura);


    multiplica=baseMenor*baseMaior;
    raizQuadrada=sqrt(multiplica);
    float volume= ( altura* ( baseMenor +raizQuadrada+ baseMaior) ) /3.0;

    system("cls");

    printf("\n            /___I___I___I___I\\ \n");
    printf("           /__I___I___I___I___\\ \n");
    printf("          /_I___I___I___I___I__\\ \n");
    printf("         /I___I___I___I___I___I_\\ \n");
    printf("        /___I___I___I___I___I___I\\ \n");
    printf("       /__I___I___I___I___I___I___\\ \n");
    printf("      /_I___I___I___I___I___I___I__\\ \n");

    printf("\nVolume do tronco é = |%.2f|\n", volume);

    printf("\nDeseja fazer outra operação? 'S' ou 'N'\n");
    scanf(" %c", &outraOperacao);

    if(outraOperacao == 'S' || outraOperacao == 's'){
        areaTronco();
    }
}

int main ()
{       

    char voltarAoMenu;
    int executar = 0;

    setlocale(LC_ALL, "Portuguese");
    printf("\nAlunos: Daniel Caetano de Souza Ferreira e Taynï¿½ Souza Malaquias\n\n\n");
    printf("/**************************/\n");
    printf("Bem vindo ao TanDan Sistemas!\n");
    printf("/**************************/\n\n");
    
    do{
        
         abertura();
         menu();

         switch (entradaUsuario)
        {
            case 1:
                calcular();
                break;

            case 2:
                calculaPotencia();                
                break;

            case 3:
                areaTronco();
                break;
            default:
                printf("Digite uma operação válida! Opções: [1], [2] ou [3]");
        }              


        printf("\nDeseja voltar ao menu principal? 'S' ou 'N'\n");
        scanf(" %c", &voltarAoMenu);

        if(voltarAoMenu != 'S' && voltarAoMenu != 's'){
            executar = 1;
        }
        system("cls"); 
    

   } while(!executar);

}