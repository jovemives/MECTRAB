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

int main(){
    fastio;
    
	int n, x = 0; cin >>n;
	string s; getline(cin, s);
 
	fr(i,n){
		getline(cin, s);

		fr(j,s.size()){
			if(s[j] == '{') x++;
			if(s[j] == '}') x--;
			if(x < 0) break;
		}
	}

	cout << (x == 0 ? "S" : "N") <<endl;

    return 0;
}

