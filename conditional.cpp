#include <iostream>
using namespace std;

// if else

// int main()
// {
//     float marks ;
//     cout<<"Enter marks : ";
//     cin>>marks;
//     if(marks>=33){
//         cout<<"pass"<<endl;
//     }else{
//         cout<<"Fail"<<endl;
//     }
//     return 0 ;
// }

// int main()
// {
//     int a ;
//     int b ;
//     cout<<"enter a ";
//     cin>>a;
//     cout<<"enter b ";
//     cin>>b;
//     if(a>b){
//         cout<<"a"<<endl;
//     }else{
//         cout<<"b"<<endl;
//     }
//     return 0 ;
// }

// int main()
// {
//     int num ;
//     cout<<"enter num : ";
//     cin>>num;
//     if(num%2 == 0){
//         cout<<"num is even"<<endl;
//     }else{
//         cout<<"num is odd "<<endl;
//     }
//     return 0 ;

// }

// else if 

// int main()
// {
//     int income ;
//     float tax;
//     cout<<"enter income(in lakh) : ";
//     cin>>income;
//     if(income < 5){
//         tax = 0;
//     }else if(income <= 10){
//         tax = 0.2*income;
//     }else {
//         tax = 0.3*income;
//     }
//     cout<<"Tax = "<<(tax*100000)<<endl;
//     return 0;


// int main()
// {
//     int a;int b;int c;
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;
//     cout<<"enter c : ";
//     cin>>c;
//     if(a>b && a>c){
//         cout<<"a is largest"<<endl;
//     }else if(b>a && b>c){
//        cout<<"b is largest"<<endl; 
//     }else {
//         cout<<"c is largest"<<endl;
//     }
//     return 0 ;
// }

// Ternary operator

// int main(){
//     bool isAdult;
//     int age ;
//     cout<<"enter age : ";
//     cin>>age;
//     isAdult = age>=18? true:false;
//      return 0 ;


// // }

// int main()
// {
//     int a = 10;
//     int b = 5; 
//     int largest = a>=b ? a:b;
//     cout<<"largest is "<<largest<<endl;
//     return 0;
// }

// Switch statement 

// int main()
// {
//     int day = 4; 
//     switch (day){
//         case 1 : cout<<"monday"<<endl;
//                  break;
//         case 2: cout<<"tuesday"<<endl;
//                 break;
//         case 3 : cout<<"wednesday"<<endl;
//                  break;
//         case 4 : cout<<"thrusday"<<endl;
//                  break;
//         case 5 : cout<<"friday"<<endl;
//                  break;
//         case 6 : cout<<"saturday"<<endl;
//                 break;
//         case 7 : cout<<"sunday"<<endl;
//                  break;
//         default: cout<<"Inbvalid Day"<<endl;

        
//     }
//     return 0 ;
// }

int main() 
{
    int a, b ;
    char op;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter operator : ";
    cin>>op;
    if(op == '+'){
        cout<<"a + b = "<<(a + b)<<endl;
    }else if (op == '-'){
         cout<<"a - b = "<<(a - b)<<endl;
    }else if (op == '*'){
         cout<<"a * b = "<<(a * b)<<endl;
    }else if (op == '/'){
         cout<<"a / b = "<<(a / b)<<endl;
    }else{
        cout<<"Invalid operator ";
    }
    return 0 ; 
    

}

