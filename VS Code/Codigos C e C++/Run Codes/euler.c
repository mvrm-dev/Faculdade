#include <stdio.h>

long double calcular_e(int n)
{
    long double resultado = 1.0;
    long double termo = 1.0;
    for (int i = 0; i <= n; ++i)
    {
        termo /= i;
        resultado += termo;
    }

    return resultado;
}

int main()
{
    int n;
    scanf("%d", &n);

    long double resultado = calcular_e(n);

    printf("%.16Lf\n", resultado);

    return 0;
}
