#include <iostream>
#include <vector>
using namespace std;
//metodo de inserção
void insertionSort(vector<int>& vetor) {
    for (int i = 1; i < vetor.size(); i++) {
        int v_aux = vetor[i];
        int j = i - 1;
        for (int v: vetor) {
            cout << v << " ";  
        }
        cout << " " << endl;
        //verifica se o vetor na posicao j e maior que o valor da variavel auxiliar na posicao i
        while ((j >= 0) && (vetor[j] > v_aux)) {
            swap(vetor[j], vetor[j + 1]); //troca a posicao do menor pelo maior elemento
            j--;
        }
    }

}
int main() {
    vector <int> vetor = { 3,8,4,6,2,5,1,7,9 }; // vetor de elementos
    insertionSort(vetor);
    cout << "Vetor apos ordenacao" << endl;
    for (int vetorOrdenado: vetor) {
        cout << vetorOrdenado << " ";
    }
}
