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
 
const int N = 1e3 + 10;
int m[N][N], sumX[N], sumY[N];

void input(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >>m[i][j];
			sumX[i] = sumX[i] + m[i][j];
			sumY[j] = sumY[j] + m[i][j];
		}
	}
}

int pesoMax (int n){
	int pesoMax = -1, pesoLocal = 0;
	int x, y;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			pesoLocal = (sumX[i]+sumY[j]) - 2*m[i][j];

			if(pesoLocal > pesoMax)
				pesoMax = pesoLocal;
		}
	}
	return pesoMax;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >>n;

	input(n);

	cout <<pesoMax(n) <<endl;
			     
	return 0;
}

