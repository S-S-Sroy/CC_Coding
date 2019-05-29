#include<bits/stdc++.h>
#include<set>

using namespace std;

int main(){
    int int_max=1000;
    set< pair<int,int>>s;

    s.insert({401,450});
    s.insert({10,20});
    s.insert({2,3});
    s.insert({30,400});

    //2,3
    //10,20
    //30,400
   //401,450
    
   // to check the interval in which the number lies
    auto it = s.upper_bound({point,int_max});

    if(it == s.begin()){
        cout<<"The given point is not lying in any interval..\n";
        return 0;
    }
   
    it--;

    pair<int,int> current =*it;
    if(current.first <= point && point<=current.second){
        cout<<"Yes its present: "<< current.first <<" "<< current.second <<endl;
    }
    else{
        cout<<"The given point is not lying in any interval..\n";
    }
}