#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int> :: iterator it;
    string s1;
    string s[100000];
    int k=0;
    int count=0;
    //string space seperated strings
    getline(cin,s1);

    //seperating the strings into string array for mapping
    int len = s1.length();
    for(int i=0;i<=len;i++){
        if(s1[i]==' ' || s1[i]=='\0'){
             int s_len =i-k;
             s[count]=s1.substr(k,s_len);
            k=i+1;
            count++;
        }
       
    }
    //print the string s1
    cout<<s1<<endl;
    for(int i=0;i<count;i++){
    	cout<<s[i]<<endl;
    }
    //mapping
    for(int i=0;i<count;i++){
        m[s[i]]=m[s[i]]+1;
    }
    //printing the map
    for(it=m.begin();it!=m.end();it++){
    	cout<<it->first<<" : "<<it->second<<endl;
    }
    
	return 0;
}

