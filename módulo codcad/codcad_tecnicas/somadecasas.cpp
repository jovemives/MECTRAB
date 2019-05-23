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
	int n, search, casas[N];
	cin >>n;
	
	for(int i = 0; i < n; i++){
		cin >>casas[i];
	}

	int k;
	cin >>k;

	for(int i = 1; i <= n; i++){
		search = k-casas[i];

		if(binary_search(casas, casas+n, search) == 1){
			if(casas[i] <= search){
				cout <<casas[i] <<" " <<search <<endl;
				break;
			} else {
				cout <<search <<" " <<casas[i] <<endl;
				break;
			}
		}
	}

	return 0;
}

