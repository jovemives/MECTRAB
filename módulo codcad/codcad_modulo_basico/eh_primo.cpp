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

bool eh_primo(int x){
	for(int i = 2; i < x; i++){
		if(x == 2)
			return 1;
		if(x%i != 0)
			continue;
		else
			return 0;
	}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);

	int x;
	cin >>x;

	if(eh_primo(x) == 1)
		cout <<"S" <<endl;
	else
		cout <<"N" <<endl;
			     
	return 0;
}

