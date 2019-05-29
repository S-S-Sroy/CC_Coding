 #include<iostream>
#include<utility>
#include<set>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
   //PAIR
    pair<int,char>p;
    //making pair
    p=make_pair(2,'b');
    pair<int,char>p2(1,'a');

    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;
    
    
    //SETS
    //declaring sets
    set<int> s; //it will sort and will not contain any repeating digit
    set<int>::iterator it;

    int arr[]={1,2,3,4,5,6,6,6};

     //insert element is sets
     //BST binary search tree implementation
    for(int i=0;i<7;i++){
        s.insert(arr[i]);
    }

    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }

    if(s.find(9)==s.end()){
        cout<<"Element not found"<<endl;
    }
    else
    cout<<"Element found"<<endl;
    
    //MAP
    //Key,value pair
    int arr1[7] ={1,2,3,4,5,6,5};
    map<int,int>m;

    for(int i=0;i<7;i++){
        m[arr1[i]]=m[arr[i]]+1;
    }

    map<int,int>::iterator it2;
    for(it2=m.begin();it2!=m.end();it2++){
        cout<<it2->first<<" :"<< it2->second<<endl;
    }

    m.erase(1);
    cout<<endl;

    for(it2=m.begin();it2!=m.end();it2++){
        cout<<it2->first<<" :"<< it2->second<<endl;
    }

    //Uncordered Map
    //hashing 
    int arr2[7] ={1,2,3,4,5,6,5};
    unordered_map<int,int>n;

    for(int i=0;i<7;i++){
        n[arr2[i]]=n[arr[i]]+1;
    }

    unordered_map<int,int>::iterator it3;
    for(it3=n.begin();it3!=n.end();it3++){
        cout<<it3->first<<" :"<< it3->second<<endl;
    }

    n.erase(1);
    cout<<endl;

    for(it2=m.begin();it2!=m.end();it2++){
        cout<<it2->first<<" :"<< it2->second<<endl;
    }
    

    return 0;
}