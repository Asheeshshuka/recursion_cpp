:
    
     void subseq(vector<int> &arr,int index,int n,vector<vector<int > >&ans ,vector<int> temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    //no
    subseq( arr, index+1, n,ans ,temp);
    //yes
    temp.push_back(arr[index]);
    subseq( arr, index+1, n,ans ,temp);

     }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> >ans;//storing ke liye
     vector<int>temp;//empty
     subseq(nums,0,nums.size(),ans,temp);
    
    return ans;

        
    }
};
