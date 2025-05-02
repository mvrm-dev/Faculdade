#include <stdio.h>
#define NMAX 10000001

int C[NMAX];

void Crivo()
{
    for (int i = 0; i < NMAX; ++i)
    {
        C[i] = 1;
    }
    C[1] = 0;

    for (int i = 4; i < NMAX; i += 2)
    {
        C[i] = 0;
    }

    for (int i = 3; i < NMAX; i += 2)
    {
        if (C[i] == 1)
        {
            for (int j = i * 3; j < NMAX; j += 2 * i)
            {
                C[j] = 0;
            }
        }
    }
}
int main(){

    int X;
    
    Crivo();

    while(scanf("%d",&X) != EOF){

        if (C[X]){
            printf("PRIMO\n");
        }
        else{
            printf("!PRIMO\n");
        }
    }
    return 0;
}