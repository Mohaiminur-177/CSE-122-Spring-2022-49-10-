//Codeforce Problem No - 71A
//Problem Name - Way Too Long Words

#include<iostream>
#include<string.h>
using namespace std;
int main(){

int n,i;
string a;
cin>>n;
for(int i = 0;i<n;i++){
   cin >> a;
 if(a.length()>10){
    cout << a[0] << a.length() - 2 << a[a.length()-1] <<endl;
    }
    else{
       cout << a <<endl;
    }
  }
return  0;
}
