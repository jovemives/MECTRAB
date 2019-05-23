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

	int x[10], aux = 0;

	for(int i = 0; i < 4; i++){
		cin >>x[i];
	}
	
	for(int i = 0; i < 4; i++){
		for(int j = i+1; j < 4; j++){ 
			if(x[i] > x[j]){
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
	}
	
	int a, b, c;

	a = x[3] - x[2];
	b = x[3] - x[1];
	c = x[3] - x[0];

	cout <<a <<' ' <<b <<' ' <<c <<' ' <<endl;
	
	return 0;
}

