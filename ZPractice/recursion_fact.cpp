#include<iostream>

using namespace std;

int fact(int x){

    if(x==0)
    return 1;
    int smallOutput = fact(x-1);
    return x*smallOutput;

}
int main(){
    int x;
    cin>>x;

    int result=fact(x);
    cout<<result;
}