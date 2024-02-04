// #include<stdio.h>
// int main(){
//     printf("Hello World");
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int num = 25;
//     char star = '*';
//     int age = 21;
//     float pi = 3.14;

//     int _a = 30;
//     int A = 30;
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter the age = ");
//     scanf("%d",& age);
//     printf("age = :%d", age);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a, b;
//     printf("a = ");
//     scanf("%d", &a);
//     printf("b = ");
//     scanf("%d", & b);
//     int sum = a + b;
//     printf("Sum = %d", sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("a = ");
//     scanf("%d", &a);
//     int area = a*a;
//     printf("area = %d", area);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int r;
//     float pi = 3.14;
//     printf("r = ");
//     scanf("%d",&r);
//     float area = pi*r*r;
//     printf("area = %f", area);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>

// int main(){
//     int b, c;
//     b = c = 1;
//     int a = b + c;
//     int power = b^c;
//     printf("%d", power);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     printf("%d", 16%10);
//     return 0;
// }

// #include<stdio.H>
// int main(){
//     printf("%d", -8%3);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a = 2;
//     float b = 2.0;
//     printf("%d\n", a*a);
//     printf("%f", a*b);
//     return 0;

// }
// #include<stdio.h>
// int main(){
//     int a = 1.999999;
//     printf("%d", a);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a = 4*3/6*2;
//     printf("%d",a);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 5*2-2*3;
//     int b = 5*2/2*3;
//     int c = 5*(2/2)*3;
//     int d = 5+2/2*3;
//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",c);
//     printf("%d\n",d);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("a = ");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("even");
//     }
//     else{
//         printf("odd");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter age: ");
//     scanf("%d",&age);

//     if(age > 18){
//         printf("adult\n");
//     }
//     else{
//         printf("not adult");
//     }
//     return 0;
// }
// # include<stdio.h>
// int main(){
//     int age;
//     printf("Enter age :");
//     scanf("%d",&age);
//     age >= 18 ? printf("adult \n"); : printf("not adult \n");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int day;
//     printf("Enter day(1-7):");
//     scanf("%d",&day);
    

//     switch (day) {
//         case 1 : printf("monday \n");
//                  break;
//         case 2 : printf("Tuesday \n");
//                  break;
//         case 3 : printf("wednesday \n");
//                  break;
//         case 4 : printf("Thursday \n");
//                  break;
//         case 5 : printf("Friday \n");
//                  break;
//         default : printf("not a valid day");
//         return 0;
//     }
// }
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter number :");
//     scanf("%d", &number);

//     if(number >= 0) {
//         printf("positive \n");
//         if(number%2 == 0){
//             printf("odd");
//         }
//         else{
//             printf("even");
//         }
//     }else{
//         printf("negative \n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int marks;
//     printf("enter number(0-100) = ");
//     scanf("%d",&marks);
//     if(marks >= 30 && marks <= 30){
//         printf("FAIL");
//     }
//     else if(marks >= 30 && marks <= 100){
//         printf("PASS");
//     }
//     else{
//         printf("wrong marks");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int marks;
//     printf("marks =" );
//     scanf("%d",&marks);
//     if(marks >=30 && marks< 70 ){
//         printf("B");
//     }
//     else if(marks>=70 && marks< 90){
//         printf("A");
//     }
//     else if(marks>= 90 && marks<= 100){
//         printf("A+");
//     }
//     else if(marks< 30){
//         printf("C");
//     }
//     else{
//         printf("FAIL");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x = 2;

//     if(x=4){
//         printf("x is not equal to 1\n");
//         printf("%d\n", x);
//     }
//     else{
//         printf("x is not equal to 1");
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char ch;
//     printf("Enter character: ");
//     scanf("%c", &ch);

//     if(ch >= 'A' && ch<='Z'){
//         printf("upper case");
//     }

//     else if(ch >= 'a' && ch<= 'z'){
//         printf("lower case");
//     }
//     else{
//         printf("not english");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=0; i<=5; i++){
//         printf("Hello world\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     // iterator;
//     for(int i = 0; i<=10; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=0; i<=10; i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int i=0, n;
    printf("n = ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d",i);
    }
}