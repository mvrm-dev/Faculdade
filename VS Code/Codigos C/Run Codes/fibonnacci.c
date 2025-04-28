#include <stdio.h>

int fibonacci(int);

int main(){
    int num_loop;
    
    while (scanf("%d",&num_loop)!= EOF){
        printf("%d",fibonacci(num_loop));
    }
    return 0;
}

int fibonacci(int n_loop){
    unsigned long long conta = 0, var1 = 0, var2 = 1;
    
    if (n_loop <= 1){
        printf("%d",conta+1);
    }
    
    else{
        for (int x = 1; x < n_loop; x++){
            conta = var1+var2;
            var1 = var2;
            var2 = conta;
        }
        printf("%llu\n",conta);    
    }

    return 0;
}