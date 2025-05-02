#include <stdio.h>
#include <math.h>

double poli(double* vet, int grau, double x);

int main(void){    
    
    int G;
    double val_x;
    
    scanf("%d %lf",&G, &val_x);

    double resultado = 0;

    double vet[G+1];

    for (int i = 0; i <= G; i++){
        
        scanf("%lf",&vet[i]);

    }

    if(G == 0){
        resultado = 1;
    }
    else{
        resultado = poli(vet,G,val_x); 
    }
    
    printf("%.2lf",resultado);
    
    return 0;
}

double poli(double* vet, int grau, double x){

    static double resultado = 0;
    static int pos = 0;
    
    if(grau < 1){   
        resultado += vet[pos];

    }
    else{
        resultado += vet[pos] * pow(x,grau);
        poli(&vet[pos+1],(grau-1),x);
    
    }
    return resultado;
}

