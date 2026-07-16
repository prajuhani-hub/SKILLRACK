#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,a,c=0,h=0,cur=0;
    if(!(cin>>n)) 
	    return 0;
    vector<int>d(200015,0);
    while(n--&&cin>>a) 
	    d[0]++,d[a]--;
    for(int i=0;i<200015;i++){
        cur+=d[i];
        int sum=cur+c;
        d[i]=sum%10;
        c=sum/10;
        if(d[i]||c) 
		    h=i;
    }
    while(h>=0) 
	   cout<<d[h--];
    cout<<'\n';
}
