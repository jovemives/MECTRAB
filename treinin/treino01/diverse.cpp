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
 
int returnval(char x){
	return (int)x;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n, v[100];
	string s;
	cin >>n;

	for(int i = 0; i < n; i++){
		cin >>s;
		sort(s.begin(), s.end());
		
		bool flag = true;

		for(int i = 0; i < s.size()-1; i++){
			if(s[i] + 1 != s[i+1]){
				flag = false;	
			}
		}

		if(flag == 1){
			cout <<"Yes" <<endl;
		} else
			cout <<"No" <<endl;
	}
			     
	return 0;
}

