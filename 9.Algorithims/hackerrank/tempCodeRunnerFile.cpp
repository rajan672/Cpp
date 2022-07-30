vector<int> ans;
    for(int i=0; i<n; i++){
        int absolute= abs(arr[i]-arr[i+1]);
        if(absolute<=1){
            ans[i]= arr[i];
        }
    }
    cout<<ans.size();