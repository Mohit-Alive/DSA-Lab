#include <stdio.h>

int main() {
    int arr[5] = {56,23,6,90,34};
    int key = 90;
    
    int loc ;
    for (int i = 0; i<5; i++){
        if(arr[i]== key){
            loc = i;
            break;
        }
    }
    if(loc>0){
        printf("Key found at: %d", loc);
    }
    else{
        printf("Not found");
    }
    return 0;
}
