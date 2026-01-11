// #include <stdio.h>   
//    int main(){
//       printf("the integer: ");
//       return 0;
//     }


// variable - container which stores the value

// #include <stdio.h>
//   int main(){
//       int a = 5;
      
//       printf("the output this program is %d", a);
//       return 0;
//     }

// size of variable
// #include <stdio.h>
//  int main(){
//   printf("size of int: %zu bytes\n", sizeof(int));
//  }

// #include <stdio.h>
//    int main(){
//     int a;
    
//     printf("value of a is %d", a);
//     scanf("%d", &a);
//     return 0;
//    }
// escape sequence
  //  #include <stdio.h>
  //  int main(){
  //   printf("hello world \n i am ajinkya" );
  //   return 0;
  //  }

// area of rectangle(uotput)
// #include <stdio.h>

// int main(){
//   int a = 3;
//   int b = 6;
//   printf("the are of rectangle is: %d", a * b);

//   return 0;
// }

// input
// #include <stdio.h>

// int main(){
//   int length;
//   int breath;
//   printf("enter the length: %d", length);
//   scanf("%d", &length);
//   printf("enter the breath: %d", breath);
//   scanf("%d", &breath);
//   printf("area of the rectangle is: %d", length * breath);
//   return 0;
// }

// solve chap1 practice remaining questions

// calculate area of circle and modify the same program to calculate the volume of cylinder

// #include <stdio.h>

// int main(){
//   float r;
//   float p = 3.14;
//   printf("value of r: %f");
//   scanf("%f", r);
//   printf("area of the circle is: %f", r * p);
//   return 0;
// }

// chap2
// #include <stdio.h>

// int main(){
//   int i = 10;
//   int j = 1;
//   int a = 2, b = 3, c = 4, d = 5;
//   // %d is format specifier
//   // %d is for int %f is for float%c is for char
//   int j1 = a + j - f
//  
//   printf("value of i %d and value of j is %d", i, j );
//   printf("value of a %d and value of b is %d", a, b );
//   printf("value of c %d and value of d is %d", c, d );
//   return 0;
// }

// arethemetic operations
// #include <stdio.h>

// int main(){
//   int a = 6;
//   int b = 7;
//   int c = a + b;
//   printf("sum of a,b is: %d", c);
//   printf("reminder is; %d", a%b);
//   printf("product is; %d", a*b);
//   printf("result  is; %d", a/b);
//   printf("modulus is; %d", a%b);
  
//   return 0;
// }

// operator precidence
// 1st(*/%) 2nd(+-) 3rd(=)
// 
// #include <stdio.h>

// int main(){
//   int a = 4;
//   int b = 5;
//   int c = 6;
//   printf("product of equation is: %d", a*b/c+4); // operator associavity if (%/*)/(=-)
 //comes in one seuencse solve it left to right

//   return 0;
// }

// type casting
// to change variabl data type
// #include <stdio.h>

// int main(){
//   int n = 5;
//   int m = 49.8;
//   m = (int) m;
//   printf("%d", m);
//   return 0;
// }

// chap2 practice set

// q1
// #include <stdio.h>

// int main(){
//   printf("%f", 3.0/5-8);
//   return 0;
// }

// write a program to check weather the number is diviseble by 97 or not

// #include <stdio.h>

// int main(){
//   int a = 3349895;
//   printf("the reminder is; %d", a%7);
//   return 0;
// }

// evaluate the value
// #include <stdio.h>

// int main(){
//   int x = 5, y = 8, z = 90, k = 65;
//   float a = 3*x/y - z+k;
//   printf("the value of eq; %f", a);
//   return 0;
// }

// calc between flot and int calcu always gives result in float

// chap3 conditional instructions

// if-else & switch

// #include <stdio.h>

// int main(){
//   int age = 68;
//   if(age > 8){
//     printf("we are inside program\n");
//     printf("age is grater than 4");
//   }
//   // here  == is relational operator

// if(age%2==0){
//   printf("we are inside program\n");
//   printf("age is grater than 4");
// }

//   return 0;
// }

// #include <stdio.h>

// int main(){
//   int age = 68;
//   if(age > 78){
//     printf("we are inside program\n");
//     printf("age is grater than 4");
//   }
//   // here  == is relational operator

// else{
//   printf("if statment is false and it enters in else");
// }


//   return 0;
// }

// #include <stdio.h>

// int main(){
//   if(8){
//     printf("this if is exicuted\n");
//   }
//   if(56.89){
//     printf("this if is exicuted\n");
//   }
//   if(0){
//     printf("this if is not exicuted\n");
//   }
//   return 0;
// }

// relational operators 
// ==,=+,=-,!=,=*,>,<

// logical operators
// &&(and),||(or),!(not)

// #include <stdio.h>

// int main(){
//   int a = 1, b = 1;
//   printf("print a and b ; %d", a&&b);
//   printf("print a or b: %d", a||b);
//   printf("print a not a: %d", !a);
//   return 0;
// }

// #include <stdio.h>

// int main(){
//   int a = 1, b = 1;
//   if(a && b){
//     printf("print both are true\n");
//   }

//   if(a){
//     if(b){
//       printf("both are true\n");
//     }
//   }
//   return 0;
// }

// else if

// #include <stdio.h>
// int main(){
//     int age = 45;

//     if(age > 60){
//       printf("you can drive and you are ealder");
//     }
//     else if(age > 40){
//       printf("you can drive");
//     }
//     else{
//       printf("you can drive");
//     }
//   return 0;
// } 

// if else

//  condition ? expression-if-true : expression if false

// #include <stdio.h>

// int main(){
//   int a = 567;
//   int b = 786;
//   a>b?printf("a is grater"):printf("b is grater");
//   return 0;
// }

// switch

// #include <stdio.h>

// int main(){
//   int a;
//   printf("enter number: ");
//   scanf("%d", &a);

//   switch(a){
//     case 1:
//     printf("you entered 1\n");
//     break;
//     case 2:
//     printf("you entered 2\n");
//     break;
//     case 3:
//     printf("you entered 3\n");
//     break;
//     case 4:
//     printf("you entered 4\n");
//     break;
//   }
//   return 0;
// }

// wap to find the grades of students given his marks based on below

// #include <stdio.h>

// int main(){

//   char grade;
//   int marks = 99;
  
//   if(marks<=100 && marks>=90){
//     printf("grade = 'a'");
//   }
//   else if(marks<=90 && marks>=80){
//     printf("grade = 'b'");
//   }
//   else if(marks<=80 && marks>=70){
//     printf("grade = 'c'");
//   }
//   else if(marks<=70 && marks>=60){
//     printf("grade = 'd'");
//   }
//   return 0;
// }

// chap3 prac set

// q1

// #include <stdio.h>

// int main(){
//   int a = 40;
//   if(a = 50){
//     printf("a is 50");
//   }
//   else{
//     printf("a is not 50");
//   }
//   return 0;
// }

// wap to prog to determine weather a students passed or failed to pass
//  a student requires a total of40% 
// and at least 33% in each subjectassume there are three 
// subjects and take the marks as input from the user

// #include <stdio.h>

// int main(){
//   int marks1;
//   printf("enter marks1: ");
//   scanf("%d", &marks1);
//   int marks2;
//   printf("enter marks2: ");
//   scanf("%d", &marks2);
//   int marks3;
//   printf("enter marks3: ");
//   scanf("%d", &marks3);
//   printf("total marks %d, %d, %d\n", marks1, marks2, marks3);

//   if(marks1<=40 || marks2<=40 || marks3<=40){
//     printf("you are faild");
//   }
//   else if(marks1 + marks2 + marks3/3*100<33){
//     printf("you are failed");
//   }
//   else{
//     printf("you are passed");
//   }
//   return 0;
// }

// calculate the tax

// #include <stdio.h>

// int main(){
//   int incomeslab;
//   printf("enter income slab: ");
//   scanf("%d", &incomeslab);
//   if(incomeslab<=500000 && incomeslab>=250000){
//     printf("tax is 5%");
//   }
//   if(incomeslab<=1000000 && incomeslab>=500000){
//     printf("tax is 20%");
//   }
//   if(incomeslab>=1000000){
//     printf("tax is 30%");
//   }
//   else{
//     printf("no tax");
//   }
//   return 0;
// }

// wap to print the leap year

// #include <stdio.h>

// int main(){
//   int year;
//   printf("enter year:\n");
//   scanf("%d", &year);
//   if(year%4 == 0 || year%100 != 0 || year%400 == 0){
//   printf("it is leap year");
//   }
//   else{
//     printf("it is not leap year");
//   }

//   return 0;
// }

// ascii value
// check weather the character is upper case or lower case by its ascii value

// #include <stdio.h>

// int main(){
//   char ch = 'a';
//   printf("ascii value of char a is: %d\n", ch);
//   if(ch>=97 && ch<=122){
//     printf("character is lowercase\n");
//   }
//   else{
//     printf("character is not lowercase");
//   }
//   return 0;
// }

// #wap to print num which is gratest out of four numbers

// #include <stdio.h>

// int main(){
//   int num1;
//   int num2;
//   int num3;
//   int num4;
//   printf("enter num1: %d");
//   scanf("%d", &num1);
//   printf("enter num2: %d");
//   scanf("%d", &num2);
//   printf("enter num3: %d");
//   scanf("%d", &num3);
//   printf("enter num4: %d");
//   scanf("%d", &num4);

//   printf(" %d, %d, %d, %d\n", num1,num2,num3,num4);
  
//   if(num1>num2 && num1>num3 && num1>num4){
//   printf("num1 is gratest");
//   }
//   else if(num2>num1 && num2>num3 && num2>num4){
//   printf("num2 is gratest");
//   }
//   else if(num3>num1 && num3>num2 && num3>num4){
//   printf("num3 is gratest");
//   }
//   else if(num4>num2 && num4>num3 && num4>num1){
//   printf("num4 is gratest");
//   }
//   return 0;
// }

// chap4 loop control instruction

// while loop
// #include <stdio.h>

// int main(){
//   int i = 0;
//   while(i<4){
//     printf("happy birthday!\n");
    // i = i + 1; 
//   }
//   return 0;
// }

// wap to print natural num from 10 to 20 by initilizing i = 0
// #include <stdio.h>

// int main(){
//   int i = 0;
//   while(i<=20){
//     if(i>=10){
//       printf("value of i %d\n", i);
//     }
//     i++;
//   }
//   return 0;
// }

// incriment and decriment operators

// #include <stdio.h>

// int main(){
//    int i = 10;
//    int i = i + 5;
//    printf("the value of i: %d", i);//15
//   //  printf("the value of i: %d", ++i);//16
// //    printf("the value of i: %d", i++);//16
//   //  printf("the value of i: %d", i); //17
//   return 0;
// }

// do while loop print at least one time
// #include <stdio.h>

// int main(){
//   int i = 0;
//   do
//   {
//     printf("the va;ue of i is: %d\n", i);
//     ++i;
//   } while(i<8);
  
//   return 0;
// }

// wap to input first n natural num

// #include <stdio.h>

// int main(){
//   int n, i = 1;
//   scanf("%d\n", &n);
//   do
//   {
//     printf("%d\n", i);
//     i++;
//   } while (i<=n);
  
//   return 0;
// }

// for loop

// #include <stdio.h>

// int main(){
//   int n = 6;
//   for(int i =0;i<n;i++){
//     printf("the value of i is %d\n", i);

//   }

//   return 0;
// }

// wap to print first n natural num using for loop

// #include <stdio.h>

// int main(){
//   int n;
//   printf("enter num: %d\n", n);
//   scanf("%d", &n);

//   for(int i=0;i<n;i++){
//     printf("the num is %d\n", i);
  
//   }

//   return 0;
// }

// #include <stdio.h>

// int main(){
//   int n;
//   scanf("%d", &n);
//   for (int i=n; i; i--){
    
//     printf("%d\n",i);
    
//   }
//   return 0;
// }

// break statment in c it exist the loop)

// #include <stdio.h>

// int main(){
//   for (int i = 0; i < 34; i++){
//     if(i==24){
//       break;//exit the loop
//     }
//     printf("i is %d\n", i);
//   }
//   printf("for loop is done");
//   return 0;
// }

// continue terminates the itaration and continue the loop from next itaration

// #include <stdio.h>
// int main(){
//   for (int i = 0; i < 34; i++){
//     if(i==24){
//       continue; //terminates the itaration 
//     }
//     printf("i is %d\n", i);
//   }
//   printf("for loop is done");
//   return 0;
// }

// chaap4 practice set

//print multiplication table of number n

// #include <stdio.h>

// int main(){
//   int n, i;
//   scanf("%d", &n);
//   for (i = 1; i <= 10; i++){
//     printf("%d\n", n*i);
//   }
//   return 0;
// }

// wap to print multiplication table of 10 in reversed order

// #include <stdio.h>

// int main(){
//   int n = 10;
//   int i = 10;
  
//   for (i = 10; i >= 1; i--){
//     printf("%d\n", n*i);
//   }
//   return 0;
// }

// wap to sum first 10 natural numbers using while loop

// #include <stdio.h>

// int main(){
//   int i = 1;
//   int sum = 0;
//   while(i <= 10){
//     sum += i;
//     printf("%d\n", sum);
//     i++;
//   }
//   printf("sum of first 10 natural numbers: %d", sum);
//   return 0;
// }

// wap to implement prog. 5 using for and do while loop

// #include <stdio.h>

// int main(){
//   int i;
//   int sum = 0;
//   for (int i = 1; i <= 10; i++)
//   {
//     sum += i;
//     printf("%d\n", sum);
//   }

// #include <stdio.h>

// int main(){
//   int i = 1;
//   int sum = 0;
//   do{
//     sum += i;
//     printf("%d\n", sum);
//     i++;
//   }while(i <= 10);
//   printf("sum of first 10 natural numbers: %d", sum);
//   return 0;
// }

// wap to calc the sum of the numbers 
//occuring in the multiplication table of 8(8 * 1 - 8 * 10)

// #include <stdio.h>

// int main(){
//   int i = 1;
//   int n = 8;
//   int sum = 0;
//   for (int i = 1; i <= 10; i++)
//   {
//     printf("%d\n", i*n);
//     int n = i*n;
//     sum += 8*i;
    
//   }
//   printf("%d\n", sum);
//   return 0;
// }

//wap to calculate the factorial of a given number using a for loop
//given no. 8 factorial == product of given number till 8

// #include <stdio.h>

// int main(){
//   int i = 1;
  
//   int sum = 1;
//   for (int i = 1; i <= 8; i++)
//   {
//     printf("%d\n", i);
    
//     sum *= i;
    
//   }
//   printf("%d\n", sum);
//   return 0;
// }

//repeat 8 using while loop 

// #include <stdio.h>

// int main(){
//   int i = 1;
//   int sum = 1;
//   while(i <= 8){
//     sum *= i;
//     printf("%d\n", sum);
//     i++;
//   }
//   printf("sum of first 10 natural numbers: %d", sum);
//   return 0;
// }


// wap to check weather the number is prime or not using loops
//no. that can divided by 1 and itself

// #include <stdio.h>

// int main(){
//    int i = 1;
//    int n;
//    printf("enter the no: %d\n", n);
//    scanf("%d", &n);
//    while(i <= 1 ){
    
//     if (n % n == 0 && n % 1 == 0){
//       printf("entered no. is prime: \n");
//     }
//     else{
//       printf("no.is not prime\n");
      
//     }
//     i++;
//   }
//   return 0;
// }



//implement 10 using other types of loop
  
// #include <stdio.h>

// int main(){
//    int i = 1;
//    int n;
//    printf("enter the no: %d\n", n);
//    scanf("%d", &n);
//    do{
    
//     if (n % n == 0 && n % 1 == 0){
//       printf("entered no. is prime: \n");
//     }
//     else{
//       printf("no.is not prime\n");
      
//     }
//     i++;
//   }while(i <= 1 );
//   return 0;
//}

//  #include <stdio.h>

// int main(){
//    int i = 1;
//    int n;
//    printf("enter the no: %d\n", n);
//    scanf("%d", &n);
//    for(i = 1; i <= 1; i++){
    
//     if (n % n == 0 && n % 1 == 0){
//       printf("entered no. is prime: \n");
//     }
//     else{
//       printf("no.is not prime\n");
      
//     }
    
//   }
//   return 0;
// }


// project1

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int randomNumber;

//     // Seed the random number generator
//     srand(time(0));

//     // Generate random number between 1 and 100
//     randomNumber = (rand() % 100) + 1;

//     int no_of_guess = 0;
//     int guessed_no;
//     printf("%d\n", randomNumber);
    
//     do
//     {
//       printf("gusse the number ");
//       scanf("%d", &guessed_no);

//       if(guessed_no > randomNumber){
//         printf("enter the smaller no.\n");
//       }
//       else if(guessed_no < randomNumber){
//           printf("enter the bigger no.\n");
//       }
//       else{
//         printf("congiurates\n");
//       }
//       no_of_guess++;
        
//     }while (guessed_no != randomNumber);

//     printf("you gussed the right numer in no. of guesses %d\n", no_of_guess);
//     printf("%d", randomNumber);



//     return 0;
// }

//number guessing game

// chap5
// functions

// #include <stdio.h>

// // function prototype
// int sum(int, int);


// // function deffination
// int sum(int x, int y){
//   printf("the sum is %d\n", x+y);
//   return x+y;
// }
 
// int main(){
//    int a = 5;
//    int b = 8;

//    sum(a, b);

//    int a1 = 56,b1 = 56;
//    sum(a1 , b1);


//   return 0;
// }


// #include <stdio.h>
// // function prototype
// int sum(int, int);


// function deffination
// int sum(int x, int y){
//   printf("the sum is %d\n", x+y);
//   return x+y;
// }
 
// int main(){
//    int a = 5;
//    int b = 8;

//    int c = sum(a, b); // function call
//    printf("the sum is %d\n", c);

//    int a1 = 56;
//    int b1 = 56;
//    sum(a1, b1);
   

//   return 0;
// }

// write a program with three functions

// 1. good morning function which prints good morning
// 2. good afternoon function
// 3. good night function

// #include <stdio.h>

// void morning(){
//   printf("good morning\n");
// }
// void afternoon(){
//   printf("good afternoon\n");
// }
// void night(){
//   printf("good night\n");
// }

// int main(){

//   night();
//   morning();
//   afternoon();


//   return 0;
// }

// #include <stdio.h>
// int change(int c);
// int change(int c){
//   c = 45;
//   printf("value of c %d\n", c);
//   return 0;
// }

// int main(){
//   int b = 4;
//   change(b); //the value of b remains same 
//   printf("value of b %d", b); // prints b is 22
  
//   return 0;
// }

//quick quiz 

//use the library function to calculate the area of the 
//square with side a.

// #include <stdio.h>
// int calc_area(int a){
//   int area = a*a;
//   printf("area of the square is: %d", area);
//   return a*a;
// }
// int main(){
//   int b = 34;
//   calc_area(b);
//   return 0;
// }

// recursion

// #include <stdio.h>

// int factorial(int n){
//    base case
//   if (n == 1 || n == 0){ 
//   return 1; // it dont take factorial after 1 beacuse of return funct. 
// }
//   int fact = n * factorial(n-1);
//   printf("factoria of n is : %d\n", fact);
//   return fact;
// }
// int main(){
//   int b = 10;
//   factorial(b);
//   return 0;
// }

// chap 5 prac set 
// wap using function to find avg of three numbers

// #include <stdio.h>
// float calc_avg(int num1, int num2, int num3){
//   int avg = (num1 + num2 + num3)/3;
//   printf("avg. of the nubers is: %d", avg);
//   return avg;

// }
// int main(){
//   calc_avg(5, 6, 7);
//   return 0;
// }

//wap to convert celcius temp. to fahrenhite.
// #include <stdio.h>
// double  con_celcius_fahrenhite(int celc){
  
//   double  fahrenhite = (9/5)*(celc)+32;
//   printf("temp. in fahrenhite is: %lf", fahrenhite);
//   return fahrenhite;

// }
// int main(){
//   con_celcius_fahrenhite(37);

//   return 0;
// }
//waf to calculate force of attraction on a boady of
// mass m exerted by earth, consider g = 9.8m/s^2

// #include <stdio.h>
// float calc_force(int m){
//   float g = 9.8;
//   float f = m*g;

//   printf("force on mass by earh is: %f", f);
//   return f; // 
// }
// int main(){
//   calc_force(860); //8428.000 where it should be 842.8

//   return 0;
// }


//wap using recursion to calculate n th element of finonacci serise
//finonacci serise is the no. of serise where each number is 
//the sum of previous number.
//0,1,1,2,3,5,8,3,21...n

// #include <stdio.h>
// int finonacci(int n){
//   if(n == 1 || n == 2){
//     return (n-1);
//   }
//   return finonacci(n-1) + finonacci(n-2);
// }
// int main(){
//   int n =4;

//   printf("the value of finonacci series at %d is %d", n,finonacci(n));

//   return 0;
// }

//
// #include <stdio.h>

// int main(){
//   int a = 4;
//   printf("%d,%d,%d \n", a, ++a, a++);
//   return 0;
// } 

//create recursive funct to calcu. sum of first n natural numbers

// #include <stdio.h>
// int sum_natural(int n){
//   if(n==1){
//     return 1;
//   }
//   return sum_natural(n-1) + n;
// }
// int main(){
//   printf("sum of first 5 natural number is: %d ", sum_natural(5));
//   return 0;
// } 

// wap using function to print the following pattern

// #include <stdio.h>

// int main(){
//   int n = 3;
//   for (int i = 0; i < n; i++)
//   {
        ////this loop rins from 0 to 2
        ////if i = 0 ----> 1 "*"
        ////if i = 1 ----> 3 "*"
        ////if i = 2 ----> 5 "*"
        ////no_of_stars = (2*i+1)
//     for(int j = 0; j<2*i+1;j++){
//       printf("*");
//     }
        ////this printf will print the new line
//     printf("\n");
//   }
//   return 0;
// }

// chap6

// pointer

// #include <stdio.h>
// //int pointer,float pointer,char pointer.
// int main(){
//   int i = 72;
//   int* j = &i;

//   float c = 8.98;
//   float* d = &c;
//   printf("value at adress of &c is: %f\n,", *(&c));
//   printf("adress of 72 is: %p\n", &i);
//   printf("adress of 72 is: %p\n", j);
//   printf("value at adress of &j is: %d\n", *(&i));
//   printf("value at adress of &j is: %d\n", *(j));


//   return 0;
// } 

// pointer-pointer

// #include <stdio.h>
// //int pointer,float pointer,char pointer.
// int main(){
//   int i = 72;
//   int* j = &i;
//   int** k = &j;
  
//   printf("adress of 72 is: %p\n", &i);
//   printf("adress of 72 is: %p\n", j);
//   printf("value at adress of &j is: %d\n", *(&i));
//   printf("value at adress of &j is: %d\n", *(j));
//   printf("value at adress of &j is: %d\n", **(&j));
//   printf("value at adress of &k is: %d\n", *(k));
//   printf("value at adress of &k is: %d\n", *(&j));

// }
// call by referance

// #include <stdio.h>
// int sum(int* a, int* b){
//         a = 6;
//         return *a + *b;
// }
// int main(){

//         int x = 1, y = 6;
//         printf("the sum of 1 and 6 is %d\n", sum(&x, &y));
//         printf("the value of x is %d", x);
//         return 0;
// }

//swap 

// #include <stdio.h>

// void swap(int* a, int* b);

// void swap(int* a, int* b){
//         int temp;
//         temp = *a;
//         *a = *b;
//         *b = temp;
// }
// int main(){
//         int a = 4, b = 6;
//         swap(&a, &b);
//         printf("the value of a is %d and the value of b id %d\n", a, b);

//         return 0;
// }

// chap 6 prac set

// write a program to print the adress of a variable. use this
// adress to get the value of the variable

// #include <stdio.h>

// int main(){
//         int i = 87;
//         int* j = &i;
//         printf("value of i is : %d\n", *j);
//         printf("adress of  i is : %p\n", j);
//         printf("adress of  i is : %u\n", j);

//         return 0;
// }

// wap having variable i print the adress of i pass this
// variable to function and print its adress. are this adress same why?

// #include <stdio.h>
// int print_adress(int* a){
//         printf("adress of the a is: %p\n",  a);
//         return 0;
// }
// int main(){
//         int i = 90;
//         printf("adress of i is: %p\n", &i);
//         print_adress(&i);

//         return 0;
// }



//wap to change the value of a variable to ten times of its current value

// #include <stdio.h>
// int change_value(int* a){ // a is the adress of the value 
//         *a = *a * 10; // *a id the value at adress a
//         printf("changed value of the variable is: %d\n", *a);
                
//         return 0;
// }


// int main(){
//         int i = 10;
//         change_value(&i);
//         printf("changed value of the variable is: %d", i);


//         return 0;
// }

// waf and pass the value by reference
// a method in which the value is directly passed to the function function recives direct access of the value in the memory rather than the copy

// #include <stdio.h>
// int change_value(int* a){ // a is the adress of the value 
//         *a = *a * 10; // *a id the value at adress a
//         printf("changed value of the variable is: %d\n", *a);
                
//         return 0;
// }


// int main(){
//         int i = 10;
//         change_value(&i);
//         printf("changed value of the variable is: %d", i);


//         return 0;
// }


// wap using a function which calcu. the sum and avg of two numbers. 
//use pointers and print the values sum and avg in main().

// #include <stdio.h>
// int* calc_sum(int a, int b){
//         int sum = a + b;
//         int* ptr = &sum;
//         printf("sum of two no is: %d\n", sum);
//         return ptr;
// }

// float* calc_avg(int a, int b){
//         float avg = (a + b)/2.00;
//         float* ptr2 = &avg;
//         printf("avg of two no is: %f\n", avg);
//         return ptr2;
// }
// int main(){
//         int d = 56, c = 54;
//         calc_sum(d,c);
//         calc_avg(d,c);
//         int* ptr;
//         float* ptr2;

//         ptr = calc_sum(d,c);
//         ptr2 = calc_avg(d,c);

//         printf("adress of sum is: %u and address of avg is %u ",ptr,ptr2 );
//         return 0;

//}       

// WAP TO PRINT the value of a variable i by using pointer to pointer type of variable

// #include <stdio.h>

// int main(){
//         int i = 56;
//         int* ptr = &i;
//         int** ptr2 = &ptr;

//         printf("value of i is : %d\n", *ptr);
//         printf("value of i is : %d\n", **ptr2);
        

//         return 0;
// }

// try problem three using call by value and verify that it does not change the value of the said veriable
// not passing adress just pass the value

// #include <stdio.h>
// int change_value(int a){ // a is the adress of the value 
//         a = a * 10; // *a id the value at adress a
//         printf("changed value of the variable is: %d\n", a);
                
//         return 0;
// }


// int main(){
//         int i = 10;
//         change_value(i);
//         printf("changed value of the variable is: %d", i);


//         return 0;
// }


// chap 7 (arrays)(data type)

// #include <stdio.h>

// int main(){
//         int marks [90]; // printing marks of 90 students create 90 arrays // reserve space to store 90 int;
//         marks[0] = 98;
//         marks[54] = 67;
//              // we can go all the way till 89.
//         printf("marks of 0 is %d and marks of 54 is %d", marks[0], marks[54] );
//         return 0;
// }

// taking input of the marks using array

// #include <stdio.h>

// int main(){
//         int marks[4];
        
//         for(int i = 0 ; i < 4 ; i++){
//                 scanf("enter marks %d", &marks[i]);
//         }
//         return 0;
// }

// #include <stdio.h>

// int main(){
//         int cgpa[3] = {1, 2, 3};
//         for(int i = 0; i < 3; i++){
//                 printf("cgpa is %d\n", cgpa[i]);
//         }

//         return 0;
// }

//arrays in memory 

//arethematic operartion of pointers using int

// #include <stdio.h>

// int main(){
//         int a = 87;
//         int* ptr = &a;
//         printf("adress of a is: %u\n", &a);
//         printf("adress of a is: %u\n", ptr);
//         ptr++; // increased by bites data type is using
//         printf("adress of a is: %u\n", ptr); 
//         return 0;
// }       

//arethematic operartion of pointers using character

// #include <stdio.h>

// int main(){
//         char a = 'a';
//         char* ptr = &a;
//         printf("adress of a is: %u\n", &a);
//         printf("adress of a is: %u\n", ptr);
//         ptr++; // increased by bites data type is using
//         printf("adress of a is: %u\n", ptr); 
//         return 0;
// }       

// try these operations 
//addit of two num
//sub of a num from a pointer
//sub from one pointer to another
//comparision of two pointer variables

//accessing array in memory

// #include <stdio.h>

// int main(){
//         int marks[5];
//         printf("enter marks of 5 students \n" );

//         for (int i = 0; i< 5; i++){
//                 scanf("%d\n", &marks[i]);
//         }

//         for (int i = 0; i < 5; i++){
//                 printf("adress of element : %u\n", &marks[i]);
//         }

//         return 0;
// }

// printing values of array using pointers
// #include <stdio.h>

// int main(){
//         int marks[] = {23,45,65,67};
//         int* ptr = &marks[0];
//         for(int i = 0; i < 4; i++){
//                 //printf("value in array %d\n", marks[i]);
//                 printf("value in array %d\n", *ptr);
//                 ptr++;


//         }
//         return 0;
// }

//multidimentional array

// #include <stdio.h>

// int main(){
//         int array[3][2];

//         for(int i = 0; i < 3; i++){
//                 for( int j = 0; j < 2; j++){
//                         printf("%d ", array[i][j]);

//                 }
//                 printf("\n");

//         }
        
                            
//         return 0;
// }

//chap 7 prac set
//create an array of 10 numbers. verify using pointer arethematic that (ptr+2) points 
//to the third element wheather ptr is the pointer pointing to first element of the array

// #include <stdio.h>

// int main(){
//         int array[10] = {1,2,3,4,5,6,7,8,9,10};
//         int* ptr = &array[0];
//         printf("value at the adress is: %d\n", *ptr);
//         printf("value at the adress is: %d", *ptr+2);
//         return 0;
// }

//Write a program to create an array of 10 integers and store multiplication table of
//5 in it.

// #include <stdio.h>

// int main(){
//         int array[10];
        
//         for(int i = 1; i <= 10; i++){
//         array[i] = i * 5;
//         printf("%d\n", array[i]);
//         }

//         return 0;
// }


//Repeat problem 3 for a general input provided by the user using scanf

// #include <stdio.h>

// int main(){
        
//         int n;
        
//         scanf("%d\n", n);

//         int array[10];

//         for(int i = 1; i <= 10; i++){
//         array[i] = i * n;
//         printf("%d\n", array[i]);
//         }
        
//         return 0;
// }

//Write a program containing a function which reverses the array passed to it.

// #include <stdio.h>

// void print_array(int array[], int n){
//         for(int i = 0; i < n; i++){
//                 printf("%d\n", array[i]);
                
//         }

// }

// void reverse(int array[], int n)
//         {
//          int i, temp;       
//                 for(int i = 0; i < n/2; i++){
//                 temp = array[i];
//                 array[i] = array[n - i - 1];
//                 array[n - i - 1] = temp;
//                 }
                
// }
// int main(){
//         int arr[] = {1,2,3,4,5,6};
//         print_array(arr,6);

//         reverse(arr, 6);
        
//         print_array(arr,6);

//         return 0;
// }


//Write a program containing functions which counts the number of positive
//integers in an array.

// #include <stdio.h>

// void print_possitive(int array[], int n){
//         for(int i = 0; i < n; i++){
//                 if(array[i] > 0 ){
//                         printf("%d\n", array[i]);
//                 }
                
//         }
        
// }

// void count_possitive(int array[], int n){

//         int no_of_possitive = 0;

//         for(int i = 0; i < n; i++){
//                 if(array[i] > 0 ){
//                  no_of_possitive++;
//                 }
                
//         }
//         return no_of_possitive;
// }

// int main(){
//         int arr[] = {-2,-4,+5,+4,+8,-9,-34,+87};
//         print_possitive(arr, 8);
//         count_possitive(arr, 8);
//

//         return 0;
// }       

// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively.

// #include <stdio.h>

// int main(){
//         int arr[3][10];
//         int mul[] = {3, 7, 9};
//         for(int i = 0; i < 3; i++){
//                 for(int j = 0; j < 10; j++){
//                         arr[i][j] =  mul[i] *  (j + 1);
//                         printf("%d ", arr[i][j]);
//                 }
//                 printf("\n");

//         }
//         return 0;
// }


// Repeat problem 7 for a custom input given by the user.

// #include <stdio.h>

// int main(){
//         int arr[3][10];
//         int mul[] = {3, 7, 9};
//         for(int i = 0; i < 3; i++){
//                 for(int j = 0; j < 10; j++){
//                         arr[i][j] =  mul[i] *  (j + 1);
//                         printf("%d ", arr[i][j]);
//                 }
//                 printf("\n");

//         }
//         return 0;
// }

// #include <stdio.h>

// int main(){
//         int n1,n2,n3;
//         printf("enter the numbers %");
//         scanf("%d %d %d", n1,  n2,  n3);

//         int arr[3][10];
//         int mul[] = {n1, n2, n3};
//         for(int i = 0; i < 3; i++){
//                 for(int j = 0; j < 10; j++){
//                         arr[i][j] =  mul[i] *  (j + 1);
//                         printf("%d ", arr[i][j]);
//                 }
//                 printf("\n");

//         }
//         return 0;
// }

//3-d array

// Create a three–dimensional array and print the address of its elements in
// increasing order.

// #include <stdio.h>

// int main(){
//         int arry[2][3][4];

//         for(int i = 0; i > 2; i++){
//                 for(int j = 0; j < 3; j++){
//                         for(int k = 0; k < 4; k++){
//                                 printf("%u ", &arry[i][j][k]);
//                         }
//                 }
                

//         }

//         return 0;
// }