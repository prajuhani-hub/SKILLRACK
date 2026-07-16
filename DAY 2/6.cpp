#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	scanf("%s",s);
	int l=strlen(s),i,max=1,count=1;
	for(i=0;i<l;i++){
		if(s[i]==s[i+1]){
			count++;
		}
		else{
			count=1;
		}
		if(count>max){
		  max=count;
	    }
	}
	printf("%d",max);
}
