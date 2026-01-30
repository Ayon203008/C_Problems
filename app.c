// printing numbers in an array
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }



// take input the an array and print them

#include <stdio.h>
int main(){
    int arr[5];
    printf("Enter your number : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}