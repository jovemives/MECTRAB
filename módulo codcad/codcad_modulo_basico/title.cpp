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
 
string title(string f){
	if(isalpha(f[0]) and islower(f[0]))
		f[0] = f[0] - 32;
	for(int i = 1; i < f.size(); i++){
		if(isalpha(f[i])){
			if(f[i-1] == ' ' and islower(f[i]))
				f[i] = f[i] - 32;
			else if(f[i-1] != ' ' and isupper(f[i]))
				f[i] = f[i] + 32;
		}
	}
	return f;
}

int main() {
	ios_base::sync_with_stdio(false);

	string f;
	getline(cin, f);

	cout <<title(f) <<endl;
			     
	return 0;
}

