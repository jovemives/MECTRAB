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

int main() {
	ios_base::sync_with_stdio(false);

	int v[10], cont = 0;

	for(int i = 1; i <= 8; i++){
		cin >>v[i];
	}

	for(int i = 0; i < 10; i++){
		if(v[i] == v[i+1])
			cont++;
		}

	if(cont > 4) cout <<"N" <<endl;
	else cout <<"S" <<endl;
			     
	return 0;
}

