#include <stdio.h>

	int main(){
		int n,i,primo = 1;
		scanf("%d",&n);
		
		for(i=2;i<n;i++){
			if(n % i == 0){
				primo = 0;
				break;
			}
		}
		
		if(primo == 1){
			printf("sim\n");
		} else {
			printf("nao\n");
		}
	return 0;	
	}
