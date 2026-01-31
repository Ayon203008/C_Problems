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

// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5; // here n = total elements of an array
//     for(int i=n-1;i>=0;i--){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

// take input as string and print them

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[100];
//     printf("Enter your name :");
//     gets(name);
//     printf("Your name is = %s", name);
//     return 0;
// }


// concatination of string

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name1[100]="Abid Hasan";
//     char name2[20]=" Ayon Bokri";
//     strcat(name1,name2);
//     puts(name1);
// } 

// comparison of srting

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name1[100]="Ayon Bokri";
//     char name2[20]="Ayon Bokri";
//     int comparison = strcmp(name1,name2);
//     if(comparison==0){
//         printf("They are same ");
//     }
//     else{
//         printf("They are not same");
//     }
    
// } 



// use of strcpy

#include <stdio.h>
#include <string.h>
int main(){
    char name1[100]="Ayon 1 Bokri";
    char name2[20]="Ayon 2 Bokri";
    strcpy(name1,name2);
    puts(name1);

    
} 




























































