#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Satya";
    string s1(s,2,4); //2 index sai lekar 4 char ki lenght tk
    cout<<s<<endl<<s1<<endl;

    string s2=s.substr(1,4);
    cout<<s2<<endl;

    if(s1.compare(s2)==0){
        cout<<s1<<" is equal to "<<s2<<endl;
    }
    else{
        cout<<s1<<" is not equal to "<<s2<<endl;
    }
    return 0;
}