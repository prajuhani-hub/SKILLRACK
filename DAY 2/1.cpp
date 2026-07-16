//FINDING MAX WITHOUT SORTING
#include<stdio.h>
int main(){
	int n,fmax,smax=-1,cur;
	scanf("%d%d",&n,&fmax);
	int ctr;
	for(ctr=2;ctr<=n;ctr++){
		scanf("%d",&cur);
		if(cur>fmax){
			smax=fmax;
			fmax=cur;
		}
		else if(cur>smax){
			smax=cur;
		}
	}
	printf("%d %d",fmax,smax);
}
