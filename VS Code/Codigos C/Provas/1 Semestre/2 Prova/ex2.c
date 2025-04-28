#include <stdio.h>

int main(){
    float n1,n2,n3,n4,res;
    int punicao;

    scanf("%f %f %f %f %d", &n1,&n2,&n3,&n4,&punicao);

    res = (100.0-punicao)/100 * (n1+n2+n3+n4)/4;
    
    printf("%.1f\n",res);

    return 0;
}