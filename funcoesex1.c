/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b , float c){
    float delta, x1, x2;
    delta = b*b - 4 * a * c;
    
    if(delta < 0){
        printf("nao existe raizes reais nessa funcao");
    }else{
        x1 = (-b + sqrt(delta) / 2 * a);
        x2 = (-b - sqrt(delta) / 2 * a);
        
        printf("Raiz do x1: %.2f \n", x1);
        printf("Raiz do x2: %.2f \n", x2);
    }
}
    int main(){
        float a, b, c;
        printf("digite a: \n");
        scanf("%f", &a);
        printf("digite b: \n");
        scanf("%f", &b);
        printf("digite c: \n");
        scanf("%f", &c);
        
        bhaskara(a, b, c);
        
        return 0;
    }

