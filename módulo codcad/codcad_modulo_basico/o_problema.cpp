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
 
int collatz(int n){
	int cont = 0;

	while(n != 1){
		if(n%2 == 0){
			n /= 2;
			cont++;
		} else{
			n = (3*n) + 1;
			cont++;
		}
	}
	return cont;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >>n;

	cout <<collatz(n) <<endl;
			     
	return 0;
}

