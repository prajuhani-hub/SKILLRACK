//ADJACENT SUM
#include<stdio.h>
int main(){
	int r,c;
	scanf("%d %d",&r,&c);
	int arr[r][c],i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int rd[]={-1,-1,-1,0,0,1,1,1};
	int cd[]={-1,0,1,-1,1,-1,0,1},k;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			int sum=0;
			for(k=0;k<8;k++){
				int ar=i+rd[k],ac=j+cd[k];
				if(ar>=0&&ar<r&&ac>=0&&ac<c){
					sum+=arr[ar][ac];
				}
			}
			printf("%d ",sum);
		}
		printf("\n");
	}
}
