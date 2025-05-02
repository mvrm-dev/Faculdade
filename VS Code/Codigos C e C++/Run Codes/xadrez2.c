#include <stdio.h> 
  
int main(){ 

    int dimensao_dos_pixels;
    
    printf("Digite a dimensao dos pixels e o tamanho do tabuleiro\n");
    scanf("%d",&dimensao_dos_pixels);

    FILE* xadrez; 
    xadrez = fopen("xadrez.pgm", "wb");
  
    fprintf(xadrez, "P2\n");

    int colunas_da_matriz = dimensao_dos_pixels *8;
    int linhas_da_matriz = dimensao_dos_pixels * 8;
     
    fprintf(xadrez, "%d %d\n", colunas_da_matriz, linhas_da_matriz);  
  
    fprintf(xadrez, "10\n");  

    for (int i = 0; i < linhas_da_matriz; i++){
        for (int j = 0; j < colunas_da_matriz; j++){
            if(((i/dimensao_dos_pixels)+(j/dimensao_dos_pixels))%2 == 0){
                fprintf(xadrez,"10 ");
            }
            else{
                fprintf(xadrez,"0 ");
            }
        
        }
        fprintf(xadrez, "\n");
    }
 
    fclose(xadrez);
    return 0;
}