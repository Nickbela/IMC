#include <stdio.h>
#include <math.h>

int main(){
    double peso, altura, imc;

    printf("Qual seu peso?");
    scanf("%lf", &peso);

    printf("Qual sua altura?");
    scanf("%lf", &altura);

    imc = peso / pow(altura, 2); 
    //tbm poderia colocar o pow em uma variavel isolada

    printf("Seu IMC e: %f\n", imc);

    if(imc <= 18.5){
    printf("Voce esta abaixo do peso ideal");
    }

    else if((imc > 18.5) && (imc < 24.9)){
    printf("Voce esta no peso ideal");
    }

    else if((imc > 24.9) && (imc < 29.9)){
        printf("Voce esta acima do peso");
    }
    else if((imc > 29.9) && (imc < 34.9)){
        printf("VOce esta em Obesidade grau I");
    }
    else if((imc > 34.9) && (imc <= 40)){
        printf("Voce esta em Obesidade grau II");
    }
    else{
        printf("Voce esta em Obesidade grau III");
    }

    return 0; //indica o fim de todo o código, idependente se tem coisa depois ou não
}



