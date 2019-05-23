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
 
int troco_facil(int n){
	int moedas[6] = {100, 50, 25, 10, 5, 1};
	int cont = 0;
	
	for(int i = 0; i < 6; i++){
		if(n >= moedas[i]){
			cont += n/moedas[i];
			n = n%moedas[i];
		}
	}
	return cont;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n; cin >>n;
	int cont = troco_facil(n);

	cout <<cont <<endl;

	return 0;
}

