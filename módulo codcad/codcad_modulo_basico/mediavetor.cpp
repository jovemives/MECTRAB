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
 
double media_vetor(int n, int v[]){
	double med = 0; 
	double sum = 0, x = 0;

	for(int i = 0; i < n; i++){
		sum += v[i];
	}

	med = sum/n;
	return med;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n, v[100100];
	cin >>n;

	for(int i = 0; i < n; i++){
		cin >>v[i];
	}

	cout <<fixed <<setprecision(2) <<media_vetor(n, v) <<endl;
			     
	return 0;
}

