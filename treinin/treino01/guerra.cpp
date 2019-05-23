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

	const int N = 1e5 + 5;
	int v[N];

	int n;
	cin >>n;

	for(int i = 0; i < n; i++){
		cin >>v[i];
	}
	
	for(int i = 0; i < n; i++){
		if(v[i] == v[i+1]+v[i+2]){
			cout <<v[i+1] <<endl;
			break;
		}
	}
			     
	return 0;
}

