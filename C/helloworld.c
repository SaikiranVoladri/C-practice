#include<stdio.h>
// int main(){
    //write a program to find area of curcle
    // int r;
    // float pi=3.14;
    // scanf("%d",&r);
    // float area = pi*r*r;
    // printf("area is %f",area);

//    //program for sum of a b
//    int a=1;
//    int b=2;
//    int sum=a+b;
//    printf("%d",sum);

// operater precedence

// printf("%d \n",3*4/4*3);
// int a=10;
// float b=a;
// printf("%f",b);
//wap to devide a number by 2

// int a=10;
// a%2==0?printf("%d",1):printf("%d",0);

//conditional stmts
// printf("enter a number\n");
// int a;
// scanf("%d ",&a);
// if(a>0){
//     printf("true");
// }

// else{
//     printf("negative");
// }
//    return 0;


//  for(int i=1;i<10;i=i+1)
//     printf("%d",i);


// return 0;
// }

//wap to print functions
// void printhello();//prototype
// void printhello(){//decleration
//     printf("helloNamaste! ");
    
// }
// int main(){
//     printf("HELLO\n");
//     printhello();//call
//     printhello();
//     printhello();
//     return 0;
// }
    // void namasteprint();
    // void helloprint();
    // void namasteprint(){
    //     printf("indian\n");
    // }
    // void helloprint(){
    //     printf("english\n");
    // }

    // int main(){
    //     char ch;
    //     printf("enter a chat i or e:");
    //     scanf("%c",&ch);
    //     if(ch=='i'){
    //         namasteprint();
    //     }else{
    //         helloprint();
    //     }
    // return 0;
    // }

    // void gst(float val);
    // void gst(float val){
    //     val=val+(0.18*val);
    //     printf("%f\n",val);
    // }
    // int main(){
    //     float val=100.0;// argument
    //     gst(val);//parameter
    //     printf("%f",val);
    // return 0;
    // }   
    // float square(float side);
    // float area(int radius);

    // float square(float side){
    //     return side*side;
    // }

    // float area(int radius){
    //     return 3.14*radius*radius;
    // }

    // int main(){

    //     int radius=1;
    //     int side=20.0;
    //    printf("%f\n", square(side));
    //     printf("%f" ,area(radius));
    //     return 0;
    // }

    // void printhw(int n);
    // int naturalsum(int n);
    // int fact(int n);
    // int fibonacci(int n);


    // int fibonacci(int n){
    //      if(n==0 || n==1){
    //        if(n==0){
    //         return 0;
    //        }
    //        else{
    //         return 1;
    //        }
    //      }
    //     //  printf("%d ",n);
    //      int fnm1= fibonacci(n-1);
    //      int fnm2= fibonacci(n-2);
    //      int totf= fnm1+fnm2;
        
    //      return totf;
    //       printf("fib of %d is %d\n",n,totf);
    // }

    // int fact(int n){
    //     if(n==1){
    //         return 1;
    //     }
    //     n = fact(n-1)*n;
    //     return n;
    // }

    // int naturalsum(int n){
    //     if(n==1){
    //         return 1;
    //     }
    //     int nm1= naturalsum(n-1);
    //     int tot= nm1+n;
    //     return tot;

    // }
    // int main(){
    //     // printhw(5);
    // //    int t= fact(5);
    // //    printf("%d",t);
    // int ns=fibonacci(5);
    // printf("%d",ns);
    //     return 0;
    // }
    // void printhw(int n){
    //     if(n==0){
    //         return;
    //     }
    //     printf("hw ");
    //     printhw(n-1);
    // }
    //  int power(int x , int n);
    // int main(){
    //     int x=2;
    //    int n=5;
    //    int s=power(x,n);
    //    printf("%d",s);
    //    int prev=0;int curr=1; int next;
    //    for(int i=0;i<=n;i++){
    //     printf("%d ",prev);
    //     next= prev+curr;
    //     prev=curr;
    //     curr=next;
    //    }
    
   
    // int power(int x , int n){
    //     if(n==1){
    //         return x;
    //     }
        
    //     if(n%2==0){
    //         return power(x,n/2)*power(x,n/2);  
    //     }else{
    //         return power(x,n/2)*power(x,n/2)*x;
    //     }

    //pointers
// int main(){
//     int age=20;
//     int *ptr= &age;
//     int newage= *ptr;
//     // printf("%d", newage);
//     printf("%d",age);
//     printf("%d",*ptr);
//     printf("%d",*(&age));
// return 0;
// }

// void swap(int x, int y);
// void _swap(int *a,int *b);
// //call by value
// void swap(int a , int b){
//     int t=a;
//      a=b;
//      b=t;
//      printf("a=%d ,b=%d\n`",a,b);

// }
// //call by reference
// void _swap(int *a,int *b){
//     int t= *a;
//     *a=*b;
//     *b= t;
//     printf("a=%d ,b=%d\n",*a,*b);

// }

// int main(){
//     int a=3;
//     int b=5;
//     // swap(a, b);
//      _swap(&a, &b);
//      printf("a=%d ,b=%d",a,b);

// }

// void dosome(int a, int b , int *sum, int *pro );
// void dosome(int a, int b , int *sum, int *pro ){
//     *sum=a+b;
//     *pro=a*b;
// }
// int main(){
//     int a=2;
//     int b=4;
//     int sum,pro;
//     dosome(a,b,&sum,&pro);
//     printf("sum=%d,pro=%d ",sum,pro);
//     return 0;
// }

