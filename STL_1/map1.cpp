#include<bits/stdc++.h>
#include<map>

using namespace std;

int main()
{
    map<int,int> A;
    A[1]=100;
    A[2]=-1;
    A[3]=200;
    
    //to find the frequency of the letters
    map<char,int> cnt;
    string x = "satya shree samantroy";
    
    for(char c:x){
        cnt[c]++;
    }

    cout<<cnt['a']<<" "<<cnt['s'] <<endl;
}

