#include<bits/stdc++.h>

using namespace std;

int  main(){
    int x;
    float y;
    //amount of cash she wants to withdraw x
    //total money in the bank y
    scanf("%d %f",&x,&y);
    if((float)x+0.50<y && (x%5==0))
    {
        y=y-x-0.50;
        printf("%.2f",y);
    }
    else{
        
        printf("%.2f",y);
    }
}