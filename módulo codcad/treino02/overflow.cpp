#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, p, q;
	char c;
	cin >>n >>p >>c >>q;

	if(c == '+'){
		if(p + q > n)
			cout <<"OVERFLOW" <<endl;
		else
			cout <<"OK" <<endl;
	}

	if(c == '*'){
		if(p * q > n)
			cout <<"OVERFLOW" <<endl;
		else
			cout <<"OK" <<endl;
	}
	return 0;
}
