#include<bits/stdc++.h>

using namespace std;

void removeConsecutiveDuplicates(char *input) {
    if(input[0]=='\0'){ //1. Base case
        return;
    }
    if(input[0]!=input[1]){                   //2. Work only on the 0th element.
                                              //and rest will be taken care by recursion.
        removeConsecutiveDuplicates(input+1);
    }
    if(input[0]==input[1]){
        int i=1;
        for(;input[i]!='\0';i++){
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeConsecutiveDuplicates(input);
    }
}

int main(){
    char str[100];
    cin>>str;
    removeConsecutiveDuplicates(str); 
    cout<<str;
    return 0;
}