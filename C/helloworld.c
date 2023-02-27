#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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


//STRUCTURES

        // struct student{
        //     int age;
        //     float cgpa;
        //     char name[100];
        // };
        // int main(){
        // struct student s1;
        // s1.age=10;
        // s1.cgpa=1.5;
        // strcpy(s1.name,"sai");
        //  printf("%d , %f  ,%s\n",s1.age , s1.cgpa, s1.name);

        // struct student s2;
        // s2.age=11;
        // s2.cgpa=1.9;
        // strcpy(s2.name,"kiran");
        // printf("%d , %f  ,%s",s2.age , s2.cgpa, s2.name);
        // return 0;
        // }

// struct student {
//     int height;
//     int age;
//     char name[100];
// };

// void printinfo(struct student s1);
// void printinfo(struct student s1){
//     printf("%d , %d ,%s",s1.height ,s1.age,s1.name);
// }
// // int main(){
// //     struct student s1;
// //     struct student *ptr=&s1;
// //     s1.height=1;
// //     s1.age=20;
// //     printf("%d,%d",ptr->age, ptr->height);
// //     return 0;
// // }

// int main(){
//     // struct student s1={1,2};
//     // printf("%d",s1.age);

//     struct student s1;
//     s1.height=10;
//     s1.age=20;
//     strcpy(s1.name ,"sai");

//     printinfo(s1);
//     return 0;
// }

//  typedef struct asdfghjklsdfghj{
//     int age;
//     int h;
//  }a;

// //  int main(){
// //     a a;
// //     a.age=1;
// //     a.h=2;
// //     printf("%d,%d",a.age,a.h);
// //     return 0;
// // //  }

// // struct address{
// //     int hno;
// //     char city[100];
// // };
// // void padds(struct address adds);
// // void padds(struct address adds){
// //     printf("%d,%s",adds.hno,adds.city);
// // }

// // int main(){
// //     struct address adds[5];
// //     printf("enter address 1");
// //     scanf("%d",&adds[0].hno);
// //     scanf("%s",adds[0].city);
// //     printf("enter address 2");
// //     scanf("%d",&adds[1].hno);
// //     scanf("%s",adds[1].city);
// //     padds(adds[0]);
// //     padds(adds[1]);
// //     return 0;
// // }
 

// void vsum( struct vector *s1, struct vector *s2, struct vector *s3){
//     s3->x= s1->x + s2->x;
//     s3->y= s1->y + s2->y;
    
// }





// void vsum(struct vector* s1, struct vector* s2, struct vector* s3) {
//     s3->x = s1->x + s2->x;
//     s3->y = s1->y + s2->y;
// }

// int main() {
//     struct vector v1 = {1, 2};
//     struct vector v2 = {2, 1};
//     struct vector sum = {0};
//     vsum(&v1, &v2, &sum);
//     printf("%d %d", sum.x, sum.y);
//     return 0;
// }

struct vector{
    int x;
    int y;
};

// void psum(struct vector *v1, struct vector *v2,struct vector *s3){
//     s3->x = v1->x + v2->x;
//    s3->y = v1->y + v2->y;
// }
// void psum(struct vector *v1, struct vector *v2, struct vector *s3){
//     s3->x = v1->x + v2->x;
//     s3->y = v1->y + v2->y;
// }
// void psum(struct vector *v1, struct vector *v2, struct vector *s3){
//     s3->x = v1->x + v2->x;
//     s3->y = v1->y + v2->y;
// } 
// void psum(struct vector *v1, struct vector *v2, struct vector *s3) {
//     s3->x = v1->x + v2->x;
//     s3->y = v1->y + v2->y;
// }

// struct complex{
//     int img;
//     int real;
// };
// void pp(struct complex *n1){
//     printf("%d,%d", n1->img,n1->real);
// }
// int main(){
//         struct complex n1={2,3};
//         pp(&n1);
//     return 0;
// }

    // int main(){
    //     FILE *file;
    //     file= fopen("test.txt","r");

    //     char ch;
    //     //EOW end of word
    //     ch= fgetc(file);
    //     while(ch !=EOF){
    //         printf("%c",ch);
    // //         ch= fgetc(file);
    // //     }

    //     // printf("%c",fgetc(file));
    //     //  printf("%c",fgetc(file));

    //     //  fputc('S',file);
    //     //  fputc('a',file);

        
    //     // fprintf(file,"%c",'M');
    //     // fprintf(file,"%c","A");

    //     // int n;


    //     // fscanf(file,"%d",&n);
    //     // printf("%d\n",n);
    //     // fscanf(file,"%d",&n);
    //     // printf("%d\n",n);
       


        

        
    // //     fclose(file);
        
    // // }

    // // int main(){
    // //     FILE *file;
    // //     file= fopen("test.txt","r");
    // //     int n;
    // //     fscanf(file ,"%d",&n);
    // //     printf("%d",n);
    // //      fscanf(file, "%d",&n);
    // //     printf("%d",n);
    // //      fscanf(file, "%d",&n);
    // //     printf("%d",n);
    // //      fscanf(file ,"%d",&n);
    // //     printf("%d",n);
    // //      fscanf(file ,"%d",&n);
    // //     printf("%d",n);
    // //     fclose(file);
    // // }

    // int main(){
    //     FILE *f;
    //     f= fopen("sum.txt","r");
    //     int a;
    //     fscanf(f,"%d",&a);
    //     int b;
    //     fscanf(f,"%d",&b);
    //     fclose(f);
    //     f= fopen("sum.txt","w");
    //     fprintf(f,"%d",a+b);
    //     fclose(f);




    //     // int n;
    //     // scanf("%d",&n);
    //     // for(int i=0;i<=n;i++){
    //     //     if(i%2!=0){
    //     //         fprintf(f,"%d\t",i);
    //     //     }
    //     // }
    //     // int age;
    //     // char name[100];
    //     // printf("name");
    //     // scanf("%s",name);
    //     // printf("age");
    //     //  scanf("%d",&age);
    //     // fprintf(f,"%s",name);
    //     // fprintf(f,"%d",age);
    //     // fclose(f);

    // }

// int main(){
//     int *ptr;
//     // int n;
//     // scanf("%d",&n);
//     // ptr=(int *)malloc(5*sizeof(int));
//     ptr= (int *)calloc(5,sizeof(int));

//     for(int i=0;i<5;i++){
//         scanf("%d",&ptr[i]);
//     }


//     // ptr[0]=1;
//     // ptr[1]=2;
//     // ptr[2]=3;
//     // ptr[3]=4;
//     // ptr[4]=5;
//     for(int i=0;i<5;i++){
//         printf("%d\n",ptr[i]);
//     }

// }

// int main(){
//     int *ptr;
//     ptr=(int*)calloc(3,sizeof(int));
//     ptr[0]=1;
//     ptr[1]=3;
//     ptr[2]=5;
//     for(int i=0;i<3;i++){
//         printf("%d \t ",ptr[i]);
//     }
//     ptr=realloc(ptr,4);
//     ptr[0]=2;
//     ptr[1]=4;
//     ptr[2]=6;
//     ptr[3]=8;
//      for(int i=0;i<4;i++){
//         printf("%d \t ",ptr[i]);
//     }
//     free(ptr);
// return 0;
// }
