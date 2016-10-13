#include <iostream > 
#include <cmath > 
using namespace std;          
int main() { cout << "Introduce ’a’, ’b’ i ’c’ de la ecuacion ’ax^2+bx+c=0’." << endl; 
double a, b, c; cin >> a >> b >> c; 
double disc=b*b-4*a*c; double epsilon =1e -10; //epsilon: numero muy pequenno 
if (disc>epsilon) { 
//discriminante positivo 
cout << "Soluciones reales: " << (-b+sqrt(disc))/(2*a) << "," << (-b-sqrt(disc))/(2*a) << endl; 
} else if (disc<-epsilon) { 
//discriminante negativo 
cout << "Ninguna solucion real." << endl; } 
else { 
//discriminante=0 
cout << "Una solucion real (doble): " << -b/(2*a) << endl; 
} } 