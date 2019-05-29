#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

bool func( const vector<int> &v1,const vector<int> &v2)
{
    return v1.size()<v2.size();
}

//vector is a dynamic array

void vectordemo(){
     vector< vector<int> > vect {
        {1,2,3,4},
        {1,2,3},
        {1,2}
    };

    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
    /*
    vector<int>::iterator it1,it2;
    for(it1=vect.begin();it1!=vect.end();it1++){
        for(it2=it1.begin();it2!=it1.end();it2++)
        cout<<**it2<<" ";
    }
    cout<<endl;
    */

     //sort according to the no. of columns

     sort(vect.begin(),vect.end(),func);   

     for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }

    //input throug the user
    int row = 3;
    int column[]={3,2,1};
    vector<vector<int>> vect2(row);

    for(int i=0;i<row;i++){
        int col =column[i];

        vect[i]=vector<int> (col);
        for( int j=0;j<col;j++)
        {
            cin>>vect[i][j];
        }
    }

    //for each syntax in 2D array

     for(vector<int> y : vect){
        for(int x: y){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

//SETS
//set automatically sort the inserted array

void setdemo(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    for(int x : s){
        cout<<x<<" ";
    }

    auto it = s.find(6);
   
    if(it == s.end()){
        cout<<"not possible\n";
    }
    else{
        cout<<"present\n";
        cout<<*it<<endl;
    }
    auto it2 = s.upper_bound(3);
    cout<< *it2 <<endl;

}


int main()
{
   setdemo();
}