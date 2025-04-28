a,n = map(int, (input().split()))


def soma_consecutiva(num):
    soma = 0
    for a in range(0, num+1):
        soma +=a
    return soma
print(soma_consecutiva(a)+(n-1))
