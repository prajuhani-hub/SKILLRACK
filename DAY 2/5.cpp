#include <stdio.h>
void solve() {
    int n;
    scanf("%d",&n);
    char s[11];
    scanf("%s",s);
    int msl=0;
    int csl=0;
    for(int i=0;s[i];i++){
        if(s[i]=='#') {
            csl++;
            if (csl>msl){
                msl=csl;
            }
        }else{
            csl=0;
        }
    }
    printf("%d\n",(msl+1)/2);
}
int main() {
    int t;
    if(scanf("%d",&t)==1) {
        while(t--){
            solve();
        }
    }
    return 0;
}
