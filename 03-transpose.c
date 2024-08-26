
#include <stdio.h>

int main() {
    int arr[2][2] = {{1,2}, {3, 4}};

    printf("Original Matrix is: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Transposed Matrix is: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2;j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
