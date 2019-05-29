#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,position;
        int curr_time;
        cin>>n>>m;
        
        vector<pair<int,int>>intervals;
        int start,end;
        for(int i=0;i<n;i++){
            cin>>start>>end;
           intervals.push_back(make_pair(start,end));
        }
        sort(intervals.begin(),intervals.end());
        while(m--){
            
            cin>>curr_time;
            //lower_bound gives a iterator, so to find the position we need to subtract from the beginning.
            position = lower_bound(intervals.begin(),intervals.end(),make_pair(curr_time,0))-intervals.begin();
        
        //when curr_time matches with zeroth position
        if(position==0){
            int ans = intervals[0].first - curr_time;
            cout<<ans<<endl;
        }
        else{
            //comparing with just before the position
            int ans=-1;
            if(intervals[position-1].second>curr_time){
                ans=0;
            }
            //position lies in intervals
            else if(position<intervals.size()){
                ans = intervals[position].first - curr_time;
            }
            //if ans remained -1 that means position lies out of bound
            cout<<ans<<endl;
        }
        }
    }
    return 0;
}