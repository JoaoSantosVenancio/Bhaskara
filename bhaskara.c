#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 float a, b, c;

    float Delta1(float a,float b,float c){
        float delta= b*b - (4*a*c);
        return delta;
    }
    float r1(float a,float b,float delta){
        float raiz = sqrt(delta);
        float x1 = ((-b + raiz)/2*a);
        return x1;
    }
     float r2(float a,float b,float delta){
        float raiz = sqrt(delta);
        float x2 = ((-b - raiz)/2*a);
        return x2;
    }
int main()
{
    float a,b,c;
    printf("Digite os valores para A, B e C:");
    scanf("%f %f %f",&a,&b,&c);
    float delta = Delta1(a,b,c);
    float x1 = r1(a,b,delta);
    float x2 = r2(a,b,delta);
    printf("\nDelta : %.2f\nX1: %.2f\nX2: %.2f",delta,x1,x2);
}
