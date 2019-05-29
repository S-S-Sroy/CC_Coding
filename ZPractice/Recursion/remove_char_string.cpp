#include<bits/stdc++.h>

using namespace std;

void remove(char s[]){
    if(s[0]=='\0'){
        return ;
    }

    if(s[0]!='x'){
        remove(s+1);
    }
    else{
        int i=1; //so to have access of i outside the for loop
        for(;s[i]!='\0';i++){
            s[i-1]=s[i]; 
        }
        s[i-1]=s[i]; //to add the null char in the small array
        remove(s); // to check for more x 
    }
}

int main(){
    char str[100];
    cin>>str;

    remove(str);
    cout<<str<<endl;
}