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
 
int fib(int n){
	if(n <= 1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

int main() {
	ios_base::sync_with_stdio(false);

	int n;
	cin >>n;

	cout <<fib(n) <<endl;
			     
	return 0;
}

