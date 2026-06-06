#include<iostream>
using namespace std;

// int main()
// {
//     cout<<"Hello "<<endl;
//     cout<<"sizeof"<<endl;
//     return 0 ; 
// }


// int main(){
//     int *ptr = NULL;
//     cout<<ptr<<"\n";
//     cout<<*ptr<<"\n";
//     cout<<"bye";

//     return 0 ;
// }

// int main(){
//     int *ptr = NULL;
//     cout<<ptr<<"\n";
//     cout<<*ptr<<"\n";
//     cout<<"bye";

//     return 0 ;
// }


// int main()
// {
//     float marks;
//     cout<<"enter your marks : ";
//     cin>>marks; 
//     if(marks>=33){
//         cout<<"pass"<<endl; 
//     }else{
//         cout<<"fail"<<endl;
//     }
//     return 0 ; 
// }

// int main(){
//     float tax;
//     int income ;  
//     cout<<"enter income : ";
//     cin>>income ;
//     if(income<5){
//         tax = 0 ; 
//     }else if(income<=10){
//         tax = income * 0.2;
//     }else{
//         tax = income * 0.3; 
//     }
//     cout<<"tax = "<<(tax*100000)<<endl ; 
//     return 0 ; 
// }

// int main(){

//     int a , b ; 
//     char op ; 
//     cout<<"enter a :  ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b; 
//     cout<<"enter operator :";
//     cin>>op;
//     switch(op){
//         case'+': cout<<"a+b = "<<(a+b)<<endl; 
//     } 
//         return 0 ; 
// }

// int main(){
//     int n ; 
//     cout<<"enter a three digit number : ";
//     cin>>n; 
//     int num = n ;
//     int dig1 = num%10;
//     num = num/10;
//     int dig2 = num%10;
//     num = num/10;
//     int dig3 =  num; 

//     int cubesum = (dig1*dig1*dig1) + (dig2*dig2*dig2) + (dig3*dig3*dig3);
//     if(cubesum == n){
//         cout<<n<<" is an armstrong number\n";
//     } else{
//         cout<<n<<" is not an armstong number \n";
//     }
//     return 0 ; 
// }


// int main(){
//     int n ; 
//     cout<<"enter the number : ";
//     cin>>n;
//     int sum = 0 ; 
//     for(int i = 0;i<=n;i++){
//         sum = sum + i ;
//     }
//     cout<<sum<<endl;
//     return 0 ;
// }

// int main(){
//     int n = 10342;
//     int digsum = 0;
//     while(n>0){
//         int lastdig = n%10;
//         digsum += lastdig;
//         n = n/10;
//     }
//     cout<<"sum = "<<digsum<<endl; 
//     return 0 ;
// }

int main(){
    int n = 12345;
    int digsum = 0; 
    while(n>0){
        int lastdig = n%10;
        if(lastdig % 2!= 0){
            digsum += lastdig;
        }
        n = n/10;
    }
    cout<<"sum = "<<digsum<<endl;
    return 0 ;
}