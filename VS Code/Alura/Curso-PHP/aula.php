<?php

$nomeFilme = "Top Gun - Maverick";
$nomeFilme = "Os Croods";
$nomeFilme = "Thunderbolts";

$lancamentoFilme = $argv[1] ?? 2022;

$somaDeNotas = 9.0;
$somaDeNotas += 5.2;
$somaDeNotas += 8.0;
$somaDeNotas += 7.2;
$somaDeNotas += 9.5;

$notaFilme = $somaDeNotas / 5;

$planoPrime = true;

$inclusoNoPlano = $planoPrime || $lancamentoFilme < 2020;

echo "Nome do Filme : $nomeFilme \n";
echo "Nota do Filme : $notaFilme \n";
echo "Ano de Lançamento : $lancamentoFilme \n";

if ($lancamentoFilme > 2022){
    echo "Esse filme é um ;lançamento";
} 
elseif($lancamentoFilme > 2020 && $lancamentoFilme <= 2022){
    echo "Este filme ainda é novo";

}

else{
    echo "Esse filme não é um lançamento";
}

$genero = match ($nomeFilme) {
    "Top Gun - Maverick" => "Ação",
    "Thunderbolts" =>  "Super-Heróis",
    "Os Croods" => "Animação",
    default => "Filme não encontrado/desconhecido"
};

echo "O gênero do filme é $genero";