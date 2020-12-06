# Programação Orientada a Objetos: Operações de Sistemas Bancários em C++

Este projeto visa demonstrar os principais conceitos de orientação a objeto usando a linguagem C++; são eles: Classe, Encapsulamento, Agregação e Composição, Templates, Sobrecarga de operador, Herança e Polimorfismo. Por meio  de operações bancárias tais como abertura de contas, transferências, demonstrativos bancários (extratos), entre outros. Todo o código está documentado nos arquivos de cabeçalho. 

## Ambiente de Desenvolvimento:

- O código foi desenvolvido e testado na IDE VScode em máquina com o sistema operacinal Ubuntu 20.04

- compilador gcc versão 9.3.0 

- dialeto C++ => 17.

### Flags de compilação usadas:

    -std=c++17 -Wall -Wextra -Werror -Wshadow -Wconversion -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Wold-style-cast       -Woverloaded-virtual -Wredundant-decls -Wsign-conversion -Wsign-promo           -Wstrict-null-sentinel -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused

## Pré requisitos:
> C++ igual ou superior a versão 17

> gcc compiler

## Verifique se o GCC está instalado na sua máquina:
Abra o terminal de comando e verifique com o comando abaixo, para verificar a versão do compilador:
    
>gcc -v


## Instalando GCC compiler em distribuições Linux:
 Sistemas operacionais construídos a partir do núcleo Linux, como o ubunto, já possui GCC instalado por default, porém algumas você precisa instalar a parte como ferramenta, abaixo os comando para instalar no Fedora, OpenSUSE e Ubuntu: 

## Fedora

> sudo yum install gcc

## OpenSUSE

> sudo zypper in gcc

## Ubuntu

> sudo apt-get update

> sudo apt-get install gcc

## Para Window. Instalando MinGW:

MinGW é um software que inclui um conjunto de arquivos cabeçalho para a API do Windows que permite aos desenvolvedores usar o GCC para criar programas nativos em Windows.

https://osdn.net/projects/mingw/releases/

mingw-get-setup.exe


## Certifique-se se o GCC compiler está instalado em sua máquina:







Verifique que o compilador está instalado na sua máquina.
Usuários de sistemas operacionais construídos a partir do núcleo Linux, como o ubunto, não precisamo instalar nada para rodar códigos, pois o sistema já possui um compilador no sistema.

## Compilando e executando o programa:
Abra a pasta do projeto no terminal de comandos e digite:

    $ make all
    $ ./main




gcc version 9.3.0 (Ubuntu 9.3.0-17ubuntu1~20.04) 
-Wshadow ---> ok
-Wmissing-declarations ----> erro vinculado às funções de demonstração