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

	const int N = 1e5 + 10;
	int v[N];
	int n, s = 0, a = 0; 
	cin >>n;

	for(int i = 0; i < n; i++){
		cin >>v[i];
		s += v[i];
	}

	for(int i = 0; i < n; i++){
		a += v[i];

		if(a == s/2)	
			cout <<i+1 <<endl;
	}

	return 0;
}

