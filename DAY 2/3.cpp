//FIRST MISSING POSITIVE 41.
#include<iostream>
//first missing positive
#include<vector>
using namespace std;
int firstmissing(vector<int>&nums){
	int n=nums.size();
	vector<bool>present(n+2,false);
	for(int i=0;i<n;i++){
        int v=nums[i];
        if (v<=0||v>n)
            continue;
        present[v]=true;
	}
	for(int v=1;v<=n+1;v++){
		if(!present[v]) return v;
	}
	return 0;
	
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for (int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<firstmissing(nums);
    return 0;
}
