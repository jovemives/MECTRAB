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
    
	int a[5];
	frr(i,4){
		cin >>a[i];	
	}

	string s; cin >>s;

	int ans = 0;
	fr(i,s.size()){
		if(s[i] == '1') ans += a[1];
		if(s[i] == '2') ans += a[2];
		if(s[i] == '3') ans += a[3];
		if(s[i] == '4') ans += a[4];
	}

	cout <<ans <<endl;

    return 0;
}

