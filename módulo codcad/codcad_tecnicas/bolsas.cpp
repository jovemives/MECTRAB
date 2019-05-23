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

	int n, t, d, t_total = 0, d_total = 0; cin >>n;

	for(int i = 0; i < n; i++){
		cin >>t >>d;
		t_total += t;
		
		if(d > d_total)
			d_total = d;
	}

	if(t_total > d_total)
		cout <<(t_total-d_total) <<endl;
	else
		cout <<0 <<endl;
			     
	return 0;
}

