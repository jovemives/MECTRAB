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

struct gas{
	double preco, estoq;
};

bool compara(gas x, gas y){
	return x.preco < y.preco;
}

gas forn[100100];

int n;
double d, custo;

int main() {
	ios_base::sync_with_stdio(false);

	cin >>n >>d;

	for(int i = 1; i <= n; i++){
		cin >>forn[i].preco >>forn[i].estoq;
	}

	sort(forn+1, forn+n+1, compara);

	for(int i = 1; i <= n; i++){
		gas dave = forn[i];

		if(dave.estoq < d){
			custo += dave.estoq*dave.preco;
			d -= dave.estoq;
		} else {
			custo += dave.estoq*dave.preco;
			d = 0;
			break;
		}
	}

	if(d == 1){
		cout <<"Impossivel" <<endl;
	} else {
		cout <<fixed <<setprecision(2) <<custo <<endl;
	}
			     
	return 0;
}

