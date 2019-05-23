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

char a[1000000];
int main() {
	ios_base::sync_with_stdio(false);

	int tc;
	cin >>tc;

	while(tc--){
		int c, k, cont = 0;
		cin >>c >>k;
		cin >>a;

		for(int i = 0; i < c; i++){
			if(a[i] == '0')
				cont++;
			else if(cont > k)
				break;
			else
				cont = 0;
		}

		if(cont > k)
			cout <<"yes" <<endl;
		else
			cout <<"no" <<endl;
	}
	return 0;
}

