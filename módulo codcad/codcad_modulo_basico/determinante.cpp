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
 
int det(int m[][3]){
	int ans;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			ans = (m[0][0]*m[1][1]*m[2][2] + m[0][1]*m[1][2]*m[2][0] + m[0][2]*m[1][0]*m[2][1]) - (m[0][0]*m[1][2]*m[2][1] + m[0][1]*m[1][0]*m[2][2] + m[0][2]*m[1][1]*m[2][0]);  
		}
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);

	int m[3][3];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >>m[i][j];
		}
	}

	cout <<det(m) <<endl;
			     
	return 0;
}

