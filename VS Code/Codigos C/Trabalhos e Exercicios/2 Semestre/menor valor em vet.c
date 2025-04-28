#include <stdio.h>

int menor(int* v, int n){
    int min = 0;
    for(int x = 0; x < n; x++){
            if(min > v[x]){
                min = v[x];
            }
        }
    
    return min;
}

int main(){
    
    int num, y;

    scanf("%d",&num);

    int v[num];

    for(int x = 0; x < num; x++){
        scanf("%d",&v[x]);
        
    }

    menor(v, num);

    return 0;
} 