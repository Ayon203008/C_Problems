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

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name1[100]="Ayon 1 Bokri";
//     char name2[20]="Ayon 2 Bokri";
//     strcpy(name1,name2);
//     puts(name1);
// }

// #include <stdio.h>
// void greeting(){
//     printf("jibin manei bedone");
// }

// int main(){
//     greeting();

// }

// find factorial of a number using function

// #include <stdio.h>

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int main(){
//     printf("%d",factorial(5));
// }

// #include <stdio.h>

// void bonus(float input_bonus){
//     float total;
//     total=input_bonus+500;
//     printf("Salary after bonus %f \n",total);
// }

// int main(){
//     float salary;
//     for(int i=1;i<=5;i++){
//         printf("Enter salary %d : ",i);
//         scanf("%f",&salary);
//         bonus(salary);
//     }

//     return 0;

// }

// #include <stdio.h>

// void salaryBonus(int input){
//     int total;
//     total=input+5;
//     printf("Total salary after bonus %d",total);
// }
// int main(){
//     int salary;
//     for(int i=1;i<=5;i++){
//         printf("Enter salary %d",i);
//         scanf("%d",&salary);
//         salaryBonus(salary);
//     }
//     return 0;
// }

// for (int i=n-1;i>=0;i++){
// write the statement here for revese an array
//}

// #include <stdio.h>
// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return (n + sum(n - 1));
// }

// int main()
// {
//     printf("%d",sum(5));
// }

// fibonacci using recursion

// #include <stdio.h>

// int fiboNacci(int n){
//     if(n==1||n==2) return 1;
//     return fiboNacci(n-1)+fiboNacci(n-2);
// }

// int main(){

// }

// #include <stdio.h>
// struct student
// {
//     char name[50];
//     int roll;
//     int age;
// };
// int main(){
//     struct student student1={"Abid Hasan",32,43};
//     printf("%s",student1.name);
//     printf("%d",student1.roll);
//     printf("%d",student1.age);
// }

// #include <stdio.h>
// struct  bookInfo
// {
//     char book_title[50];
//     char author_name[50];
//     int page;
//     float price;
// };
// int main(){
//     struct bookInfo book[2];
//     for(int i=0;i<2;i++){
//         printf("Enter book name : ");
//         scanf("%s",book[i].book_title) ;
//         printf("Enter book Author name : ");
//         scanf("%s",book[i].book_title) ;
//         printf("Enter book total page : " );
//         scanf("%d",&book->page);
//     }
//        for(int i=0;i<2;i++){
//         printf("Book name %s\n",book->book_title);
//         printf("Book Author %s\n",book->author_name);
//         printf("Book page %d\n",book->page);
//     }
// }

#include <stdio.h>
#include <string.h>
struct data
{
    char student_name[100];
    int Id;
    struct
    {
        int marks;
        int age;
    }data2;
};

int main()
{
    struct data studentData;
    strcpy(studentData.student_name,"Abdi hasan Ayon");
    studentData.Id=32;
    studentData.data2.age=322432;
    studentData.data2.marks=43;
    printf("%d",studentData.data2.marks);
}
