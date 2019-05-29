#include<iostream>
#include<set>

using namespace std;

int main(){
    //sets cannot save same numbers more than once
    //it save elements in BST 
    //take log(N) time in doing opertaion
	//save in ascending order
	set<int> s;
	s.insert(3);
	s.insert(2);
	s.insert(5);
	s.insert(6);
	s.insert(90);
	
	auto it1=s.find(1);
	auto it2=s.find(2);
	//compare if found the element
	if(s.find(2)==s.end()){
		cout<<"Element not found";
	}
	
	cout<<*it1<<endl<<*it2<<endl;
	
	//set<int> :: iterator it; can be repalaced by auto
	
	for(auto it=s.begin();it!=s.end();it++){
		cout<<*it<<endl;
	}
}