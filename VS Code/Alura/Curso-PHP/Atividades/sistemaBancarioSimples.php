<?php

//titular e saldo
$arrayCliente = [
    'titular' => "Marcos",
    'saldo' => 5000.00

];

echo "Titular : " . $arrayCliente['titular'] . "\nSaldo: " . $arrayCliente['saldo'];

$escolha = 0;

while(true){
    
    echo "\n1- Consultar Saldo\n2- Sacar Valor\n3- Depositar Valor\n4- Sair\n";

    $escolha = fgets(STDIN);

    if($escolha == 1){ // consultar saldo
        echo "\nTitular : " . $arrayCliente['titular'] . "\nSaldo: " . $arrayCliente['saldo'];
    }

    elseif($escolha == 2){ // sacar valor
        echo "\nDigite o valor a sacar: ";
        $valorSaque = fgets(STDIN);
        if($valorSaque > $arrayCliente['saldo']){
            echo "\nSaque não permitido: Valor a sacar maior que o saldo disponível\n";
        }
        else{
            $arrayCliente['saldo'] -= $valorSaque;
        }
    }
    
    elseif($escolha == 3){
        echo "\nDigite o valor a depositar: ";
        $valorDeposito = fgets(STDIN);
        if($valorDeposito < 0.0){
            echo "\nValor de depósito deve ser positivo\n";
        }
        else{
            $arrayCliente['saldo'] += $valorDeposito;
        }
    }

    elseif($escolha == 4){
        break;
    }
    else{
        echo "\nEscolha inválida";
    }
    
}



