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

	int tc;
	cin >>tc;

	while(tc--){
		string name, t;
		int n, s, p, m = 0, x = 0;
		cin >>n;

		for(int i = 0; i < n; i++){
			cin >>name >>s >>p;

			if(s > m){
				m = s;
				x = p;
				t = name;
			} else if(s == m and p < x){
				x = p;
				t = name;
			}
		}
		cout <<t <<endl;
	}			     
	return 0;
}

