#include <iostream>
#include <string>
using namespace std;

// Function prototypes Here

/**
 * @brief Contar numeros primero menor segundo mayor
 * @Input  - void
 * @Output - void
 */
void count();
/**
 * @brief contar numeros
 * @Input  - void
 * @Output - void
 */
void count_all();
/**
 * @brief muestra los caracteres de cada palabra desde que epezo una oracion
 * @Input  - void
 * @Output - void
 */
void count_char();
/**
 * @brief calcula una cuenta/bill
 * @Input  - void
 * @Output - int
 */
int bill();
/**
 * @brief Calcula la potencia de un numero
 * @Input  - void
 * @Output - int
 */
int potencia();
/**
 * @brief calcular factorial
 * @Input  - void
 * @Output - int
 */
int factorial();

int main() {
  // call functions here
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 1 "s <<endl;
  cout<< "--------------------"s <<endl;
  count();
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 2 "s <<endl;
  cout<< "--------------------"s <<endl;
  count_all();
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 3 "s <<endl;
  cout<< "--------------------"s <<endl;
  count_char();
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 4 "s <<endl;
  cout<< "--------------------"s <<endl;
  int sum= bill();
  cout << "Total income: " << sum << endl;
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 5 "s <<endl;
  cout<< "--------------------"s <<endl;
  int pot=potencia();
  cout<<pot<<endl;
  cout<< "--------------------"s <<endl;
  cout<< "Ejercicio 6 "s <<endl;
  cout<< "--------------------"s <<endl;
  int fact=factorial();
  cout<<fact<<endl;
  return 0;
}

// Function definitions
void count() {
  int a,b;
  cout<<"Introducir dos numeros para empezar y terminar a contar respectivamente"<<endl;
    cin>>a>>b;
    if(a>b){
    for (int i=a; ((i>=0)&&(i<=b));++i)
    {
        cout<<i<<endl;
    }}else {
      cout<<"no se puede contar"<<endl;
    }
}
void count_all() {
  int a,b;
  cout<<"Introducir dos numeros para empezar y terminar a contar"<<endl;
    cin>>a>>b;
    if (a<b)
    {
    for (int i=a;i<=b;++i)
    {
        cout<<i<<endl;
    }}
    else if (a>b)
    {
    for (int i=a;i>=b;--i)
    {
        cout<<i<<endl;
    }}
}
void count_char() {
  string query;
  getline(cin, query);
  char ch;
  int caract = query.size();
  for (int i=0; i<=caract; ++i)
  {
  	ch=query [i];
  	if (ch==' ')
 	 {
	  	cout<<i<<endl;
 	 }
  }
  cout<< caract<<endl;
}
int bill() {
   int bill;
  int sum = 0;
  do {
    cout<< "Introducir la cuenta: "<<endl; 
  cin >> bill;
  // Esta construccion del if y continue nos permite ignorar casos innecesarios
  if (bill <= 0) 
  {
 
  }else{
  cout << "Income: " << bill << endl;
  sum += bill;
  }
  // la señal del final del programa será una cuenta de cero
  } while (bill != 0);
  return sum;
}
int potencia() {
   int a,b,mult,pot;
   cout<<"Introducir base y exponente: "<<endl;
    cin>>a>>b;
    if (b>0)
    {
        for (int i=0; i<=b; ++i)
        {
            mult=a*a;
            pot=mult*a;
        }
        return pot;
    }else if (b==0)
    {
        return 1;
    }else if (b<0)
    {
        for (int i=1;i<=(-b);++i)
        {
            mult=a*a;
            pot=mult*a;
        }
        cout<<"1/"<<pot;
    }
}
int factorial() {
  int a,mult;
    cin>>a;
    int fact=1;
    while (a<0)
    {
        cout<<"No estan permitido numeros negativos, intenta de nuevo"<<endl;
        cin>>a;
    }
    while (a>=14)
    {
        cout<<"El numero a calcular es demasiado grande, intenta de nuevo"<<endl;
        cin>>a;
    }
    if (a>=0)
    {
        for (int i=1; i<=a; ++i)
        {
            mult=a*i;
            fact=mult*fact;
        }
        return fact;
    }
}
