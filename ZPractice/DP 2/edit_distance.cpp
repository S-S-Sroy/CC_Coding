#include<bits/stdc++.h>
#include <cstdlib>

using namespace std;
int ans =0;
int editDistance(string s1,string s2,int m,int n){

    if(s1[0]=='\0'){
        return n;
    }  
    if(s2[0]=='\0'){
        return m;
    }
  
    if(s1[0]==s2[0]){
        editDistance(s1.substr(1),s2.substr(1),m-1,n-1);
    }
    
    int subt = 1+editDistance(s1.substr(1),s2.substr(1),m-1,n-1);
    int delt = 1+editDistance(s1.substr(1),s2,m-1,n);
    int inst = 1+editDistance(s1,s2.substr(1),m,n-1);

    return min(subt,min(delt,inst));
}

int main(){
    string s;
    string t;
    cin>>s>>t;
    int m = s.length();
    int n = s.length();

   cout<< editDistance(s,t,m,n);
    return 0;
}