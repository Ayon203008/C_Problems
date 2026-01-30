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

// #include <stdio.h>
// int main(){
//     int arr[5];
//     printf("Enter your number : ");
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<5;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }



// print those values that are greater than 15

// #include <stdio.h>
// int main(){
//     int arr[5]={12,13,14,15,16};
//     for(int i=0;i<5;i++){
//         if(arr[i]>15){
//             printf("%d",arr[i]);
//         }
//     }
//     return 0;
// }




// searching numbers in an array

// summation of an array 
// #include <stdio.h>
// int main(){
//     int arr[5]={10,120,102,30,12};
//     int sum=0;
//     for(int i=0;i<5;i++){
//         sum=sum+arr[i];
//     }
//     printf("Total summation = %d",sum);
// }


// Find maximum number in an array
// #include <stdio.h>
// int main(){
//     int arr[5]={10,120,102,30,12};
//     int max=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             break;
//         }
//     }
//     printf("Maximum Number = %d",max);
// }


// searching number in an array

// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int number=4;
//     for(int i=0;i<5;i++){
//         if(number==arr[i]){
//             printf("The number is find and it is %d ",arr[i]);
//             break; // ! If you dont use break it will continue and you will not get the result
//         }
//     }
// }



// take input as chracter and print them 

#include <stdio.h>
int main(){
    char name[30];
    printf("Enter your name : ");
    gets(name);
    printf("%s",name);
    return 0;
}







































