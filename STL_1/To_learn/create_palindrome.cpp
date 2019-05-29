#include<bits/stdc++.h>
using namespace std;

// FUnction to get the char
char getChar(int i){
    return (char)(i+97);
}
//-----------------------------
void print(string s){
    
    map<char,vector<int>>index;
    int odd_freq=0;
    //to fetch the vector
    for(int i=0;i<s.length();i++){
        index[s[i]].push_back(i);
    }
    //-----------------------------------

    //checking for add freq char
    for(int i=0;i<26;i++){
        if(index[getChar(i)].size()%2 != 0){
            odd_freq++;
        }
    }
    if(odd_freq>=2){
        cout<<"-1";
        return;
    }
    //-----------------------------------------
    int ans[s.length()];
    int start =0;
    int end= s.length()-1;

    for(int i=0;i<26;i++){
        for(int j=0;j<index[getChar(i)].size();j+=2){
            //how only one time odd then place the last element in the middle
            if((index[getChar(i)].size()-j)==1){
                ans[s.length()/2]=index[getChar(i)][j];
                continue;
            }
            //------------------------------------------------
            ans[start]= index[getChar(i)][j]; //how to access the vector element
            ans[end]= index[getChar(i)][j+1];
            start++;
            end--;
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<ans[i]+1<<" ";
    }
    return;

}

int main(){
    int t;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>s;
        print(s);
        cout<<endl;
    }
}