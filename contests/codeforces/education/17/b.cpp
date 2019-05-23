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

	const int N = 3e5;
	ll v1[N], v2[N];

	int a, b, c, n, p;
	int cont1 = 0, cont2 = 0;
	string type;
	cin >>a >>b >>c >>n;

	for(int i = 0; i < n; i++){
		cin >>p >>type;
		if(type == "USB")
			v1[cont1++] = p;
		else
			v2[cont2++] = p;
	}
	sort(v1, v1 + cont1);
	sort(v2, v2 + cont2);

	int i = 0, j = 0, k = 0;
	ll num = 0, din = 0;

	for(i = 0; i < min(a, cont1); i++){
		din += v1[i];
		num++;
	}
	
	for(j = 0; j < min(b, cont2); j++){
		din += v2[j];
		num++;
	}
	while(((i<cont1) or (j<cont2)) and (k<c)){
		if(i == cont1)
			din += v2[j++];
		else if(j == cont2)
			din += v1[i++];
		else
			if(v1[i] < v2[j]){
				din += v1[i];
				i++;
			} else {
				din += v2[j];
				j++;
			}
			k++;
			num++;
		}
	cout <<num << " " <<din <<endl;
			     
	return 0;
}

