#include<bits/stdc++.h>
using namespace std;

void replaceCharacter(char* input,char c1,char c2)
{
    //1. base case
    if(input[0]=='\0'){
        return ;
    }
    // 2. do some work on the solution
    if(input[0]!=c1){
        replaceCharacter(input+1, c1, c2);
    }
    if(input[0]==c1){
        input[0]=c2;
        replaceCharacter(input+1, c1, c2);
    }
}

int main(){
    char str[100];
    cin>>str;
    replaceCharacter(str,'a','x');
    cout<<str;
    return 0;
}