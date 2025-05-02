#include <stdio.h>
#include <math.h>

void baskara();

int main(){
baskara();
    
}

void baskara(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);

    float delta = pow(b,2) -(4*a*c);
    if (a > 0)
    {
    if(delta >=0){
        float r1 = ((-1*b) + sqrt(delta)) / (2*a);
        float r2 = ((-1*b) - sqrt(delta)) / (2*a);
        printf("%.2f\t%.2f\n",r1,r2);
    }

    else printf("NARN\n");
    }
    else printf("NARN\n");    
    
}