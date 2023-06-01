#include <iostream>
#include <string>
using namespace std;

// Function prototypes Here

/**
 * @brief Esta funcion calcula el area de un rectangulo
 * @Input  - int
 * @Output - int
 */
int rectangle_area();
/**
* @brief Esta funcion calcula el cociente de dos numeros reales
 * @Input  - void
 * @Output - string
 */
double cociente();
/**
* @brief Esta funcion suma strings
 * @Input  - void
 * @Output - string
 */
string apellido_nombre();
/**
 * @brief Esta funcion muestra de forma ordenada tres strings en una columna
 * @Input  - void
 * @Output - void
 */
void libros ();
/**
 * @brief Esta funcion suma dos numeros
 * @Input  - void
 * @Output - double
 */
double sumar_dos();
/**
 * @brief Esta funcion muestra la primera letra de 5 strings
 * @Input  - void
 * @Output - void
 */
void first_letter();
/**
 * @brief Esta funcion suma un entero a un string
 * @Input  - void
 * @Output - string
 */
string docs();
/**
 * @brief Esta funcion verifica datos de entrada
 * @Input  - void
 * @Output - short int
 */
short int lost_cat();

int main() { 
  // call functions here
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 1 - Calculo de area de un rectangulo"s <<endl;
  cout<< "--------------------"s <<endl;
  int area=rectangle_area();
  cout<<"El area del rectangulo es: "s<<area<<endl;
  cout<< "--------------------" <<endl;
  cout<< "Ejercicio 2 - Calculo de cociente"s <<endl;
  cout<< "--------------------" <<endl;
  double coci=cociente();
  cout<<"El cociente es: "s<<coci<<endl;
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 3"s <<endl;
  cout<< "--------------------"s <<endl;
  string total=apellido_nombre();
  cout<<total<<endl;
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 4"s <<endl;
  cout<< "--------------------"s <<endl;
  libros();
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 5"s <<endl;
  cout<< "--------------------"s <<endl;
  double suma=sumar_dos();
  cout<<"La suma de dos numeros es: "<<suma<<endl;
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 6"s <<endl;
  cout<< "--------------------"s <<endl;
  first_letter();
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 7"s <<endl;
  cout<< "--------------------"s <<endl;
  string doc=docs();
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 8"s <<endl;
  cout<< "--------------------"s <<endl;
  short int gato=lost_cat();
  cout<<"Debe de entrar en la casa: "<<gato<<endl;

  return 0;
}

// Function definitions
int rectangle_area() {
  int width,height,area; // se declaran las variables 
    cout << "Enter rectangle width and height"s << endl;
    cin >> width >> height; //se pide al usuario ingresar el ancho y el alto
    area=width*height; // calcula el area de un cuadrado
    return area; //develve el acalculo del area
}
double cociente()
{
  double a,b,c;
  cout<<"Ingresar dos numeros"s<<endl;
  cin>>a>>b;
   c=a/b;
  if (b!=0)
  {
      return c;
  }
  else
  {
      cout<<"Infinito"s<<endl;
      return 0;
  }
}
string apellido_nombre()
{
 string Apellido,Nombre,total;
 cout<<"Ingresar apellido y nombre: "s;
 cin>>Apellido >> Nombre;
 total= Apellido +", "s+ Nombre;
 return total;
}
void libros()
{
  string Libro1,Libro2,Libro3;
  cout<<"Nombre 3 libros"<<endl;
  getline(cin, Libro1);
  getline(cin, Libro2);
  getline(cin, Libro3);
  cout<<Libro3 << endl << Libro2 << endl << Libro1;
}
double sumar_dos()
{
  double a,b;
  int s;
  cout<<"Ingresar dos numeros"<<endl;
  cin>>a>>b;
  s=a+b;
  return s;
}
void first_letter()
{
   string p1,p2,p3,p4,p5;
    cout<<"Ingresar 5 palabras en una linea"<<endl;
    cin>>p1>>p2>>p3>>p4>>p5;
    char ch1 = p1[0];
    char ch2 = p2[0];
    char ch3 = p3[0];
    char ch4 = p4[0];
    char ch5 = p5[0];
    cout<<"Primera letra de cada palabra: "<<endl;
    cout<<ch1<<ch2<<ch3<<ch4<<ch5<<endl;
}
string docs()
{
    int num;
    string doc;
    cout<<"Ingresar el numero de documentos encontrados: "<<endl;
    cin>>num;
    string numero=to_string(num);
    doc=numero+" documentos encontrados"s;
    return doc;
}
short int lost_cat()
{
  int piso1,piso2,piso3,piso;
  string casa1,casa2,casa3,casa;
  cout<<"Ingresar el color y numero de pisos de la casa 1:"<<endl;
  cin>>casa1>>piso1;
  cout<<"Ingresar el color y numero de pisos de la casa 2:"<<endl;
  cin>>casa2>>piso2;
  cout<<"Ingresar el color y numero de pisos de la casa 3:"<<endl;
  cin>>casa3>>piso3;
  cout<<"Ingresar el color y numero de pisos de la casa que recuerdas:"<<endl;
  cin>>casa>>piso; //Testimonio del transeunte
  int i=0;
  if(casa1==casa&&piso1==piso)
  {
   return 1;
  }else if(casa2==casa&&piso2==piso)
  {
    return 2;
  }else if(casa3==casa&&piso3==piso)
  {
    return 3;
  }else{
  if(casa1==casa||piso1==piso)
  {
      return 1;
  }if(casa2==casa||piso2==piso)
  {
      return 2;
  }
  if(casa3==casa||piso3==piso)
  {
      return 3;
  }}
}
