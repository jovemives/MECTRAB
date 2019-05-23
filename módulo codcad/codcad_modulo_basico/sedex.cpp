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
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int l, a, p, r;
	cin >>l >>a >>p >>r;

	int d = sqrt(pow(l, 2) + pow(a, 2) + pow(p, 2));

	if(d <= (2*r))
		cout <<"S" <<endl;
	else
		cout <<"N" <<endl;
		
	return 0;
}

