#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
 
int main() {
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >>n >>m;

	if(m > n/2)
		cout <<n-m <<endl;
	else if(m <= n/2 and m != 0)
		cout <<m <<endl;
	else if(m == 0)
		cout <<1 <<endl;
	else if(m == n)
		cout <<0 <<endl;

	return 0;
}

