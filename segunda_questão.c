#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificador(){

    int n;
    printf(
           "Qual número deseja converter?\n"
           "1 - Binário\n"
           "2 - Octal\n"
           "3 - Hexadecimal\n"
           );


    do{
        scanf("%d", &n);

    }while(n < 1 || n > 3);

    return n;
}

int number(){

    int n;
    printf("Valor: ");
    scanf("\n%d", &n);
    return n;

}

void binario(n){
    int binario, cont = 0, i;
    int bi[20];

    while(n >= 2){
        bi[cont] = n % 2;
        n /= 2;
        if(n == 1){
            bi[cont + 1] =  1;
        }


        cont++;
    }

        printf("\nBinário: ");
    for(i = cont; i >= 0; i--){
        printf("%d", bi[i]);
    }
}

void hexa(n){
    int cont = 0, i;
    char he[20];

    while(n >= 16){
        if(n % 16 == 0){
            he[cont] = '0';
        }
        if(n % 16 == 1){
            he[cont] = '1';
        }
        if(n % 16 == 2){
            he[cont] = '2';
        }
        if(n % 16 == 3){
            he[cont] = '3';
        }
        if(n % 16 == 4){
            he[cont] = '4';
        }
        if(n % 16 == 5){
            he[cont] = '5';
        }
        if(n % 16 == 6){
            he[cont] = '6';
        }
        if(n % 16 == 7){
            he[cont] = '7';
        }
        if(n % 16 == 8){
            he[cont] = '8';
        }
        if(n % 16 == 9){
            he[cont] = '9';
        }

        if(n % 16 == 10){
            he[cont] = 'A';
        }
        if(n % 16 == 11){
            he[cont] = 'B';
        }
        if(n % 16 == 12){
            he[cont] = 'C';
        }
        if(n % 16 == 13){
            he[cont] = 'D';
        }
        if(n % 16 == 14){
            he[cont] = 'E';
        }
        if(n % 16 == 15){
            he[cont] = 'F';
        }
        n /= 16;
        if(n < 16){
        if(n == 0){
            he[cont+ 1] = '0';
        }
        if(n == 1){
            he[cont+ 1] = '1';
        }
        if(n == 2){
            he[cont+ 1] = '2';
        }
        if(n == 3){
            he[cont+ 1] = '3';
        }
        if(n == 4){
            he[cont+ 1] = '4';
        }
        if(n == 5){
            he[cont+ 1] = '5';
        }
        if(n == 6){
            he[cont+ 1] = '6';
        }
        if(n == 7){
            he[cont+ 1] = '7';
        }
        if(n == 8){
            he[cont+ 1] = '8';
        }
        if(n == 9){
            he[cont+ 1] = '9';
        }

        if(n == 10){
            he[cont+ 1] = 'A';
        }
        if(n == 11){
            he[cont+ 1] = 'B';
        }
        if(n == 12){
            he[cont+ 1] = 'C';
        }
        if(n == 13){
            he[cont+ 1] = 'D';
        }
        if(n == 14){
            he[cont+ 1] = 'E';
        }
        if(n == 15){
            he[cont + 1] = 'F';
        }
        }

        cont++;
    }

        printf("\nHexadecimal: ");
    for(i = cont; i >= 0; i--){
        printf("%c", he[i]);
    }
}

void octa(n){
    int cont = 0, i;
    int oct[20];

    while(n >= 8){
        oct[cont] = n % 8;
        n /= 8;
        if(n < 8){
            oct[cont + 1] =  n;
        }
        cont++;
    }

        printf("\nOctadecimal: ");
    for(i = cont; i >= 0; i--){
        printf("%d", oct[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int number1, n, count = 0;

    do{
        number1 = number();
        n = verificador();

        if(n==1)binario(number1);
        else if(n==2) octa(number1);
        else if(n==3) hexa(number1);


        printf(
               "\n\nDeseja fazer outro calculo?\n"
               "0 - Não\n"
               "1 - Sim\n"
               );
        scanf("%d", &count);
        printf("\n\n\n");
    }while(count != 0);


    return 0;
}
