#include<bits/stdc++.h>
using namespace std;

int main(){

    //to store frequency of a element in an array
    map<int,int> m;
    int arr[]={1,2,3,4,5,1,2,2,2};
    for(int i=0;i<9;i++){
        m[arr[i]]++;
    }

    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" : "<<(*it).second<<endl;  
    }
    return 0;
}