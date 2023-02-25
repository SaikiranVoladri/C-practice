#include<stdio.h>
#include<string.h>
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
//arrays

// int main(){
//     // int marks[3];
//     // scanf("%d",&marks[0]);
//     // scanf("%d",&marks[1]);

//     // printf("%d",marks[0]);
//     //  printf("%d",marks[1]);

//     int a=22;
//     int *ptr=&a;
   
    // printf("%u\n",ptr);
    //  ptr++;
    //  printf("%u",ptr);

//      float b=12.0;
//      float *ptr2= &b;
//     //  printf("%u\n",ptr2);
//     //  ptr2++;
//     //    printf("%u\n",ptr2);
//     char c='m';
//     char *p=&c;
//     printf("%u\n",p);
//     p++;
//     printf("%u",p);


//     return 0;
// }
// int count(int arr[], int n);
// int count(int arr[], int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2!=0){
//             count++;
//         }
//     }
//     return count;
// }
// void reverse(int arr[], int n);
// void reverse(int arr[], int n){
//     for(int i=n-1;i>=0;i--){
//     //   int s=arr[i];
//     //   int end= arr[n-i-1];
//     //   arr[i]=end;
//     //   arr[n-i-1]=s;
//     printf("%d ",arr[i]);
//     }
// }
// void prints(int arr[], int n);
// void prints(int arr[], int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }




// int main(){
    // int arr[]={1,2,3,4,5,6,7,8,9};
    // int n=9;
    // reverse(arr,n);
    // prints(arr,n);
    
//    for(int i=0;i<n;i++){
//     arr[i]=arr[i]+1;
//    }

//    for(int i=0;i<n;i++){
//     printf("%d\t", arr[i]);
//    }
// int n=10;
//     int fib[n];
    
//     fib[0]=0;
//     fib[1]=1;
//     for(int i=2;i<n;i++){
//         fib[i]=fib[i-1]+fib[i-2];

//         printf("%d\t",fib[i]);
//     }
//     return 0;
   

// // }
// int counts(char str[]);
// int main(){
//     // char name[]="sai";
//     // for(char ch=0; name[ch] !='\0';ch++){
//     //     printf("%c",name[ch]);
//     // }

//     // char name[50];
//     // fgets(name, 50,stdin);
//     // // scanf("%s",name);
//     // // printf("your name is %s ",name);
//     // puts(name);
//     // return 0;

//     char str[100];
//     fgets(str,100,stdin);
//     printf("%d",counts(str));



// }
// int counts(char str[]){
//     int count=-1;
//     for(int i=0; str[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

// int main(){
// char s[]="sai";
// char s2[]="kir";
// // // int c= strlen(s);
// // // printf("%s,%s",s,s2);
// // printf("%d",strcmp(s2,s));
// // // printf("%s,%s",s,s2);
// // char s1[]="sai";

// //     char s2[]="kir";
// //     printf("%s",strcat(s1,s2));
// // }
// void salting(char pswd[]);
// void salting(char pswd[]){
//     char salt[]="123";
//     char newpswd[200];
//     strcpy(newpswd,pswd);
//     strcat(newpswd,salt);
//     puts(newpswd);
// }

// void slice(char pswd[], int n, int m);
// void slice(char pswd[], int n, int m){
//  char newstr[100];
//  int j=0;
//  for(int i=n;i<=m;i++,j++){
//     newstr[j]=pswd[i];
//  }
//     newstr[j]='\0';
//     puts(newstr);
// }
// int vcount(char str[]);
// int vcount(char str[]){
//     int c=0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u'){
//             c++;
//         }
//     }
//     return c;
// }
// void ispresent(char str[], char ch);
// void ispresent(char str[] , char ch){
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]==ch){
//             printf("present");
//             return;
//         }
//     }
//     printf("no");
//   }

// int main(){
// char str[100];
   
//     scanf("%s",str);
//   ispresent(str,'a');
//     return 0;
// }
