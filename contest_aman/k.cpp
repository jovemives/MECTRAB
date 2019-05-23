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
	int tc;
	cin >>tc;

	while(tc--){
		int n, k, v[N], x[N];
		cin >>n >>k;
	
		for(int i = 0; i < n; i++){
			cin >>v[i];
			x[v[i]] = 0;
		}

		int ans = INF;

		for(int i = 0; i < n; i++){
			if(v[i] == 0)
				continue;
			if(k%v[i] != 0)
				continue;
			if(x[k/v[i]] > 1-(k/v[i]))
				ans = min(ans, v[i]);
		}
		if(ans == INF)
			cout <<-1 <<endl;
		else
			cout <<ans <<" " <<k/ans <<endl;
	}		     
	return 0;
}

