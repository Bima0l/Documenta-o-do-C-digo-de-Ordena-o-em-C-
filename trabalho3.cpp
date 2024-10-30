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
