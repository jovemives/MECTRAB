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
 
struct pais{
	int ouro, prata, bronze, id;
};

int compara(pais a, pais b){
	if(a.ouro != b.ouro) 
		return a.ouro > b.ouro;
	if(a.prata != b.prata) 
		return a.prata > b.prata;
	if(a.bronze != b.bronze) 
		return a.bronze > b.bronze;
	return a.id < b.id;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n, m, o, p, b;
	pais v[105];

	cin >>n >>m;

	for(int i = 0; i < n; i++){
		v[i].ouro = 0;
		v[i].prata = 0;
		v[i].bronze = 0;
		v[i].id = i+1;
	}

	for(int i = 0; i < m; i++){
		cin >>o >>p >>b;
		v[o-1].ouro++;
		v[p-1].prata++;
		v[b-1].bronze++;
	}

	sort(v, v+n, compara);

	for(int i = 0; i < n; i++){
		cout <<v[i].id <<" ";
	}
	cout <<endl;
			     
	return 0;
}

