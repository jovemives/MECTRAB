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

	const int N = 1e5 + 10;
	int n, v[N], c[N], num[N];
	cin >>n;

	for(int i = 0; i < n; i++){
		cin >>v[i];
		c[i] = v[i];
	}

	sort(c, c+n);

	int cont = 0;

	for(int i = 0; i < n; i++){
		if(v[i] != c[i]){
			num[cont] = v[i];
			cont++;
		}
	}

	cout <<cont <<endl;
	sort(num, num+cont);

	for(int i = 0; i < cont; i++){
		cout <<num[i] <<" ";
	}

	cout <<endl;
	return 0;
}
