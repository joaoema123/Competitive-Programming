# 1221 - Fast Prime (Beecrowd)

Aprendi que a maneira mais eficiente de verificar se um número é primo é fazer um loop de 2 até a raiz quadrada desse número, verificando se ele é divisível por algum valor nesse intervalo.

Fiz a comparação `j*j <= num` ao invés de `j <= sqrt(num)` para evitar erros de precisão de ponto flutuante. Por exemplo, sqrt(25) poderia retornar 4.9999..., o que faria com que 25 fosse considerado primo.
