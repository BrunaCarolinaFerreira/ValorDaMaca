/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valor, valorTotal;
    int quantidade;

    printf("Digite a quantidade de maças compradas (em unidade): ");
    scanf("%i", &quantidade);
    
    if(quantidade < 12){
        valor = 0.25;
    }
    else
    {
        valor = 0.30;
    }
    
    printf("O valor da unidade da maça é %.2f \n", valor);
    
    valorTotal = valor * quantidade;
    
    printf("O valor total a ser pago é: %.2f \n", valorTotal);

    return 0;
}
