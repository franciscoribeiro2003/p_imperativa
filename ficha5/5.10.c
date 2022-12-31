int repetidos(int vec[], int size){
    for (int i=0; i<size;i++){
      int val=vec[i];
      for (int j=i+1;j<size;j++){
        if (vec[j]==val){return 1;}
      } 
    }
    return 0;
}