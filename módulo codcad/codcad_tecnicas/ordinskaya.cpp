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

	const int N = 1e4 + 10;
	int n, m, v[N];
	cin >>n >>m;

	for(int i = 1; i <= n; i++){
		cin >>v[i];
	}

	for(int i = 1; i <= n; i++){
		cin >>v[i];

		if(min(v[i], (m-v[i])) >= v[i-1])
			v[i] = min(v[i], (m-v[i]));
		else if(max(v[i], (m-v[i])) >= v[i-1])
			v[i] = max(v[i], (m-v[i]));
		else {
			cout <<-1 <<endl;
			return 0;
		}	
	}

	ll total = 0;
	for(int i = 1; i <= n; i++){
		total += v[i];
	}
	cout <<total <<endl;
			     
	return 0;
}

