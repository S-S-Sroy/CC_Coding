#include<bits/stdc++.h>
using namespace std;

bool checkAB(string input,int startIndex){
    //1.base case
    if(input[startIndex]=='\0')
    return true;

    if(input[startIndex]!='a'){
        return false;
    }
    //2.recursion
    if(input[startIndex+1]=='b' && input[startIndex+2]=='b')
    {
        return checkAB(input,startIndex+3);
    }
    return checkAB(input,startIndex+1);
}

int main(){
    string input;
    
    cin>>input;
    int startIndex=0;
    bool ans= checkAB(input,startIndex);
    cout<<ans<<endl;
}