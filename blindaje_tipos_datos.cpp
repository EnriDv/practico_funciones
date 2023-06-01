#include <iostream>
using namespace std;
// Function prototypes Here
/**
 * @brief Esta funcion muestra el anho en que Ludwig cumplira 49 anhos.
 * @Input  - nada
 * @Output - nada
 */
void cumple();
/**
 * @brief Esta funcion muestra los sumeros superiores, inferiores y el doble de 42.
 * @Input  - nada
 * @Output - nada
 */
void numeros();
/**
 * @brief Esta funcion intercambia los valores de "x" y "y". 
 * @Input  - nada
 * @Output - nada
 */
void cambiar_orden();
/**
 * @brief Esta funcion muestra en pantalla el dibujo e un robot.
 * @Input  - nada
 * @Output - nada
 */
void robot();

int main() 
{
  // call functions here
   cout<< "--------------------" <<endl;
   cout<< "Ejercicio 1" <<endl;
   cout<< "--------------------" <<endl;
   cumple();
   cout<< "--------------------" <<endl;
   cout<< "Ejercicio 2" <<endl;
   cout<< "--------------------" <<endl;
   numeros();
   cout<< "--------------------" <<endl;
   cout<< "Ejercicio 3" <<endl;
   cout<< "--------------------" <<endl;
   cambiar_orden();
   cout<< "--------------------" <<endl;
   cout<< "Ejercicio 4" <<endl;
   cout<< "--------------------" <<endl;
   robot();
  return 0;
}

// Function definitions
void cumple()
{  
string name = "Ludwig";
int age, birth_year;
age=49;
birth_year=1770;
cout<<name<<" cumplira "<<age<<" anhos en "<<birth_year+age<<"."<<endl;
}
void numeros()
{
  int x, y, z, t;
x=42;
y=x-1;
z=x+1;
t=2*x;
cout << "El numero "<<x<<" esta entre "<<y<< " y "<<z<<"."<<endl;
cout<<"El doble de "<<x<<" es "<<t<<"."<<endl;

}
void cambiar_orden()
{
  string x = "sarten";
 string y = "sombrero";
 string z = ""; //Se crea una nueva variable
 cout<<"Antes del programa:"<<endl;
 cout<<"La variable x es: "<<x<<endl;
 cout<<"La variable y es: "<<y<<endl;
 z = x; //Se almacena el valor de x
 x = y;
 y = z; //Se utiliza el valor de x almacenado
 cout<<"Despues del programa:"<<endl;
 cout<<"La variable x es: "<<x<<endl;
 cout<<"La variable y es: "<<y<<endl;
}
void robot()
{
  cout<<"_____________"<<endl;
 cout<<"|  /\"\"\"\"\"\\  |"<<endl; // Al ingresar un \ se blindan los caracteres especiales
 cout<<"| /       \\ |"<<endl; // Se blindan los caracteres especiales
 cout<<"| | 0   0 | |"<<endl;
 cout<<"| |   v   | |"<<endl;
 cout<<"| \\  ___  / |"<<endl; // Se blindan los caracteres especiales
 cout<<"|  \\_____/  |"<<endl; // Se blindan los caracteres especiales
 cout<<"-------------"<<endl;
}
