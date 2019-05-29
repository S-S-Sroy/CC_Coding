#include<bits/stdc++.h>
using namespace std;

//off set the bit
int main(){
    int num;
    int i;
    int dummy;
    cin>>num;
    cin>>i;
    dummy = ~(1<<i);
    num = num & dummy;
    cout<< num;
    return 0;
}