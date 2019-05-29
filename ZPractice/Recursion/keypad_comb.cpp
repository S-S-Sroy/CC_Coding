#include<bits/stdc++.h>

using namespace std;

string getString(int d){
    if(d==2){
        return "abc";
    }
    if(d==3){
        return "def";
    }
    if(d==4){
        return "ghi";
    }
    if(d==5){
        return "jkl";
    }
    if(d==6){
        return "mno";
    }
    if(d==7){
        return "pqrs";
    }
    if(d==8){
        return "tuv";
    }
    if(d==9){
        return "wxyz";
    }
    return "";
}

int keypad(int input,string output[]){
    //1.Base Case
    if(input==0){
        output[0]="";
        return 1;
    }

    //2 Recursion
    int lastDigit=input%10;
    int smallNumber=input/10;
    int smallOutputSize = keypad(smallNumber,output);

    //3.Work
    string option = getString(lastDigit);
    //made copy
    for(int i=0;i<option.length()-1;i++){
        for(int j=0;j<smallOutputSize;j++){
            output[smallOutputSize*(i+1)+j]=output[j];
        }
    }
    int k=0;
    //now append
    for(int i=0;i<option.length();i++){
        for(int j=0;j<smallOutputSize;j++){
            output[k]=output[k]+option[i];
            k++;
        }
    }
    return smallOutputSize*option.length();

}

int main(){
    int n;
    cin>>n;
    string output[1000];
    int count = keypad(n,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}