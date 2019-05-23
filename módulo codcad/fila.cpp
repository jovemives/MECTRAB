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
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	vector<int> v;
	int n, aux; 
	
	cin >>n;
	v.resize(n);

	for(int i = 0; i < v.size(); i++){
		cin >>v[i];
	}

	int m; cin >>m;

	for(int i = 0; i < m; i++){
		cin >>aux;
		
		for(int j = 0; j < v.size(); j++){
			if(aux == v[j]){
				v.erase(v.begin()+j);
				break;
			}
		}
	}
	
	for(int i = 0; i < v.size(); i++){
		cout <<v[i] <<" ";
	}
	cout <<endl;

	return 0;
}

