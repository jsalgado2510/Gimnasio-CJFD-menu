
#include <iostream>
#include <stdlib.h>
using namespace std;
 int ingreso(int);
 int creacion(int);
 int estudiante(int);
 int personal(int);
 int persona(int);
 int admin(int);
 int registro(int);
 int usuario(int);
 int reportes(int);
 int admini(int);
int main(){
	int inicio;
   cout<<"             Bienvenido al Gimnasio CJFD           "<<endl;
   cout<<"     ¿Que desea Hacer?"<<endl;
   cout<<"     1)Ingresar"<<endl;
   cout<<"     2)Crear una Cuenta"<<endl;
   cin>>inicio;
   if(inicio==1){
   	system("cls");
   ingreso(inicio);
   }
   if(inicio==2){
   	system("cls");
   creacion(inicio);
}
return 0;
}
int ingreso(int eleccion){
   int ing;
   cout<<"             Ingresando a cuenta           "<<endl;
   cout<<"     1)Personal"<<endl;
   cout<<"     2)Usuario"<<endl;
	 cin>>ing;
	if(ing==1){
		system("cls");
		personal(ing);
	}
	if(ing==2){
		system("cls");
		registro(ing);
	}
}


int creacion(int est){
	int name;
	cout<<"             Creacion Cuenta           "<<endl;
   cout<<"     1)Estudiante            "<<endl;
   cout<<"     2)Personal                      "<<endl;
   cin>>name;
   if(name==1){
   system("cls");

   estudiante(name);
   }
   if(name==2){
    system("cls");
    persona(name);

   }

}
int estudiante(int nea){
	int a;
cout<<"             Creaci\242n Estudiante Nuevo           "<<endl;

	cout<<"	    Apellido"<<endl;
	cout<<"     Numero de identificaci\242n"<<endl;
	cout<<"     Facultad"<<endl;
	cout<<"     Correo"<<endl;
	cout<<"     salir a menu"<<endl;
  cin>>a;
  return a;
}
int persona(int aja){
	int as;
cout<<"             Creaci\242n Personal Nueva           "<<endl;

	cout<<"	    Apellido"<<endl;
	cout<<"     Numero de identificaci\242n"<<endl;
	cout<<"     Correo"<<endl;
	cout<<"     salir a menu"<<endl;
  cin>>as;
  return as;
}


int personal(int perso)
{
    int eleccion;

   cout<<"             Menu Personal           "<<endl;
   cout<<"     1)Administraci\242n            "<<endl;
   cout<<"     2)Usuario                   "<<endl;
   cout<<"     3)Reportes                  "<<endl;
   cout<<"     4)Salir                     "<<endl;
    cin>>eleccion;
    if(eleccion==1){

        system("cls");
         admin(eleccion);
    }
    if(eleccion==2){
        system("cls");
         //usuario(eleccion);
    }
    if(eleccion==3){
        system("cls");
        //reportes(eleccion);
    }
    if(eleccion==4){
        system("cls");
        cout<<"se va a cerrar";
        return 0;
    }
    return eleccion;
}

int registro(int abc)
{
int user;

   cout<<"             Menu Personal           "<<endl;
   cout<<"     1)Usuario           "<<endl;
   cout<<"     2)Salir                     "<<endl;
    cin>>user;
    if(user==1){

        system("cls");
         admini(user);
    }
    if(user==2){
       return 0;
    }
return user;
}

int admin(int adm){
   int numadm;
   cout<<"             Administraci\242n            "<<endl;
   cout<<"     1)Usuario            "<<endl;
   cout<<"     2)Rutinas                   "<<endl;
  cin>>numadm;
  if(numadm==1){

  }
 return numadm;}

 int admini(int reg){
     int qqq;
cout<<"             Usuario           "<<endl;
   cout<<"     1)Registro"<<endl;
   cout<<"     2)Rutina del dia"<<endl;
   cout<<"     3)Cargar rutina"<<endl;
   cout<<"     4)registrar ejericio"<<endl;
   cout<<"     5)cerrar sesion"<<endl;
   cin>>qqq;
 }
