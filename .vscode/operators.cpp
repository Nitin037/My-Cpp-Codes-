#include<iostream>
using namespace std;

// const keyword 

// int main()
// {
//     const float  PI = 3.14;
//     return 0 ;

// }

// use of macro 

// #include<iostream>
// #define ll long long 
// using namespace std;
// int main()
// {
//     ll x ;
//     ll y = 25;
//     return 0 ;

// }

// Typecasting

// int main()
// {
//     cout<<(10/3)<<endl;
//     cout<<(10/3.0)<<endl;
//     return 0;
// }

// Implict conversion

// int main()
// {
//     cout<<('A' + 1)<<endl;
//     cout<<('A' - 0)<<endl;
//     return 0 ;

// }

// Explict typecasting

// int main()
// {
//     cout<<(int)('A')<<endl;
//     cout<<((float)10/3)<<endl;
//     cout<<(char('A' + 1))<<endl;
//     return 0;
// }

// int main()
// {
//     cout<<(bool)3+2<<endl;
//     cout<<(23.5 + 2 + 'A');
//     return 0;
// }

// arithmetic operators 

// int main()
// {
//     int a = 5;
//     int b = 3;
//     cout<<"+"<<(a+b)<<endl;
//     cout<<"-"<<(a-b)<<endl;
//     cout<<"*"<<(a*b)<<endl;
//     cout<<"/"<<(a/b)<<endl;
// }

// Unary operators

// int main()
// {
//     int a = 3;
//     a++ ;
//     cout<<"a = "<<a<<endl;
//     a--;
//     cout<<"a = "<<a<<endl;
//     return 0 ;

// }

// int main()
// {
//     int a = 3;
//     int b = ++a;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
//     return 0 ;

// }

// Assingment Operators 

// int main()
// {
//     int a = 10;
//     a+=5;
//     cout<<a<<endl;
//     a-=5;
//     cout<<a<<endl;
//     a*=5;
//     cout<<a<<endl;
//     a/=5;
//     cout<<a<<endl;
//     return 0 ;
// }

// Retaional operators

// int main()
// {
//     int a = 3; 
//     int b = 5;
//     cout<<(a==b)<<endl;
//     cout<<(a!=b)<<endl;
//     return 0 ;
// }

// Logical operators 

// int main()
// {
//     cout<<((3<5)&&(4<7))<<endl;
//     cout<<((3<5)||(10 == 5))<<endl;
//     return 0 ;
// }

int main()
{
    int x=2;
    int y=5;
    int exp1=(x*y/x);
    int exp2=(x*(y/x));
    cout<<exp1<<",";
    cout<<exp2<<"\n";
    return 0 ;
}    

