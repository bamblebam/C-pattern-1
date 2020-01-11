#include <iostream>
using namespace std;
 
int main() {
 int i,j,l,m,n;
 cin>>n;
 for(i=1;i<=n;i++){
   for(m=1;m<=i;m++){
     cout<<"*";
   }
   cout<<"\n";
 }
 for(j=1;j<=(n-1);j++){
   for(l=(n-1);j<=l;l--){
     cout<<"*";
   }
   cout<<"\n";
}
}
