#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
 
int main() {
	ios_base::sync_with_stdio(false);

	int n, a, b, c;
	cin >>n >>a >>b >>c;

	int ans = 0;
	for(int i = 0; i <= 4000; i++){
		for(int j = 0; j <= 4000; j++){
			int qtd = n-i*a-j*b;

			if(qtd >= 0 and qtd%c == 0){
				ans = max(ans, i+j+(qtd/c));
			}
		}
	}
	cout <<ans <<endl;

	return 0;
}

