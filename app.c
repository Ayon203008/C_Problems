// printing numbers in an array

// #include <stdio.h>
// int main(){
//     int arr[5];
//     printf("Enter 5 numbers : ");
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("The numbers are : ");
//     for(int i=0;i<5;i++){
//         printf("%d",arr[i]);
//     }
// }


// find the maximum number in an array

// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int max=arr[0];
    
//     for(int i=0;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     printf("%d",max);
// }

// searchign number in an array


// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int number=5;
    
//     for(int i=0;i<5;i++){
//         if(number==arr[i]){

//             printf("%d",arr[i]);
//             break; // ! must use break
//         }
        
//     }
// }

// reverse of an array

// #include <stdio.h>

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int n = 5;

//     printf("Reversed array: ");
//     for (int i = n - 1; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// reverse of an array

#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5; // here n = total elements of an array
    for(int i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}























