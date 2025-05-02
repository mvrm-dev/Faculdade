#include<iostream>
int main(int argc, char const *argv[])
{
    const float r1 = 100;

    float conta1 = r1 * 1000.0;
    float conta2 = r1 * 100.0;
    float conta3 = r1 * 10.0;
    float conta4 = r1 * 1.0;
    float conta5 = r1 * 0.10;
    float conta6 = r1 * 0.010;
    float conta7 = r1 * 0.0010;
    
    printf("1000.0: %f\n",conta1);
    printf("100.0: %f\n",conta2);
    printf("10.0: %f\n",conta3);
    printf("1.0: %f\n",conta4);
    printf("0.10: %f\n",conta5);
    printf("0.010: %f\n",conta6);
    printf("0.0010: %f\n",conta7);
    
    return 0;
}
