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
 
int poq(int v[3], int n){
	sort(v, v+3);
	int sum = 0, cont = 0;

	for(int i = 0; i < 3; i++){
		if(sum + v[i] <= n){
			sum += v[i];
			cont++;
		}
	}
	return cont;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n, v[4];
	cin >>n;

	for(int i = 0; i < 3; i++){
		cin >>v[i];
	}

	int ans = poq(v, n);

	cout <<ans <<endl;
		     
	return 0;
}

