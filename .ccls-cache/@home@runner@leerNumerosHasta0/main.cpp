#include <iostream>
using namespace std;
void cantNum(){
  int n,positivos=0,negativos=0,leidos=0,mayor=0,menor=0,i=0;
  float suma;
  while (n!=0){
    n=mayor;
    n=menor;
    cout<<"Ingresa un numero: ";cin>>n;
    suma=suma+n;
    if(n>mayor)mayor=n;
    if(n<menor)menor=n;
    if(n>0)positivos++;
    if(n<0)negativos++;
    i++;
    leidos=i-1;
  }
  cout<<"Numeros leidos: "<<leidos<<endl;
  cout<<"Numero mayor: "<<mayor<<endl;
  cout<<"Numero menor: "<<menor<<endl;
  cout<<"Numero de positivos: "<<positivos<<endl;
  cout<<"Numero de negativos: "<<negativos<<endl;
  cout<<"Promedio: "<<suma/leidos<<endl;



}
int main() {
  cantNum();
}