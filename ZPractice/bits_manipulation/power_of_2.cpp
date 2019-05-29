#include<bits/stdc++.h>

using namespace std;

//Power of 2
//8 -> 0000 1000
//7 -> 0000 0111
int main(){
    int N;
    cin>>N;

    if(!(N & (N-1))){
        cout<<"Yes";
    }
    else
    cout<<"false";
    return 0;
}