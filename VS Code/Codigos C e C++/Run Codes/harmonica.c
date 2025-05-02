#include <stdio.h>

void harmonica(int);

int main(){
    int n;
    while(scanf("%d",&n) != EOF){
    
    harmonica(n);
    }
    return 0;
}

void harmonica(int num){
    float harmonica = 1;
    for(float x = 2.0; x <= num; x++){
        harmonica += (1 / x);
    }
    printf("%.8f\n",harmonica);

}

