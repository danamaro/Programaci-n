#include <iostream>
using namespace std;

void triangles(int x){
for (int i=1; i<=x; i++){
for (int n=1; n<=i; n++){
cout<<"T";}
cout<<endl;
}

for (int n=x; n>=1; --n){
for (int i=1; i<=n; i++){
cout<<"T";}
cout<<endl;
}
}

int main(){
int a;
cout<<"Elige el tamaño: ";
cin>>a;
triangles(a);
return 0;
}
