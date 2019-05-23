#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
 
// problema do supermercado

int main() {
	ios_base::sync_with_stdio(false);

	queue<int> fila;
	int op;
	int id;

	while(cin >>op){// lendo as operações
		if(op == 0)
			break; // se a operação for 0, o caixa quebrou

		if(op == 1){ // alguém ta na fila
			cin >>id; // lemos o id da pessoa
			fila.push(id);
		}

		if(op == 2){ // o caixa vai atender alguém da fila
			if(fila.empty() == false){ // se a fila nao for vazia, ou seja, tiver alguem na fila
				fila.pop(); // o caixa atende a pessoa da fila, em seguida deletamos a pessoa
			}
		}
	}

	// apos o caixa quebrar, queremos saber as pessoas que ainda estao na fila
	while(fila.empty() == false){ // enquanto a fila nao for vazia
		int p = fila.front(); // pego a pessoa na frente da fila e imprimo
		cout <<p <<" ";

		fila.pop(); // removo a pessoa que esta na frente da fila
	}

	return 0;
}

