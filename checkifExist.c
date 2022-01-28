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

// An alternative
//bool checkPair(int i, int j){
//    if(i == 2*j || j == 2*i)
//        return true;
//   else
//        return false;
//}
//
//bool checkIfExist(int* arr, int arrSize){
//    for(int i = 0; i < arrSize-1; ++i){
//        for(int j = i+1; j < arrSize; ++j){
//            if(checkPair(arr[i], arr[j])) 
//                return true;
//        }
//    }
//    return false;
//}
