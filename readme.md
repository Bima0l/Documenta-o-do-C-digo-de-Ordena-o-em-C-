**CÓDIGO E COMENTÁRIOS:**

#include <iostream>  
#include <vector>
#include <iomanip> // Para configurar a precisão da saída

const int MAX_TAMANHO = 100; // Define um tamanho máximo para o vetor

// Função para realizar o Insertion Sort: O Insertion Sort organiza os elementos de forma incremental. Ele assume que o primeiro elemento está ordenado e insere o próximo na posição correta.
void insertionSort(std::vector<double>& arr) { // Mudei o vetor para tipo double
    for (size_t i = 1; i < arr.size(); ++i) { // é usado para representar tamanhos e contagens. 
        double key = arr[i];  // O elemento atual a ser inserido na parte ordenada
        size_t j = i - 1;  // Índice do último elemento da parte ordenada
        while (j < arr.size() && arr[j] > key) {
            arr[j + 1] = arr[j]; // Move o elemento para a direita
            --j; // Move para o elemento anterior
        }
        arr[j + 1] = key; // Insere o 'key' na posição correta
    }
}

// Função para realizar o Bubble Sort: compara elementos adjacentes e troca-os se estiverem na ordem errada. Esse processo é repetido até que o vetor esteja totalmente ordenado.
void bubbleSort(std::vector<double>& arr) { // Mudei o vetor para tipo double
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]); // Troca os elementos
            }
        }
    }
}

// Função para realizar o Selection Sort: O Selection Sort encontra o menor elemento na parte não ordenada do vetor e o coloca na posição correta na parte ordenada.
void selectionSort(std::vector<double>& arr) { // Mudei o vetor para tipo double
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        size_t minIndex = i; // Assume que o primeiro elemento é o menor
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Atualiza o índice do menor elemento
            }
        }
        std::swap(arr[i], arr[minIndex]); // Troca o menor elemento encontrado com o primeiro não ordenado
    }
}

int main() { // o usuário é solicitado a inserir o número de elementos que deseja. Há uma verificação para garantir que esse número seja positivo e não exceda 
    int tamanho; // Variável para armazenar o número de elementos
    std::cout << "Quantos elementos você deseja inserir (máximo " << MAX_TAMANHO << ")? ";
    std::cin >> tamanho; // Lê a quantidade de elementos

    // Verifica se o número de elementos é positivo e dentro do limite
    if (tamanho <= 0 || tamanho > MAX_TAMANHO) {
        std::cout << "Por favor, insira um número positivo entre 1 e " << MAX_TAMANHO << "." << std::endl;
        return 1; // Termina o programa se a entrada for inválida
    }

    std::vector<double> vetor(tamanho); // Cria um vetor para armazenar os elementos

    // O programa coleta os valores que o usuário deseja inserir. Se o usuário tentar inserir um valor negativo, ele é solicitado a inserir um número válido novamente.
    for (int i = 0; i < tamanho; ++i) {
        std::cout << "Insira o valor do elemento " << (i + 1) << ": ";
        std::cin >> vetor[i]; // Lê o valor do elemento
        // Verifica se o valor é negativo
        while (vetor[i] < 0) {
            std::cout << "Valor incorreto! Insira um valor não negativo: ";
            std::cin >> vetor[i]; // Pede para o usuário inserir um valor válido
        }
    }

    // O programa imprime os valores originais que foram inseridos, mostrando ao usuário o vetor antes da ordenação.
    std::cout << "Array original: ";
    for (const auto& val : vetor) {
        std::cout << std::fixed << std::setprecision(2) << val << " "; // Mostra cada elemento do vetor
    }
    std::cout << std::endl;

    // O programa escolhe qual algoritmo de ordenação usar com base na quantidade de elementos. Isso permite que o programa utilize o algoritmo mais apropriado para o tamanho do vetor.
    if (tamanho <= 20) {
        insertionSort(vetor); // Usa Insertion Sort
        std::cout << "Array ordenado usando Insertion Sort: ";
    } else if (tamanho <= 30) {
        bubbleSort(vetor); // Usa Bubble Sort
        std::cout << "Array ordenado usando Bubble Sort: ";
    } else {
        selectionSort(vetor); // Usa Selection Sort
        std::cout << "Array ordenado usando Selection Sort: ";
    }

    // Exibe o array ordenado
    for (const auto& val : vetor) {
        std::cout << std::fixed << std::setprecision(2) << val << " "; // Mostra cada elemento do vetor ordenado
    }
    std::cout << std::endl; // Pula uma linha no final

    return 0; 
}



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
