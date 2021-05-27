#include <iostream>
using namespace std;
#define TAM 4

// algoritmo Johnson and Trotter para gerar pemurtacoes de n.
void johnsonTrotter(int v[], int n) {
	for (int i = 0; i < n - 1; i++) {
		// movendo da direita para a esquerda 
		for (int i = n - 1; i > 0; i--) {
			swap(v[i], v[i - 1]);
			for (int i = 0; i < n; i++) {
				cout << v[i] << " ";
			}
			cout << endl;
		}
		cout << "primeiro for" << endl ;
		//muda os 2 ultimos elementos de posicao e a direcao
		swap(v[n - 1], v[n - 2]);
		for (int i = 0; i < n; i++) {
			cout << v[i] << " ";
		}
		cout << endl;
		cout << "segundo for" << endl;

		// muda os elementos da esquerda para direita
		for (int i = 0; i < n - 1; i++) {
			swap(v[i], v[i + 1]);
			for (int i = 0; i < n; i++) {
				cout << v[i] << " ";
			}
			cout << endl;
		}
		cout << "terceiro for" << endl;
		//muda os 2 primeiros elementos e a direcao novamente
		swap(v[0], v[1]);
		for (int i = 0; i < n; i++) {
			cout << v[i] << " ";
		}
		cout << endl;
		cout << "quarto for" << endl;
	}
}


int main() {
	int v[TAM];
	//preenche o vetor
	for (int i = 0; i < TAM; i++) {
		v[i] = i + 1; 
	}
	johnsonTrotter(v, TAM);
}
