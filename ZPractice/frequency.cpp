#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int>m;
    int i;
    int arr[]={1,2,3,4,1,2,3,4,9};
    set<int>s;
    
    for(i=0;i<9;i++){
        if(s.find(arr[i])==s.end()){
        s.insert(arr[i]);
        }
        m[arr[i]]=m[arr[i]]+1;
    }
   
    set<int>:: iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" : "<<m[*it]<<endl;
    }
    return 0;
}