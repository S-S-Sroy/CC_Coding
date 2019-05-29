#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

bool f(int x,int y){
    return x>y;
}
using namespace std;

int main()
{
    vector<int> A ={11,2,3,14};
    
    cout<< A[1]<<endl;

    sort(A.begin(),A.end());//(NlogN)
    //2,3,11,14
    //now i can apply binary search as the array is sorted

    bool present = binary_search(A.begin(),A.end(),3); // true
         present = binary_search(A.begin(),A.end(),4); //false
     

    A.push_back(100);
    present = binary_search(A.begin(),A.end(),100);  

    //2,3,11,14,100

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    
    A.push_back(123);
    //2,3,11,14,100,100,100,100,100

    vector<int>::iterator it1 = lower_bound(A.begin(),A.end(),100);//greater than or = to

    //OR
    // auto it1 = lower_bound(A.begin(),A.end(),100); 

    vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100);//greater than 


     cout<< *it1 << " " << *it2<<endl;
     cout<< it2-it1<< endl ; //5

     //int reverse order
     sort(A.begin(),A.end(),f);

     //to print the vector

     vector<int>::iterator it3;

     for(it3 = A.begin();it3!= A.end();it3++){
         cout<< *it3 <<" ";
     }
     cout<<endl;
     
     //OR
     for(int x : A){
         cout<< x << " ";
     }
     //for changing term

     for(int &x : A){
         x++;
     }
     
      for(int x : A){
         cout<< x << " ";
      }
     return 0;

}