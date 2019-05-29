#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool sizecol (const vector<int>&v1,const vector<int>&v2){
    return v1.size()<v2.size();
}

int main()
{
    vector< vector<int> > vect  {
        {1,2},
        {3,4,5},
        {6}
    };

    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++){
            cout<< vect[i][j]<<" ";
        }
        cout<<endl;
    }
    sort(vect.begin(),vect.end(),sizecol);

    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++){
            cout<< vect[i][j]<<" ";
        }
        cout<<endl;
    }
}