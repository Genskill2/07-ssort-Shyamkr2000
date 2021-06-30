void swap_max(int arr[], int l, int n){
    int maximum=arr[n];
    for(int i=n+1;i<l;i++){
        if(maximum < arr[i]) maximum=arr[i];
    }
    for(int i=n;i<l;i++){
        if(maximum==arr[i]){
            arr[i]=arr[n];
            arr[n]=maximum;
            break;
        }
    }
}
void ssort(int arr[], int l){
    for(int i=0;i<l;i++){
      swap_max(arr,l,i);  
    }
}
