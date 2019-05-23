#include <stdio.h>

	int main(){
		int n;
		char s[55];
		scanf("%d",&n);
		
		scanf("%s",&s);
		int rgb;
		
		for(int i = 0; i < n; i++)
		{
			if(s[i] == s[i+1]){
				rgb++;
			}
		}
		printf("%d\n",rgb);	

		return 0;
	}
