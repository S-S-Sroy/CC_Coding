#include<bits/stdc++.h>
using namespace std;
int MAX = 1000000;
void buildtree(int *A,int si,int ei,int *tree,int tree_node){
    //!.base case
    if(si==ei){
        tree[tree_node]=A[si];
        return;
    }
    
    int mid = (si+ei)/2;
    //Recursion
    buildtree(A,si,mid,tree,tree_node*2);
    buildtree(A,mid+1,ei,tree,tree_node*2+1);
    
    tree[tree_node]=min(tree[2*tree_node],tree[2*tree_node+1]);
    
}

int query(int si,int ei,int left,int right,int *tree,int tree_node){
    // completely Outside
    if(ei<left || right<si){
        return MAX;
    }
    
    //completely inside
    if(si>=left && ei<=right)
    {
        return tree[tree_node];
    }
    //partial
    int mid=(si+ei)/2;
    
    int ans1 = query(si,mid,left,right,tree,tree_node*2);
    int ans2 = query(mid+1,ei,left,right,tree,tree_node*2+1);
    
    return min(ans1,ans2);
}

void updateTree(int *arr,int si,int ei,int *tree,int tree_node,int idx,int value){
    if(si==ei){
        arr[idx]=value;
        tree[tree_node]=value;
        return;
    }
     int mid = (si+ei)/2;

    //Recursion
    if(idx>mid)
    updateTree(arr,mid+1,ei,tree,2*tree_node+1,idx,value);
    else
    updateTree(arr,si,mid,tree,2*tree_node,idx,value);
    
    tree[tree_node]=min(tree[2*tree_node],tree[2*tree_node+1]);
}

int main() {

	// Write your code here
    int N,l,r,Q;
    char q;
    cin>>N>>Q;
    int A[N];
    
    for(int i=1;i<=N;i++){
        cin>>A[i];
    }
    
    int *tree = new int[4*N];
    
    buildtree(A,1,N,tree,1);
    
    for(int i=0;i<Q;i++){
        cin>>q>>l>>r;
        if(q=='u'){
            updateTree(A,1,N,tree,1,l,r);
        }
        else
        cout<<query(1,N,l,r,tree,1)<<endl;
    }
    
}