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

	char d, n[200];
	scanf("%c", &d);
	scanf("%s", n);
	
	while(d != '0'){
		int s = strlen(n);

		for(int i = 0; i < s; i++){
			if(n[i] == d){
				for(int j = i; j < s; j++)
					n[j] = n[j+1];
				n[s-1] = 0;
				s--;
				i--;
			}
		}

		for(int i = 0; i < s-1; i++){
			if(n[i] == '0'){
				for(int j = i; j < s; j++)
					n[j] = n[j+1];
				n[s-1] = 0;
				s--;
				i--;
			}
			else 
				break;
		}

		if(s == 0){
			n[0] = '0';
			n[1] = '\0';
		}

		printf("%s\n", n);
		scanf(" %c", &d);
		scanf("%s", n);
	}		     
	return 0;
}

