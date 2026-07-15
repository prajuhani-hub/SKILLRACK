//GREATEST COMMON DIVISOR OF ARRAY
//C++
#include <iostream>
#include <vector>
using namespace std;
int gcd(int a,int b){
	if(b==0)
	   return a;
	else
	   return gcd(b,a%b);
}
int main(){
	int n; cin>>n;
	vector<int> arr(n);int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int mx=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>mx)
		   mx=arr[i];
	}
	int mn=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<mn)
		   mn=arr[i];
	}
	cout<<gcd(mn,mx);
}
