#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fi first
#define se second

#define fr(i,n) 	for(int i=0;i<n;i++)
#define frr(i,n)	for(int i=1;i<=n;i++)

#define ms(x,i)	memset(x,i,sizeof(x))
#define dbg(x)	cout << #x << " = " << x << endl
#define all(x)	x.begin(),x.end()

#define nl cout << endl
#define sarve cout << "sarve" << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;

ll n, m, ans = 0;

struct comp {
	ll matb;
	ll matc;
};

comp mb[30];

bool compare (comp a, comp b){
	return a.matc > b.matc || (a.matc == b.matc and a.matb < b.matb);
}

int main(){
    fastio;
 
	cin >>n >>m;

	for(int i = 0; i < m; i++) 
		cin >>mb[i].matb >>mb[i].matc;

	sort(mb, mb+m, compare);
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < mb[i].matb; j++){
			if(n > 0) ans += mb[i].matc;
			else break;
			n--;
		}
	}

	cout <<ans <<endl;

    return 0;
}

