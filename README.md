# Filter-Less #

Filter-Less é um programa em Python que aplica filtros a imagens BMP (Bitmaps) sem a necessidade de softwares de edição de imagem. O programa suporta os seguintes filtros:
 * Grayscale: Converte a imagem para preto e branco, preservando a escala de cinza com base nos valores médios de vermelho, verde e azul.
  
 * Sepia: Dá um efeito vintage à imagem, calculando novos valores de vermelho, verde e azul com base em uma fórmula específica.
  
 * Reflection: Reflete a imagem horizontalmente, como se fosse colocada em frente a um espelho.
  
 * Blur: Aplica um efeito de desfoque na imagem, calculando novos valores de cor com base na média dos valores das cores dos pixels vizinhos.

## Como usar ##

  Certifique-se de ter o Python instalado em seu computador.

  Clone ou faça o download do repositório do projeto.

  Abra o terminal ou prompt de comando e navegue até o diretório onde o projeto está localizado.

  Para aplicar um filtro, use o seguinte comando:

    python filter.py <filtro> <imagem_de_entrada.bmp> <imagem_de_saida.bmp>

  Substitua <filtro> pelo nome do filtro desejado (grayscale, sepia, reflection ou blur), <imagem_de_entrada.bmp> pelo nome do arquivo BMP de entrada e <imagem_de_saida.bmp> pelo nome que você deseja dar à nova imagem filtrada.

## Exemplo ##

Para converter uma imagem chamada "paisagem.bmp" para escala de cinza e salvar o resultado como "paisagem_grayscale.bmp", execute o seguinte comando:

    python filter.py grayscale paisagem.bmp paisagem_grayscale.bmp

## Observações ##

  O programa só suporta imagens BMP (bitmap) com 24 bits de cor (RGB).
  Certifique-se de fornecer os nomes corretos dos arquivos BMP de entrada e saída, incluindo a extensão .bmp.
  A imagem filtrada será salva na mesma pasta onde o programa está localizado.

Aproveite para criar efeitos interessantes em suas imagens usando o Filter-Less!
