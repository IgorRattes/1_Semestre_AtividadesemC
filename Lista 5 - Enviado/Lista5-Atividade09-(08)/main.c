#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float somatorio (float num, float den){
    float result=0;
    int cont=29, sub=29;
    do{
        result = result+(num/den);
        den = den-sub;
        num = num*2;
        cont++;
        sub= sub-2;

    }while(num<= 16384 && den>=1);
    return result;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float somat, num=1, den=225;
    somat= somatorio(num, den);
    printf("\nO Resultado do somatório é: %.4f\n", somat);
    return 0;
}
