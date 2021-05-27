#include <iostream>
#include <vector>
using namespace std;
#define TAM 9
//método para busca binária com o algoritmo de dimuniur para conquistar
int buscaBinaria(int chave, int a[], int n) {
	int i, esq = 0, dir = n - 1;
	//varre o vetor a partir da posição do meio e descobre qual lado percorrer esquerdo ou diretio.
	do {
		i = (esq + dir) / 2;
		if (chave > a[i]) {
			esq = i + 1;
		}
		else {
			dir = i - 1;
		}
	} while (chave != a[i] && esq <= dir);
	
	if (chave == a[i]) {
		return i;
	} else {
		return -1;
	}
}

int main() {
	int vetor[] = { 4,8,9,15,20,36,39,40 };
	int chave;
	int n = sizeof(vetor)/ sizeof(vetor[0]);
	cout << "n:" << n <<endl;
	cout << "digite a chave" << endl;
	cin >> chave;
	int resposta = buscaBinaria(chave, vetor, n);
	if (resposta == -1) {
		cout << "chave nao esta no vetor" << endl;
	}
	else {
		cout << "chave esta no vetor na posicao : " << resposta << endl;
	}
}
