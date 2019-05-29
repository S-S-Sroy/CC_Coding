#include<bits/stdc++.h>

using namespace std;

//making a custome data type
struct Interval{
    int st;
    int et;
};

bool compare(Interval i1, Interval i2){
    return i1.st < i2.st;
}
int main(){
    int arr[]={1,3,2,5,7,6};
    
    //sorting
    sort(arr,arr+6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //binary_search
    cout<<binary_search(arr,arr+6,3);
    
    //lower_bound to find the index
    cout<<lower_bound(arr,arr+6,2);//address of the element
    cout<<endl;

    cout<<lower_bound(arr,arr+6,3)-arr;
    cout<<endl;

    //gcd
    cout<<__gcd(16,4)<<endl;

    //swap(x,y);
    //max(x,y);
    //min(x,y);

    //sorting in decreasing order
    /* sort(arr,arr+6,greater<int>());
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }*/
     
    //sort according to starting time 
    /*Interval arr[]={{6,4},{3,4},{4,6},{8,13}};
    sort(arr,arr+4,compare);//define compare function

    for(int i=0;i<4;i++){
        cout<<arr[i].st<<" : "<<arr[i].et<<endl;
    }*/
    return 0;
}