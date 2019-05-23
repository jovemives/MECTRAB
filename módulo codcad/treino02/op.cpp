#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	char l;
	double a, b;
	
	cout.precision(2);
	cout.setf(ios::fixed);

	cin >>l >>a >>b;

	if(l == 'M')
		cout <<a*b <<endl;

	if(l == 'D') 
		cout <<a/b <<endl;

	return 0;
}
