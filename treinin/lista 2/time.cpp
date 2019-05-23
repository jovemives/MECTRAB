#include <stdio.h>

	int main(){
		int i,n,p,v,t,prob = 0;
		scanf("%d",&n);

		for(i = 0; i < n; i++){
			scanf("%d%d%d",&p,&v,&t);

			if((p + v + t) > 1){
				prob++;
			}
		}
		printf("%d\n",prob);

	return 0;
	}	
