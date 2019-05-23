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

	string s;
	cin >>s;

	for(int i = 0; i <= s.size(); i++){
		if(s[i] == 'A' or s[i] == 'B' or s[i] == 'C') s[i] = '2'; 		
		if(s[i] == 'D' or s[i] == 'E' or s[i] == 'F') s[i] = '3'; 		
		if(s[i] == 'G' or s[i] == 'H' or s[i] == 'I') s[i] = '4'; 		
		if(s[i] == 'J' or s[i] == 'K' or s[i] == 'L') s[i] = '5'; 		
		if(s[i] == 'M' or s[i] == 'N' or s[i] == 'O') s[i] = '6'; 		
		if(s[i] == 'P' or s[i] == 'Q' or s[i] == 'R' or s[i] == 'S') s[i] = '7'; 		
		if(s[i] == 'T' or s[i] == 'U' or s[i] == 'V') s[i] = '8'; 		
		if(s[i] == 'W' or s[i] == 'X' or s[i] == 'Y' or s[i] == 'Z') s[i] = '9'; 		
	}
	cout <<s <<endl;
			     
	return 0;
}

