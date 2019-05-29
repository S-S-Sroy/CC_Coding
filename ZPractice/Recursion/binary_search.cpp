#include<bits/stdc++.h>

using namespace std;

int binary_Search(int input[],int si,int ei,int element){
    //1.base case 
    //element cannot be found
    
    if(si>ei){
        return -1;
    }
    //2.Work
    int mid=(si+ei)/2;
    if(input[mid]==element){
        return mid;
    }
    //3.Recursion
    if(input[mid]<element){
        binary_Search(input,mid+1,ei,element);
    }
    else{
        binary_Search(input,si,mid-1,element);
    }
    

}

int main(){
    int input[]={2,3,4,5,6,8};
    int ans = binary_Search(input,0,5,1);
    cout<<ans<<endl;
}