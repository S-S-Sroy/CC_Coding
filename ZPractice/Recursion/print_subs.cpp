#include<bits/stdc++.h>

using namespace std;

void print_subs(string input,string output){
    //1.Base Case
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    //recursin and work
    print_subs(input.substr(1),output);
    print_subs(input.substr(1),output+input[0]);
}

int main(){
    string input;
    cin>>input;
    string output="";
    print_subs(input,output);
}