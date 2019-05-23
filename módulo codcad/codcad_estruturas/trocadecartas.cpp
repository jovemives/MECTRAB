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
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	set<int> a;
	set<int> b;

	int n, m;
	cin >>n >>m;

	for(int i = 0; i < n; i++){
		int aux;
		cin >>aux;
		a.insert(aux);
	}

	for(int i = 0; i < m; i++){
		int aux;
		cin >>aux;
		b.insert(aux);
	}

	set<int> a2;
	set<int> b2;

	for(auto at:a){
		if(!b.count(at))
			a2.insert(at);
	}

	for(auto at:b){
		if(!a.count(at))
			b2.insert(at);
	}
	cout <<min(a2.size(), b2.size()) <<endl;
			     
	return 0;
}

