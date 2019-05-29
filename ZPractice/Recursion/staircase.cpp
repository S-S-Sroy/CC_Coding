#include<bits/stdc++.h>

using namespace std;

int staircase(int stairs,int count){
    //1.Base Case
    if(stairs==0){
        return 1;
    }
    if(stairs<0){
        return 0;
    }
    //2.Recursion 
    int x=staircase(stairs-1,count);
    int y=staircase(stairs-2,count);
    int z=staircase(stairs-3,count);
     
    return x+y+z;

}

int main(){
    int n;
    cin>>n;
    int count = 0;
    int ans = staircase(n,count);
    cout<<ans<<endl;
    return 0;
}