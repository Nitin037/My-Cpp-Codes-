// for loop 

#include <iostream>
using namespace std;
// int main()
// {
//     int num ;
//     for(num = 1; num <= 5; num++){
//         cout<<num<<" ";
//     }
//     cout<<"last number of num : "<<num<<endl;
//     return 0 ;
// }

// int main()
// {
//     for(int i = 1; i <= 5; i++){
//         cout<<"apna college "<<endl;
//     }
//     return 0 ;
// }

// int main(){
//     int n = 25; 
//     for(n= 1 ; n<=25; n++){
//         cout<<n<<" ";
//     }
//     cout<<endl; 
//     return 0 ;
// }

// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int sum = 0;
    
//     for(int i = 0;i<=n;i++){
//         sum = sum + i ;
//     }
//     cout<<"sum = "<<sum<<endl;
//     return 0;
// }

// while loop 

// int main(){
//     int i = 1 ; 
//     while(i <= 5){
//         cout<<i<<" ";
//         i++;
//     }
//     cout<<endl;
//     return 0;
                    
// }

// int main(){
//     for(int i = 1; i<=4; i++){
//         cout<<"****"<<endl;
//     }
//     cout<<endl;
//     return 0 ; 
// }

// int main(){
//     int n ; 
//     cout<<"enter n : ";
//     cin>>n;
//     for(int i = n; i>=1; i--){
//         cout<<i<<endl;
//     }
//     return 0 ;
// }

// int main(){
//     int n = 12345;
//     int digsum = 0;
//     while(n>0){
//         int lastdig = n%10;
//         if(lastdig % 2 != 0){
//           digsum += lastdig;  
//         }
//         n = n/10;
//     }
//     cout<<"sum is : "<<digsum<<endl;
//     return 0 ;
// }

// int main()
// {
//     int n = 10829;
//     int res = 0; 

//     while(n>0){
//         int lastdig = n%10;
//         res = res*10 + lastdig;
//         n = n/10;

//     }
//     cout<<"reverse : "<<res<<endl;
//     return 0 ;
// }

// do while 

// int main(){
//     int i = 1;
//     do{
//         cout<<i<<" ";
//         i++;

//     }while(i<=5);
//     cout<<endl;
//     return 0 ;
// }

// break statement 

// int main()
// {
//     int i = 1; 
//     while(i<=10){
//         if(i == 3){
//             break;
//         }


//         cout<<i<<endl;
//         i++;
//     }
//     cout<<"out of loop "<<endl;
//     return 0 ;
// }

// int main()
// {
//     do{
//         cout<<"enter number : ";
//         cin>>n;
//         if(n%10 == 0){

//             break;
//         }
//         cout<<" you entered "<<endl;
//     }while((1>0));
//     return 0 ; 
// }

// continue statemet

// int main(){
//     for(int i = 1; i<=10; i++){
//         if(i==7){
//             continue;
//         }
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0 ;
// }

// int main(){
//     int n ;
//     do{
//     cout<<"enter number : ";
//     cin>>n;
//     if(n%10 == 0){
//         continue ;
//     }
//     cout<<n<<endl;
//     }while(true);
// return 0 ;

// }

// int  main(){
//     int n = 9;
//     bool isprime = true;
//     for(int i = 2;i<=n-1;i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//         if(isprime == true){
//             cout<<"number is prime"<<endl;
        
//         }else{
//             cout<<"number is not prime"<<endl;
//         }
    
//     return 0 ; 
// }

// int main(){
//     int n;
//     cout<<"enter the number : ";
//     cin>>n;
//      long long fact = 1; 
//     for(int i=1;i<=n;i++){
//         fact *= i;
//     }
//     cout<<"factorial of "<<n<<":"<<fact;
//     return 0 ; 
// }

int main(){
    int n = 8;
    for(int i=1;i<=10;i++){
        cout<<" "<<(n*i)<<endl ;
    }
    // cout<<endl;
    return 0;
}