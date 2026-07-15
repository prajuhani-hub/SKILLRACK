//BINARY SEARCH (LEET CODE 704.)
//C
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int target;scanf("%d",&target);
	int l=0,r=n-1;
    while(l<=r) {
        int mid=(l+r)/2;
        if(arr[mid]==target){
            printf("%d",mid);
            return 0;
        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    printf("-1");
}
