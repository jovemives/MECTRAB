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
		int n, v[N], b, x = 0;
		cin >>n;

		for(int i = 0; i < n; i++){
			cin >>v[i];
			x = max(x, v[i]);
		}
		
		b = 100 - x;
	
		int ans = 0;

		for(int i = 0; i < n; i++){
			if(v[i]+b >= 50)
				ans++;
		}
		cout <<ans <<endl;
	}
			     
	return 0;
}

