#include<bits/stdc++.h>

using namespace std;

int length(char s[]){
    if(s[0]=='\0'){ //base case
        return 0;
    }
    int small_string = length(s+1);
    return 1+small_string;
}

int main(){
    char str[100];
    cin>>str;

    int l = length(str);
    cout<< l <<endl;
    return 0;
}