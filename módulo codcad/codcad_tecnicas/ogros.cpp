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
 
const int N = 1e5 + 10;
int faixas[N], premios[N], ogros[N];

int buscab(int x){
	int left = 1, mid, right = n;
	
	while(left <= right){
		mid = (left+right)/2;
		
		if(ogros[i] > mid)
			left = mid+1;
		if(ogros[i] < mid)
			right = mid-1;
		if(ogros[i] == mid)
			return ogros[i+1];
	}
}

int main() {
	ios_base::sync_with_stdio(false);

	int n, m;

	for(int i = 1; i <= n-1; i++){
		cin >>faixas[i];
	}

	for(int i = 1; i <= n; i++){
		cin >>premios[i];
	}

	for(int i = 1; i <= m; i++){
		cin >>ogros[i];
	}
			     
	return 0;
}

