//for the sum of the array build a segment tree

#include<bits/stdc++.h>

using namespace std;

//Build tree
void buildTree(int *arr,int *tree,int si,int ei,int tree_node){
    

    //1.Base Case
    if(si==ei){
        tree[tree_node] = arr[si];
        return;
    }
    
    int mid = (si+ei)/2;
    //2.Recursion

    buildTree(arr,tree,si,mid,2*tree_node);
    buildTree(arr,tree,mid+1,ei,2*tree_node+1);

    tree[tree_node]=tree[2*tree_node]+tree[2*tree_node+1];
}

//Update tree
void updateTree(int *arr,int *tree,int si,int ei,int tree_node,int idx,int value){
    //1.Base Case
    if(si==ei){
        arr[idx]=value;
        tree[tree_node]=value;
        return;
    }

    int mid = (si+ei)/2;

    //Recursion
    if(idx>mid)
    updateTree(arr,tree,mid+1,ei,2*tree_node+1,idx,value);
    else
    updateTree(arr,tree,si,mid,2*tree_node,idx,value);

    tree[tree_node]=tree[2*tree_node]+tree[2*tree_node+1];
}

//write a query

int query(int *tree,int si,int ei,int tree_node,int left,int right){
    //COmpletely outside

    if(si>right || ei<left){
        return 0;
    }
    //completely insdie
    if(si>=left && ei<=right){
        return tree[tree_node];
    }
    //partially inside & outside
    int mid = (si+ei)/2;
    int ans1 = query(tree,si,mid,2*tree_node,left,right);
    int ans2 = query(tree,mid+1,ei,2*tree_node+1,left,right);
    return ans1+ans2;
}


int main(){
    int arr[]={1,2,3,4,5};
    int *tree = new int[10];

    buildTree(arr,tree,0,4,1);

    updateTree(arr,tree,0,4,1,2,10);

    for(int i=1;i<10;i++){
        cout<<tree[i]<<endl;
    }

    cout<<endl;

    cout<<query(tree,0,4,1,2,4)<<endl;
    return 0;
}