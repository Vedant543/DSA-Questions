void selectionSort(vector<int>&arr) {
    // Write your code here.
    int mini;
    int temp;
    int N = arr.size();
    for(int i = 0;i<N-1;i++){
        mini =i;
        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}
