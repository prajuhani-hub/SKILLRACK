//print number of letters
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(){
	string s;
	cin>>s;
	vector<pair<char,int> >v;
	for(int i=0;i<s.length();i++) {
        char ch=s[i];
		if(ch>='a'&&ch<='z'){
			v.push_back(make_pair(ch,0));
		}else{
			int pi=v.size()-1;
			int count=v[pi].second*10+(ch-'0');
			v[pi].second=count;
		}
	}
	for(int i=0;i<v.size();i++) {
        char ch=v[i].first;
        int rpt=v[i].second;
        if(rpt==0)
            rpt=1;
        while(rpt--){
            cout<<ch;
        }
    }
}
int main(){
	solve();
	return 0;
}
