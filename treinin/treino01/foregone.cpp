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
		
		if(v[i]==4){ 
			v[i] -= 1;
			printf("Case #1: %d %d\n", v[i], 1);
		}
		
		if(v[i] > 10 and v[i] <= 1000){

			printf("Case #2: %d %d\n", v[i]=3, 10);
		}
	}
	

	return 0;
}

