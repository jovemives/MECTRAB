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

	queue<char> fila;
	int m, n;
	
	for(char i = 'A'; i <= 'P'; i++){
		fila.push(i);
	}

	for(int i = 0; i < 15; i++){
		cin >>m >>n;
		char a, b;

		a = fila.front(); fila.pop();
		b = fila.front(); fila.pop();

		if(m > n)
			fila.push(a);
		else
			fila.push(b);
	}

	cout <<fila.front() <<endl;

	return 0;
}

