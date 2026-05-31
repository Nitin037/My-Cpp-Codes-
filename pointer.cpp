#include <iostream>
using namespace std;

// int main() {
//     int a = 10;
//     int *ptr = &a;

//     cout<<ptr<<" \n";
//     cout<<*ptr<<"\n";

//     *ptr = 20; 
//     cout<<a<<"\n";

//     return 0 ;
// }

// int main(){
//     int *ptr = NULL;
//     cout<<ptr<<"\n";
//     cout<<*ptr<<"\n";
//     cout<<"bye";

//     return 0 ;
// }


// void changeA(int a){
//     a = 20;
//     cout<<a<<"\n";
// }
// int main(){
//     int a = 10 ;
//     changeA(a); 
//     cout<<a<<"\n";

//     return 0 ; 

// }

// void changeA(int *ptr){
//     *ptr = 20 ; 
//     cout<<*ptr<<"\n";
// }
// int main(){
//     int a = 10 ; 
//     changeA(&a);
//     cout<<a<<"\n";
// }\

void changeA(int  &param){
    param = 20 ; 
    cout<<param<<"\n";
}
int main(){
    int a = 10 ;
    changeA(a);
    cout<<a<<"\n";
    return 0 ; 
}