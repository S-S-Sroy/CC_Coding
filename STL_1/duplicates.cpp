#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v;
    int n,x;
    cin>>n;
    //insert elements
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    vector<int>::iterator it;
    set<int>s;
    //print elements
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    //insert only the non duplicated elements
    for(int i=0;i<n;i++){
        if(s.find(v[i])==s.end())
           s.insert(v[i]);
    }
    cout<<endl;
    set<int>::iterator it1;
    for(it1=s.begin();it1!=s.end();it1++){
        cout<<*it1<<endl;
    }
    return 0;

    //we can sort the elements & check if the consecutive elements are same or not
}