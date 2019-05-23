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

const int N = 15;
int n, m[N][N], sum = 0, t1, t2;

bool magicL(){
	for(int j = 0; j < n; j++){
		t1 = 0;
		
		for(int i = 0; i < n; i++){
			t1 += m[i][j];
		}
		
		if(t1 != sum)
			return 0;
	}

	return 1;
}

bool magicC(){
	for(int i = 0; i < n; i++){
		t1 = 0;

		for(int j = 0; j < n; j++){
			t1 += m[i][j];
		}

		if(t1 != sum)
			return 0;
	}

	return 1;
}

bool magicD(){
	t1 = 0;
	t2 = 0;

	for(int i = 0; i < n; i++){
		t1 += m[i][i];
		t2 += m[n-1-i][i];
	}

	if(t1 != sum or t2 != sum)
		return 0;

	return 1;
}

void input(){
	cin >>n;
	for(int i = 0; i < n; i++){
		cin >>m[i][0];
		sum += m[i][0];
	}

	for(int j = 1; j < n; j++){
		for(int i = 0; i < n; i++){
			cin >>m[i][j];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);

	input();

	if(magicC() and magicD() and magicL())
		cout <<sum <<endl;
	else
		cout <<-1 <<endl;
			     
	return 0;
}

