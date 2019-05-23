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

const int N = 100 + 10;
int m[N][N], cont = 0;

void input(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> m[i][j];
		}
	}
}

void passa(int i, int j, int n){
	if(m[i][j] < 0) return;
	cont++;
	m[i][j] *= -1;

	if(j < (n-1) and abs(m[i][j]) <= abs(m[i][j+1])) passa(i, j+1, n);
	if(i < (n-1) and abs(m[i][j]) <= abs(m[i+1][j])) passa(i+1, j, n);
	if(j > 0 and abs(m[i][j]) <= abs(m[i][j-1])) passa(i, j-1, n);
	if(i > 0 and abs(m[i][j]) <= abs(m[i-1][j])) passa(i-1, j, n);

	return;
}

void print(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout <<m[i][j] <<" ";
		}
		cout <<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);

	int n, i1, j1;
	cin >>n >>i1 >>j1;

	input(n);

	passa(i1-1, j1-1, n);
	cout <<cont <<endl;
			     
	return 0;
}

