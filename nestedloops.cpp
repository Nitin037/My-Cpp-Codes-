#include<iostream>
using namespace std;


// int main(){
//     for(int i=1;i<=4;i++) 
//     {
//         for(int j=1;j<=4;j++){
//             cout<<" "<<i;
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }

// int main(){
//     int n = 4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }

// int main()
// {
//     int n = 4;
//     for(int i=1; i<=n;i++){
//         for(int j=1;j<=(n-i+1);j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }

// int main(){
//     int n = 4; 
//     for(int i = 1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<ch++;
//         }
//         cout<<endl;
//     }
//     return 0 ;
// }

// int main(){
//     int n = 3;
//     for(int i =1;i<=n;i++){
//         cout<<"*";
//         for(int j=1;j<=n-1;j++){
//             if(i == 1 || i == n){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<"*"<<endl;
//     }
//     return 0 ; 
// }

// int main(){
//     int n = 4;
//     for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0 ; 
// }

// int main(){
//     int n = 4;
//     int num = 1; 
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" "<<num++;
//         }
//         cout<<endl;
//     }
//     return 0 ; 
// }

// int main(){
//     int n =4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }


//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=n-1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
// }
// return 0 ; 
// }


// int main() {
//     int n = 4;

//     // Upper half
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     // Lower half
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// int main(){
//     int n = 5;
//     bool val = true;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" " <<val ;
//             val = !val;
//         }


//     }
//     cout<<endl;
// }

// int main(){
//     int n = 5;
//     for(int i = 1;i<=5;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n ;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0 ; 
// }

int main(){
    int n = 5; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0 ; 
}