// TRAPPING WATER (LEET CODE 42.)
//C++
#include<stdio.h>
int trap(int*height,int heightSize) {
    int n=heightSize;
    int left[n];
    int right[n],i;
    int maxL=height[0];
    for(i=0;i<n;i++) {
        if(height[i]>maxL)
            maxL=height[i];
        left[i]=maxL;
    }
    int maxR=height[n-1];
    for(i=n-1;i>=0;i--){
        if(height[i]>maxR)
            maxR=height[i];
        right[i]=maxR;
    }
    int sum=0;
    for(i=0;i<n;i++) {
        int mn;
        if(left[i]<right[i])
            mn=left[i];
        else
            mn=right[i];
        sum+=mn-height[i];
    }
    return sum;
}
int main(){
    int height[]={4,2,0,3,2,5};
    int n=sizeof(height)/sizeof(height[0]);
    printf("%d\n",trap(height,n));
    return 0;
}
