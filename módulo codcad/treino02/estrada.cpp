#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int tc, cont = 0;
	string s;
	cin >>tc >>s;
	
	for(int i = 0; i < tc; i++){
		if(s[i] == 'A')
			cont += 1;
		else if(s[i] == 'P' or s[i] == 'C')
			cont += 2;
	}
	cout <<cont <<endl;

	return 0;
}
