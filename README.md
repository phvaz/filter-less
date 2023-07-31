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
