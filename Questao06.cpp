#include <iostream>>
#include <vector>
using namespace std;


// Se x est� presente em arr [0..n-1], ent�o retorna
// �ndice dele, sen�o retorna -1.
int interpolationSearch(std::vector<int> arr, int lo, int hi, int x)
{
    int pos;
    // Uma vez que a matriz � classificada, um elemento presente
    // na matriz deve estar no intervalo definido pelo canto	
    if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
        // Sondando a posi��o mantendo
        // distribui��o uniforme em mente.
        pos = lo
            + (((double)(hi - lo) / (arr[hi] - arr[lo]))
                * (x - arr[lo]));

        // Condi��o do alvo encontrado
        if (arr[pos] == x)
            return pos;

        // Se x for maior, x est� na submatriz direita
        if (arr[pos] < x)
            return interpolationSearch(arr, pos + 1, hi, x);

        // Se x for menor, x est� na submatriz � esquerda	
        if (arr[pos] > x)
            return interpolationSearch(arr, lo, pos - 1, x);
    }
    return -1;
}

int main()
{
    std::vector<int> vetor = { 10, 12 20, 5, 1, 4};

    int n = sizeof(vetor) / sizeof(vetor[0]);
    cout << sizeof(vetor)  <<endl; 
    cout << sizeof(vetor[0]) << endl;
    int x = 1;

    if ((interpolationSearch(vetor, 0, n - 1, x)) != -1)
        cout << "Elemento encontrado no indice ";
    else
        cout << "Elemento nao encontrado.";

    return 0;
}

//referencia: https://en.wikipedia.org/wiki/Interpolation_search
// equbalzeeshan https://www.geeksforgeeks.org/interpolation-search/
