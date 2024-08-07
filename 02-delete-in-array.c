
#include <stdio.h>

int main() {
    
    int num = 5;
    int arr[5] = {12, 55, 78, 34, 10};
    int pos;
    
    printf( "Enter the index:  \n ");  
    scanf (" %d", &pos);  
      
    if (pos >= num+1){  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else{  
        for (int i = pos; i < num -1; i++){  
            arr[i] = arr[i+1];
        } 
    }
    
    for(int i =0; i<num-1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
