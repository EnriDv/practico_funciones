#include <iostream>
#include <string>

using namespace std;

// Function prototypes Here

/**
 * @brief muestra el dia de la semana ingresado
 * @Input  - void
 * @Output - string
 */
string week_day();
/**
 * @brief convertir de decimal a binario
 * @Input  - void
 * @Output - string
 */
string binary();

int main() {
  // call functions here
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 1 "s <<endl;
  cout<< "--------------------"s <<endl;
  string day=week_day();
  cout<<"El dia de la semana es: "<<day<<endl;
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 2 "s <<endl;
  cout<< "--------------------"s <<endl;
  string binario=binary();
  cout<<"El numero en binario es: "<<binario<<endl;
  return 0;
  
}

// Function definitions
string week_day() {
  int dia;
  cout<<"Ingresar que dia de la semana quiere ver (1-7)"<<endl;
    cin>>dia;
    switch (dia)
    {
        case 1: return "Lunes";
        break;
        case 2: return "Martes";
        break;
        case 3: return "Miercoles";
        break;
        case 4: return "Jueves";
        break;
        case 5: return "Viernes";
        break;
        case 6: return "Sabado";
        break;
        case 7: return "Domingo";
        break;
        default: return "Solo hay 7 dias en la semana";
    }
}
string binary()
{
  int d,res;
	cout<<"ingresar un numero decimal"s <<endl;
	cin>>d;
	string bin="";
	while (d>0)
	{
		res=d%2;
		bin+= to_string(res);
		d/=2;
	}
  return bin;
}
