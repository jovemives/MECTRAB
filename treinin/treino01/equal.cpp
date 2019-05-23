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
	
	const int N = 100 + 10;
	int n, a;
	cin >>n;

	vector<int> v;

	for(int i = 0; i < n; i++){
		cin >>a;
		v.pb(a);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	
	for(int i = 0; i < v.size(); i++){
		cout <<v[i] <<endl;
	}

	if(v.size() > 3)
		cout <<-1 <<endl;

	if(v.size() == 3){
		if(v[1]-v[0] == v[2]-v[1])
			cout <<(v[2]-v[1]) <<endl;
		else
			cout <<-1 <<endl;
	}

	if(v.size() == 2){
		if(v[1]-v[0] % 2 == 0)
			cout <<(v[1]-v[0])/2 <<endl;
		else
			cout <<(v[1]-v[0]) <<endl;
	}

	if(v.size() == 1)
		cout <<0 <<endl;
			     
	return 0;
}

