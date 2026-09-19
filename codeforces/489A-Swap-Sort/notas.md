# Notas de Problemas — Maratona de Programação

---

## 489A — SwapSort — Codeforces — https://codeforces.com/problemset/problem/489/A

**Data:** 2026-09-19
**Dificuldade percebida:** Fácil
**Status:** Resolvido

### Enunciado (resumo em 1-2 linhas)
Dado um array de n inteiros, encontrar uma sequência de no máximo n operações de troca (swap) entre dois índices que deixe o array ordenado de forma não decrescente. Não é preciso minimizar o número de trocas.

### Restrições importantes
- 1 ≤ n ≤ 3000
- -10^9 ≤ a[i] ≤ 10^9 (elementos podem se repetir)
- Saída: k (0 ≤ k ≤ n) seguido de k pares de índices (0-indexados)
- É permitido imprimir um par com i = j (ou seja, uma "troca" que não faz nada)
- Tempo limite: 1s
- Memória: 256MB

### Primeira ideia (o que pensei de cara)
    Usar Selection Sort: a cada posição i do array, procurar o menor elemento entre i e n-1 e trocá-lo com a posição i, guardando o par (i, índice do menor) como a operação de swap correspondente.

### Por que essa ideia falhou (se falhou)

    Não falhou — Selection Sort se encaixa perfeitamente na restrição do problema, já que ele naturalmente faz exatamente n-1 trocas para ordenar um array de tamanho n, o que está dentro do limite de n operações permitidas.

### Insight / Solução
- Estrutura de dados usada: vetor auxiliar `ind` para guardar os pares de índices trocados a cada iteração
- Algoritmo/técnica: Selection Sort — a cada uma das n-1 iterações, busca o menor elemento no restante do array e troca com a posição atual, registrando o par de índices usado
- Complexidade final: O(n^2) no tempo (busca do mínimo dentro do laço principal), O(n) de espaço extra para guardar os pares de swap

### Pseudocódigo / passos da solução
1. Ler n e o vetor v.
2. Para i de 0 até n-2:
   a. Encontrar `menor`, o índice do menor elemento em v[i..n-1].
   b. Guardar o par (i, menor) na lista de swaps.
   c. Trocar v[i] e v[menor].
3. Imprimir o número de swaps (sempre n-1, exceto quando n = 1, caso em que é 0).
4. Imprimir cada par de índices guardado.

### Armadilhas / pegadinhas do problema
- O enunciado permite explicitamente imprimir um par com i = j (repetir o mesmo índice), então não é necessário verificar se o elemento já está na posição correta antes de registrar o swap — o código sempre registra uma troca a cada iteração, mesmo quando `menor == i` e a troca é um no-op.
- Como Selection Sort sempre faz exatamente n-1 trocas, o número de operações emitidas já respeita o limite de n sem precisar de nenhuma lógica extra para contar ou podar swaps redundantes.
- Caso especial n = 1: o laço principal não executa nenhuma iteração, então é preciso tratar a saída "0" sem nenhuma linha de swap depois — o código faz isso com o `if (swaps == 0) return 0;` logo após imprimir a contagem.

### Erros que cometi na implementação
- Nenhum erro relevante — a primeira abordagem (Selection Sort) já atendia diretamente à restrição de no máximo n swaps.

### Tags
`#ordenação` `#selection-sort` `#ad-hoc` `#construtivo`

### Problemas parecidos (para revisar depois)
- Outros problemas construtivos que pedem para "construir" uma sequência de operações (não necessariamente ótima) que atinja um estado final, em vez de pedir o valor ótimo diretamente

---
