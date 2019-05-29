#include<bits/stdc++.h>
#include<vector>

using namespace std;

void func(vector<int> &vect){
    vect.push_back(30);
}

int main()
{
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);

    func(vect);
    
    vector<int>::iterator it;

    for(it= vect.begin();it!=vect.end();it++){
        cout<<*it<<" ";
    }
}