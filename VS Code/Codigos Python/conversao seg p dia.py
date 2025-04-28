dia_inicial = input().split(sep="Dia ")
print(dia_inicial)
hora_inicial,minuto_inicial,segundo_inicial = map(int, input().split(sep=":"))

dia_final = int(input().split(sep="Dia"))
hora_final,minuto_final,segundo_final = map(int, input().split(sep=":"))

def transforma_dia_e_hora_em_minutos(num_dias):
    soma_dos_minutos = ((num_dias*24)*60) 

    return soma_dos_minutos

diferenca_dias = ((transforma_dia_e_hora_em_minutos(dia_final) - transforma_dia_e_hora_em_minutos(dia_inicial))/60)/24


if hora_final < hora_inicial:
    duracao_hora = 24 - ((hora_inicial+24) - (hora_final+24))
    diferenca_dias-=1
else : duracao_hora = hora_final - hora_inicial

if minuto_final < minuto_inicial:
    duracao_hora+=1
    duracao_minuto = (minuto_inicial+60) - (minuto_final+60)
else: duracao_minuto = minuto_final - minuto_inicial

if segundo_final < segundo_inicial:
    duracao_minuto+=1
    duracao_segundo = (segundo_inicial+60) - (segundo_final+60)
else: duracao_segundo = segundo_final - segundo_final

print(f"{int(diferenca_dias)} dia(s)\n{duracao_hora} hora (s)\n{duracao_minuto} minuto (s)\n{duracao_segundo} segundo (s)")