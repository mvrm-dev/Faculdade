<?php

$ArrayInicial = [1,1,1,2,2,3,4,5,4,4,5,6,7,8];

$arrayFinal = [];

foreach($ArrayInicial as $values){
    $duplicado = false;

    foreach($arrayFinal as $val){

        if ($values == $val) {
            $duplicado = true;
        }
    
    }

    if(!$duplicado){

        $arrayFinal[] = $values;

    }
}   


print_r($arrayFinal);
?>


