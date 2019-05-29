#include<bits/stdc++.h>

using namespace std;

bool compare(const pair<int,int> &a,const pair<int,int> &b){
	return a.first<b.first;
}

int main(){
	vector<pair<int,int>> v;
	vector<pair<int,int>>::iterator it;
	int n,x,y;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	
	sort(v.begin(),v.end(),compare);
	
	for(it=v.begin();it!=v.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	
	
	return 0;
}