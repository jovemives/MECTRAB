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

	int n, cont = 0;
	string s;
	cin >>n >>s;

	for(int i = 0; i < n; i++){
		s.erase(unique(s.begin(), s.end()), s.end());
	}
	
	if(n > 4 and s.size() <= 3){
		cout <<4 <<endl;
	}

	if(n > 4 and s.size() == n-1){
		cout <<2 <<endl;
	}

	if(n > 4 and s.size() < n-1){
		cout <<s.size() <<endl;
	}

	if(n < 4 and s.size() == 3){
		cout <<2 <<endl;
	}

	if(n < 4 and s.size() == n/2){
		cout <<2 <<endl;
	}
    
    return 0;
}

