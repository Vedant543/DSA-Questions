vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int,int> mpp;
    int n = v.size()

    for(int i=o;i<n;i++){
        mpp[v[i]]++;
    }

    int min=1000;
    int max=0;
    int max_val,min_val;
    for(auto it:mpp){
        if(it.second<min){
            min = it.second;
            min_val = it.first;
        }
        if(it.second>max){
            max = it.second;
            max_val = it.first;
            
        }

    }
}
