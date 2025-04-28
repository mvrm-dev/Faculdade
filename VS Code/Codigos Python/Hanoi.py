def hanoi(n, inicial, final, auxiliar):
    s='Mova o disco {} do pino {} para o pino {}'
    if n==1:
        print(s.format(n, inicial, final))
    else:
        hanoi (n-1, inicial, auxiliar, final)
        print(s.format(n, inicial, final))
        hanoi(n-1, auxiliar, final, inicial)

n=int(input())
hanoi(n, 'A', 'B', 'C')