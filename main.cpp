/*============================================================
*           Algoritmo implementado por Guilherme Kollet
*           Graduando em Eng. da Computação
*
*           Algoritmo de pesquisa sequencial, procura por
*           um valor em um conjunto de elementos.
* ============================================================*/

#include <iostream>
#include <array>
using namespace std;

bool busca(int v, int vet[],int tam, bool log){
int i = 0;
int posicao = 0;
cout << "Valor a ser pesquisado: "<< v << endl;
cout << "Quantidade de itens no vetor: " << tam << endl << endl;

    for ( i = 0; i < tam; i++){

        if ( log == true ){

                cout << "Position: " << posicao << " | Number: " << vet[i];
        }
        //validação
        if (v == vet[i]){
            if ( log == true ) cout << " - Valor encontrado!" << endl << endl;
            cout << "Quantidade de buscas percorridas: " << posicao << endl;
            return true;

        } else {

            if ( log == true ) cout << " - x" << endl << endl;

        }
        posicao++;
    }
    return false;
}

int main(){
//atribuição do inteiro a ser pesquisado dentro do array
int valor = 30;
bool log = true; //true para exibir log | false para não exibir

//atribuição do array a ser passado à função
int A[] = {1, 2, 3, 6, 8, 10, 14, 15, 2, 12, 15, 19, 30};

//obtendo o tamanho do array
int tam = sizeof(A)/sizeof(int);

//chamando a função de busca e armazenando o retorno
bool busca_return = busca(valor, A, tam, log); //valor a ser pesquisado, vetor inteiro passado, tamanho do vetor calculado e comando de exibição de texto.

if (busca_return == true) {
    cout << "\nValor encontrado no Array" << endl;
} else {
    cout << "\nValor inexistente no Array" << endl;
return 0;

    }
}
