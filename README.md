# Filter-Less #

Filter-Less é um projeto em C que implementa filtros simples para imagens no formato BMP. Os filtros disponíveis incluem:

  * Grayscale: Converte a imagem para tons de cinza.
  * Sepia: Converte a imagem para tons de sépia (reddish-brown).
  * Reflection: Reflete a imagem horizontalmente, como se estivesse em frente a um espelho.
  * Blur: Aplica um efeito de desfoque à imagem usando a técnica "box blur".

## Como usar ##

  1. Certifique-se de ter um compilador C (por exemplo, GCC) instalado em seu sistema.
  2. Compile o programa usando o compilador C de sua escolha. Por exemplo, para compilar o código usando GCC, use o seguinte comando:

    gcc -o filter filter.c helpers.c -lm

  3. Execute o programa fornecendo o filtro desejado e os arquivos de entrada e saída. Por exemplo, para aplicar o filtro "grayscale" a uma imagem chamada "input.bmp" e salvar a imagem resultante como "output.bmp", use o seguinte comando:

    ./filter grayscale input.bmp output.bmp

## Formato BMP suportado ##

Este programa suporta imagens no formato BMP de 24 bits, o que significa que cada pixel é representado por 24 bits (8 bits para a quantidade de vermelho, 8 bits para a quantidade de verde e 8 bits para a quantidade de azul).

## Arquivos ##

   1. helpers.c e helpers.h: Esses arquivos contêm funções auxiliares que são usadas no programa principal para a manipulação das imagens. As funções incluem conversões de cor, leitura e escrita de arquivos BMP, e implementação dos filtros de imagem.

   2. bmp.h: Este arquivo contém as definições de estrutura para representar as informações de cabeçalho de um arquivo BMP, bem como algumas constantes e macros relacionadas.

   3. filter.c: Neste arquivo, é implementado o programa principal. Ele é responsável por receber os argumentos da linha de comando, abrir o arquivo BMP de entrada, aplicar o filtro especificado e escrever o resultado em um novo arquivo BMP.

   4. Makefile: O arquivo Makefile é um arquivo de configuração que contém regras para compilar e construir o programa. Ele define como os arquivos-fonte devem ser compilados e como os arquivos-objeto devem ser vinculados para criar o executável final.
