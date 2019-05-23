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

	ll n, k;
	cin >>n >>k;

	vector<long long> v;

	for(int i = 1; i <= sqrt(n); i++){
		if(n%i == 0){
			v.pb(i);
			if(i != sqrt(n))
				v.pb(n/i);
		}
	}

	sort(v.begin(), v.end());

	if(k > v.size())
		cout <<-1 <<endl;
	else
		cout <<v[k-1] <<endl;

	return 0;
}

