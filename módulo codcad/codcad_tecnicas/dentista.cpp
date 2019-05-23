#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define se second
#define cc(x)	cout << #x << " = " << x << endl
#define ok		cout << "ok" << endl
#define endl '\n'

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);
 
struct compromisso{
	int ini, fim;
};

bool compara(compromisso a, compromisso b){
	return a.fim < b.fim;
}

compromisso consulta[10100];

int n, x, y, livre, qtd;

int main() {
	ios_base::sync_with_stdio(false);
	
	cin >>n;

	for(int i = 0; i < n; i++){
		cin >>consulta[i].ini >>consulta[i].fim;
	}

	sort(consulta, consulta+n, compara);

	for(int i = 0; i < n; i++){
		if(consulta[i].ini >= livre){
			qtd++;
			livre = consulta[i].fim;
		}
	}

	cout <<qtd <<endl;
			     
	return 0;
}

