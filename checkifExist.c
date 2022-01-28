#include <stdio.h>
#include <stdbool.h>

bool checkifExist(int* arr, int arrSize){
    int i = 0; 
    while (i < arrSize){
        for(int n=0; n<arrSize; n++){
            if (i == n){
                continue;
            }
            else if ((double)arr[i] == (double)arr[n]/(double)2){
                return true;
                break;
            }

        }
        i++;
    }
    return false;
}

int main(){
    int arr[] = {3, 1, 7, 11};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int value = checkifExist(arr, arrSize);
    printf("%d", value);

    return 0;
}
