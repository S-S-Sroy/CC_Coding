#include<bits/stdc++.h>

using namespace std;


int subs(string input , string output[]){
    //1.base case 0th pai null char 
    //if(a[0]='\0')
    //if(input.empty())
    if(input.size()==0){
        output[0]="";
        return 1;
    }

    //2.Recursion
    string smallString = input.substr(1);
    int smallOutputSize = subs(smallString,output);
    
    //3.Work
    for(int i=0;i<smallOutputSize;i++){
        output[i+smallOutputSize]=input[0]+output[i];
    }
    return 2*smallOutputSize;
}

int main(){
    string input;
    cin>>input;
    string* output = new string[1000];
    int count = subs(input,output);

    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}