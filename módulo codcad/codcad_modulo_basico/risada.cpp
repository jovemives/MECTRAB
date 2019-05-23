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

	int cont = 0;
	string n;
	char vogal[55];
	cin >>n;

	for(int i = 0; i < n.size(); i++){
		if(n[i]=='a' || n[i]== 'e' || n[i] =='i' || n[i] == 'o' || n[i] == 'u'){
			vogal[cont] = n[i];
			cont++;
		}
	}

	int stop = 0;

	for(int i = 0; i <= (cont/2) and stop == 0; i++){
		if(vogal[i] != vogal[cont-i-1]){
			cout <<"N" <<endl;
			stop = 1;
		}
	}

	if(stop == 0)
		cout <<"S" <<endl;
			     
	return 0;
}

