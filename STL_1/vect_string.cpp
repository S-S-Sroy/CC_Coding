#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vect(n);
    vector<int>::iterator it;
    //Method to take input or access the vector
    //1st
    for(int i=0;i<vect.size();i++){
        vect[i]=i+1;
        // vect.push_back(i+1);
    }
    
    for(it=vect.begin();it!=vect.end();it++){
        cout<<*it<<endl;
    }

    //-------------------------------------------------

    //strings
    string s="Satya Shree Samantroy";
    string s1(s);    // duplicate the string
    string s2(s,2,4);// index 2 sai 4 letter tk
    string s3=s.substr(2,4); // index 2 sai 4 letter
    cout<<s<<endl<<s1<<endl<<s2<<endl<<s3;

    if(s1.compare(s)==0){ //compare two strings
        cout<<endl<<s1<<" is equal to "<<s;
    }
    else
    cout<<"They are not equal";
    
    return 0;
}