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

	const int N = 1e4 + 10;
	int b, deb;
	int r[N];
	
	while(cin >>b and cin >> deb and b || deb){
		for(int i = 0; i < b; i++){
			cin >>r[i];
		}

		for(int i = 0; i < deb; i++){
			int d, c, v;
			cin >>d >>c >>v;
			r[d-1] -= v;
			r[c-1] += v;
		}
		bool flag = true;
		for(int i = 0; i < b; i++){
			if(r[i] < 0){
				flag = false;
				break;
			}
		}
		
		if(flag)
			cout <<"S" <<endl;
		else
			cout <<"N" <<endl;
	}
		
	return 0;
}

