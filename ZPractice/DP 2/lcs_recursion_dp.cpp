#include<bits/stdc++.h>

using namespace std;

int lcs_dp(char *s1,char *s2,int m,int n,int **dp){
    //1.Base Case
    if(n==0 || m==0){
        return 0;
    }
    int ans;
    if(dp[m][n]>-1){
        return dp[m][n];
    }

    if(s1[0]==s2[0]){
        ans= 1+lcs_dp(s1+1,s2+1,m-1,n-1,dp);
    }
    else{
        int option1 = lcs_dp(s1+1,s2,m-1,n,dp);
        int option2 = lcs_dp(s1,s2+1,m,n-1,dp);
        ans=max(option1,option2);
    }
    dp[m][n]=ans;
    return ans;
}

int main(){
    char s1[100],s2[100];
    cin>>s1>>s2;
    
    int m = strlen(s1);
    int n = strlen(s2);

    int **dp = new int*[n+1]; //number of columns
    for(int i=0;i<=n;i++){
           dp[i]=new int[m+1];  //number of rows
        for(int j=0;j<=m;j++){
            dp[i][j]=-1;
        }
    }

    cout<<lcs_dp(s1,s2,m,n,dp);
    return 0;
}