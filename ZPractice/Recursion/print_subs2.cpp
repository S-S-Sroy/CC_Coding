#include<bits/stdc++.h>

using namespace std;

int subs(string input,string output[]){
    //1.Base Case
    if(input.empty()){
        output[0]="";
        return 1;
    }
    //2.Recursion
    string smallString  = input.substr(1);
    int smallOutputsize = subs(smallString,output);

    //3.Work
    for(int i=0;i<smallOutputsize;i++){
        output[i+smallOutputsize]=input[0]+output[i];
    }
    return 2*smallOutputsize;
}

int main(){
    string input;
    cin>>input;
    int len = pow(2,input.size());

    string *output = new string[len];
    int count = subs(input,output);

    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}