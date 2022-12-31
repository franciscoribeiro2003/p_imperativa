void sort_desc(int vec[], int n){
    for (int i=1; i<n;i++){
      int val=vec[i];
      int j=i-1;
      while (j>=0 && vec[j]<val){
          vec [j+1] =vec[j];
          j--;
      }
      vec[j+1]=val; 
    }
}
