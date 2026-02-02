// --------------PATTERN 1-----------------------------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter th number you want to print the star";
//     cin >> n;
//     int i=1;
//     int num=n;
//     while (i<=n)
//     {
//         int j=num;
//         while (j>0)
//         {
//             cout << i;
//             j=j-1;
//         }
//         cout << "\n";
//         num=num-1;
//         i=i+1;

//     }
    
// }


// --------------PATTERN 2-----------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter a number ";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while (j<=n)
//         {
//             cout << j;
//             j+=1;
//         }
//         cout << "\n";
//         i+=1;
        
//     }
// }




// --------------PATTERN 3-----------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter a number ";
//     cin >> n;
//     int i=1;
//     int num=1;
//     while(i<=n){
//         int j=1;
//         while (j<=n)
//         {
//             cout << num;
//             j+=1;
//             num+=1;
//         }
//         cout << "\n";
//         i+=1;
        
//     }
// }



// --------------PATTERN 4-----------------------------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter a number";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//             cout << "*";
//             j+=1;
//         }
//         cout << "\n";
//         i+=1;
        
//     }
// }




// // --------------PATTERN 5-----------------------------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter a number";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//             cout << i;
//             j+=1;
//         }
//         cout << "\n";
//         i+=1;
        
//     }
// }

// // --------------PATTERN 6-----------------------------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter a number";
//     cin >> n;
//     int i=1;
//     int num=1;
//     while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//             cout << num << "  ";
//             j+=1;
//             num+=1;
//         }
//         cout << "\n";
//         i+=1;
        
//     }
// }



// --------------PATTERN 7-----------------------------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter a number";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int num=i;
//         int j=1;
//         while (j<=i)
//         {
//             cout << num << "  ";
//             j+=1;
//             num+=1;
//         }
//         cout << "\n";
//         i+=1;
        
//     }
// }


// PATTERN 7 WITHOUT VARIABLE----------

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter a number";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j=0;
//         while (j<i)
//         {
//             cout << i+j << "  ";
//             j+=1;
//         }
//         cout << "\n";
//         i+=1;
        
//     }
// }


// --------------PATTERN 7-----------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter a number ";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j=0;
//         while(j<i){
//             cout << i-j;
//             j+=1;
//         }
//         cout << "\n";
//         i+=1;
//     }
// }


// --------------PATTERN 7-----------------------------
#include<iostream>
using namespace std;
int main(){
    int n;
    int i=0;
    cout << "Enter a number";
    cin >> n;
    int c[n][n];
    while(i<=n){
        int j=0;
        while(j<=i){
            if(j==0 || j==i){
                cout << " 1 ";
                c[i][j]=1;
            }
            else{
                // cout << " * ";
                int a=i-1;
                int b=j-1;
                int d=j;
                int out=c[a][b] + c[a][d];
                cout << "  " <<out << "  ";
                c[i][j]=out;
                
            }
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}