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
ll n, m, v[N];

int melhor(int a, int b){
	return a%m > b%m or (a%m == b%m and a/m > b/m);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	cin >>n >>m;

	for(int i = 0; i < n; i++){
		cin >>v[i];
	}

	sort(v, v+n, melhor);

	for(int i = 0; i < n; i++){
		cout <<v[i] <<" ";
	}
	cout <<endl;
    
    return 0;
}

