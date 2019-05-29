#include<bits/stdc++.h>

using namespace std;

int main(){
    int num,i;
    cin>>num>>i;
    int dummy= 1<<i;
    num = num ^ dummy;
    cout<<num;
    return 0;
}