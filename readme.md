
 **EXPLICAÇÃO A LÓGICA DO CÓDIGO**

 **Documentação do Código de Ordenação em C++**

 **Descrição:**

Este programa em C++ permite que o usuário insira um conjunto de números inteiros e escolha um algoritmo de ordenação para organizá-los. 
Dependendo da quantidade de elementos, o programa utiliza um dos três algoritmos de ordenação: Insertion Sort, Bubble Sort ou Selection Sort. Após a ordenação, o programa exibe a lista original e a lista ordenada.

**Estrutura do Código**   

**Bibliotecas Utilizadas:**

•	<iostream>: Usada para operações de entrada e saída, como std::cin e std::cout.
•	<vector>: Usada para armazenar dados em um vetor dinâmico, permitindo fácil manipulação de arrays.

**Funções:**

**1.**	void insertionSort(std::vector<int>& arr)
o	Descrição: Implementa o algoritmo Insertion Sort, que ordena o vetor arr in-place.
o	Parâmetros:
➔	arr: Referência a um vetor de inteiros que será ordenado.
o	Lógica: Para cada elemento, insere-o na posição correta da parte já ordenada do vetor.

**2.**	void bubbleSort(std::vector<int>& arr)
o	Descrição: Implementa o algoritmo Bubble Sort, que percorre repetidamente o vetor e troca elementos adjacentes se estiverem na ordem errada.
o	Parâmetros:
➔	arr: Referência a um vetor de inteiros que será ordenado.
o	Lógica: Realiza múltiplas passagens pelo vetor, movendo os maiores elementos para o final.

**3.**	void selectionSort(std::vector<int>& arr)
o	Descrição: Implementa o algoritmo Selection Sort, que divide o vetor em uma parte ordenada e outra não ordenada, selecionando o menor elemento da parte não ordenada a cada iteração.
o	Parâmetros:
➔	arr: Referência a um vetor de inteiros que será ordenado.
o	Lógica: Em cada iteração, encontra o menor elemento e o coloca na posição correta.

**Função Principal:**

•	int main()
o	Descrição: Função de entrada do programa que controla o fluxo geral, coleta dados do usuário, executa a ordenação e exibe os resultados.

**o	Passos:**

**1.**	Solicita ao usuário o número de elementos que deseja inserir.
**2.**	Verifica se o número é positivo.
**3.**	Coleta os valores do vetor, garantindo que sejam não negativos.
**4.**	Exibe o vetor original.
**5.**	Seleciona e executa o algoritmo de ordenação com base na quantidade de elementos.
**6.**	Exibe o vetor ordenado.

**Lógica de Seleção do Algoritmo:**

•	Se o número de elementos (n) for até 20, usa Insertion Sort.
•	Se n estiver entre 21 e 30, usa Bubble Sort.
•	Se n for mais de 30, usa Selection Sort.

**Exemplo de Uso:**

**1.**	O usuário é solicitado a inserir a quantidade de elementos.
**2.**	O usuário insere os valores.
**3.**	O programa exibe o vetor original.
**4.**	O usuário não precisa escolher o algoritmo, pois é selecionado automaticamente.
**5.**	O programa exibe o vetor ordenado.

**Compilação e Execução:**

Para compilar e executar o programa, siga estas instruções em um terminal:

**1.**	Salve o código em um arquivo chamado ordenacao.cpp.

**2.**	Compile usando:

bash
Copiar código
g++ ordenacao.cpp -o ordenacao

**3.**	Execute o programa:

bash
Copiar código
./ordenacao

**Considerações Finais:**

Este programa é uma boa introdução à manipulação de arrays e implementação de algoritmos de ordenação em C++. Ele demonstra conceitos básicos de controle de fluxo, manipulação de vetores e funções, 
sendo adequado para iniciantes na programação.
