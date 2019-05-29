#include<bits/stdc++.h>

using namespace std;

int lcs(char *s1,char *s2){

    //1.Base Case
    if(s1[0]=='\0' || s2[0]=='\0'){
        return 0;
    }

    if(s1[0]==s2[0]){
        return 1+lcs(s1+1,s2+1);
    }

    //Recursion
    int option1 = lcs(s1,s2+1);
    int option2 = lcs(s1+1,s2);

    return max(option1,option2);
}

int main(){
    //To find longest common subsequence
    char s1[100],s2[100];
    cin>>s1>>s2;

    cout<<lcs(s1,s2);
    return 0;
}