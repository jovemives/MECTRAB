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
#define MAXN 100100

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

int n, m, v[MAXN];

int buscab(int x){
	int ini = 1, meio, fim = n;

	while(ini <= fim){
		meio = (ini+fim)/2;
		
		if(v[meio] == x)
			return meio;
		if(x < v[meio])
			fim = meio-1;
		if(x > v[meio])
			ini = meio+1;
	}
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);

	cin >>n >>m;

	for(int i = 1; i <= n; i++){
		cin >>v[i];
	}

	for(int i = 1; i <= m; i++){
		int num;
		cin >>num;

		cout <<buscab(num) <<endl;
	}
			     
	return 0;
}

