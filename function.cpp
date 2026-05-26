#include<iostream>
using namespace std;


// void sayhello(){
//     cout<<"hello\n";
// }
// int main(){
//     sayhello();
//     return 0 ; 
// }

// void sayhello();
// int main(){
//     sayhello();
//     return 0  ;
// }
// void sayhello(){
//     cout<<"hello :)\n";
// }

// int sum(int a , int b=1 ){   //default parameter 
//     int sum = a + b ; 
//     return sum ; 
// }

// int main(){
//     int s = sum(2);
//     cout<<"sum = "<<s<<endl; 
//     return 0 ; 
// }

// int prod(int a , int b ){
//     int p = a*b;
//     return a*b;
// }
// int main(){
//     cout<<prod(10,20)<<endl;
//     return 0 ;   
// }

// bool isEven(int n ){
//     if(n%2 == 0){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     cout<<isEven(20)<<endl; 
//     return 0 ; 
// }

// int factorial(int n){
//     int fact = 1; 
//     for(int i =1;i<=n;i++){
//         fact = fact*i;
//     }
//     cout<<"factorial("<<n<<" ):"<<fact<<endl;
//     return fact;
// }
// int main(){
//     factorial(5);
//     return 0 ; 
// }

// bool isprime(int n ){
//     if(n == 1){
//         return false;
//     }
//     for(int i = 2; i*i<=n;i++){
//         if(n%i == 0){
//             return false; 
//         }

//     }
//     return true;
// }
// int main(){
//     cout<<isprime(23)<<endl;
//     return 0 ;
// }

int sum(int a,int b){
    cout<<(a+b)<<endl;
    return a+b; 
}
int sum(double a ,double b){
    cout<<(a+b)<<endl;
    return a+b;
}
int main(){
    sum(2,3);
    sum(1.9,3.4);
    return 0 ;
}
