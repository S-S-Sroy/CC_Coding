#include<bits/stdc++.h>

using namespace std;

long countNum(string s){
	long m = 1000000007;
	int n = s.length();
	
	long *o = new long[n+1];
	
	o[0]=1;
	o[1]=1;
	
	//output fill kr raha hu
	//isliye i=2 sai start hoga
	for(int i=2;i<=n;i++){
		
		o[i]=0;
		if(s[i-1]>'0'){
			o[i]=o[i-1];
		}
		
		int x = (s[i-2]-'0')*10+(s[i-1]-'0');
		
		if(x<27 && x>9){
			o[i]=(o[i]%m +o[i-2]%m)%m;
		}
	}
		long ans = o[n];
		delete []o;
		return ans;
}

int main(){
	
	string s;
	cin>>s;
	
	while(s[0]!='0'){
		cout<<countNum(s)<<endl;
		cin>>s;
	}
	
	return 0;
}