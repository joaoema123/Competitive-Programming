# Notas de Problemas — Maratona de Programação

---

## 1315A — Dead Pixel — Codeforces — https://codeforces.com/problemset/problem/1315/A

**Data:** 2026-09-18
**Dificuldade percebida:** Fácil
**Status:** Resolvido

### Enunciado (resumo em 1-2 linhas)
Uma tela tem resolução a×b pixels e possui um único pixel morto na posição (x, y) (0-indexado). Deve-se encontrar a maior área retangular (com lados paralelos às bordas da tela) que não contenha o pixel morto.

### Restrições importantes
- t ≤ 10^4 casos de teste
- 1 ≤ a, b ≤ 10^4
- 0 ≤ x < a, 0 ≤ y < b
- Tempo limite: 1s
- Memória: 256MB

### Primeira ideia (o que pensei de cara)
    Pensei em dividir a tela em quatro quadrantes, igual no plano cartesiano. Depois calcular a distância, da borda mais próxima, vertical e horizontal em relação ao dead pixel. 

### Por que essa ideia falhou (se falhou)

    Esssa ideia se mostrou complexa e de difícil implementação, devido a existirem muitos casos que deveriam ser tratados.

### Insight / Solução
- Estrutura de dados usada: nenhuma (apenas um vetor de 4 posições para comparar os candidatos)
- Algoritmo/técnica: ad-hoc — qualquer retângulo válido cabe inteiramente numa das 4 faixas que sobram ao "cortar" a tela pela linha e pela coluna do pixel morto, então basta calcular a área dessas 4 faixas e pegar a maior.
- Complexidade final: O(1) por caso de teste, O(t) no total

### Pseudocódigo / passos da solução
1. Ler a, b, x, y.
2. Calcular a área da faixa acima do pixel: a * y
3. Calcular a área da faixa abaixo do pixel: a * (b - y - 1)
4. Calcular a área da faixa à esquerda do pixel: b * x
5. Calcular a área da faixa à direita do pixel: b * (a - x - 1)
6. Responder o maior valor entre as 4 faixas.

### Armadilhas / pegadinhas do problema
- Erro de off-by-one: como x e y são 0-indexados, as faixas "abaixo"/"à direita" precisam de `(a - x - 1)` e `(b - y - 1)`, não `(a - x)` / `(b - y)`.
- Não é preciso analisar quadrantes nem comparar distâncias até as bordas — o retângulo ótimo sempre ocupa a tela inteira em uma das dimensões (largura ou altura total), então os únicos 4 candidatos possíveis já cobrem todos os casos.

### Erros que cometi na implementação
- Tentei resolver dividindo a tela em 4 quadrantes e comparando qual borda (horizontal ou vertical) estava mais perto do pixel morto, o que exigiu tratar separadamente os casos `a == 1` e `b == 1` e ainda assim não cobria todos os casos corretamente.
- A solução ficou muito mais simples ao perceber que bastava calcular as 4 faixas retangulares (acima, abaixo, esquerda, direita) e pegar o máximo, sem nenhum caso especial.

### Tags
`#ad-hoc` `#geometria` `#simulação`

### Problemas parecidos (para revisar depois)
- Outros problemas de Div. 2 A envolvendo geometria simples em grade/tela

---
