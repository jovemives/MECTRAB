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
		int n;
		string s;
		cin >>n >>s;

		bool x[105] = {false};
		
		for(int i = 0; i < n; i++){
			if(s[i] == '*'){
				x[i] = true;

				if(i+1 < n) x[i+1] = true;
				if(i-1 < n) x[i-1] = true;
			}
		}
		vector<int> v;

		for(int i = 0; i < n; i++){
			if(x[i] == false){
				v.pb(i);
			}
		}

		int aux = 0;
		
		for(int i = 0; i < v.size(); i++){
			if(x[v[i]] == false){
				aux++;
				x[v[i]] = true;

				if(v[i]+1 < n)
					x[v[i]+1] = true;
				if(v[i]+2 < n)
					x[v[i]+2] = true;
			}
		}
		cout <<aux <<endl;
	}
			     
	return 0;
}

