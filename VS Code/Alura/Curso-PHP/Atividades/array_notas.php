<?php

$array = [5.0, 6.1, 9.0, 9.9, 10.0, 4.2, 1.0];

foreach($array as $elemento){
    $resultado =  $elemento > 6 ? "Aprovado" : "Reprovado";

    echo "Esse(a) aluno(a) foi $resultado com a nota $elemento \n";
}