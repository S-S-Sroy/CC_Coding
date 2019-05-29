#include<iostream>
#include<map>

using namespace std;

int main(){
	map<int,int> a;
	a[1]=100;
	a[2]=200;
	a[3]=300;
	a[4]=400;
	cout<<a[1]<<endl;
	//map also follows BST but it also stores the pair value
	// Nlog(N) time
	map<char,int> cnt;
	string s ="Satya Shree Samantroy";
	for(char c : s){
		cnt[c]++;
	}
	
	cout<<cnt['a']<<endl<<cnt['S'];
	
}