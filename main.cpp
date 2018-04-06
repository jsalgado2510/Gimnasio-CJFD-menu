
#include <iostream>

#include <stdlib.h>

using namespace std;
//numero de usuarios registrados
int tamNombre = 0;
int tamApellido = 0;
int tamId = 0;
int tamCorreo = 0;
int tamtelefono = 0;
int tamEsAdmin = 0;
int tamEsActivo = 0;
int tamUsuarioLlegada = 0;
int tamUsuarioLlegadaDia =0;
//funciones para modificar o crear caracteristicas de los usuarios
bool setNombre(string nombre, int index);
bool setApellido( string apellido, int index);
bool setID(int id, int index);
bool setCorreo(string correo, int index);
bool setTelefono(int telefono, int index);
bool setEsAdmin(bool esAdmin, int index);
bool setEsActivo(bool esActivo, int index);
bool setUsuarioLlegada(int llegadas, int index);
bool setUltimoEjercicio();
//Funciones para regresar los datos de las arrays
int getIndexFromId(int id);
string getNombre(int index);
string getApellido(int index);
int getID(int index);
string getCorreo(int index);
int getTelefono(int index);
bool getEsAdmin(int index);
bool getEsActivo(int index);
int getUsuarioLlegadas(int index);
//funciones para los diferentes modulos. Estos modulos solo daran las opciones que hay dentro de cada modulo
bool administracion();
bool usuario();
bool reporte();
bool salir();
//funciones que existen dentro del modulo administracion
bool adminUsuarios();
bool adminRutinas();
//funciones que existen dentro del modulo adminUsuarios()
bool crearAdmin();
bool crearUser();
//bool modificarUser();
//bool eliminarUser();
//funciones que existen dentro del modulo adminRutinas()
bool setRutinaNombre();
bool setRutinaMusculo();
string getRutinaNombre();
string getRutinaMusculo();
//funciones que existen dentro del modulo usuario()
bool registroUsuraio();
bool ultimoEjercicio();
bool listaDeEjercicios();
//funciones que existen dentro del modulo reportes();
bool verTodosLosUsuarios();
bool verUsuariosParaEvaluacionFisica();

//constantes para los mensajes
const string ingresaID = "Por favor ingrese su id";
const string ingresaNombre = "Por favor ingrese el nombre";
const string ingresaApellido = "Por favor ingrese el apellido";
const string ingresaCorreo = "Por favor ingresa el correo";
const string ingresaTelefono = "Por favor ingresa el telefono";
const string esAdmins = "El usuario es un administrados?";
const string opciones = "Que desea hacer?";

int seleccion = 0;
string palabra = "";
//El numero de usuario de esta sesion.
int thisID = 0000000;
string nombre [50];
	string apellido [50];
	int id  [50];
	string correo  [50];
	int telefono  [50];
	bool esAdmin  [50];
	bool esActivo  [50];
	int usuarioLlegada  [50][360];
	int ultimosEjercicios  [50];
	string  ejercicioNombre [16] = {"A", "B", "C", "D", "E"};
	string  ejercicioMusculo [5]= {"hombro", "pierna", "cuádriceps", "bíceps", "tríceps"};
int main() {
	//pueden haber 50 usarios, y cada usario tiene las siguientes carracteristicas
	
	cout<< "Ingresa tu ID";
	cin>> thisID;

	return 0;


}
//Fin del Main
int getIndexFromId(int ids) {
	for(int i=0; i<tamId; i++) {
		if(ids==id[i]) {
			return i;
		}
	}
}
//funcinoes de retorno
string getNombre(int index) {
	return nombre[index];
}
string getApellido(int index) {
	return apellido[index];
}
int getID(int index) {
	return id[index];
}
string getCorreo(int index) {
	return correo[index];
}
int getTelefono(int index) {
	return telefono[index];
}
bool getEsAdmin(int index) {
	return esAdmin[index];
}
bool getEsActivo(int index) {
	return esActivo[index];
}
//funciones para modificar
bool setNombre(string nombres, int index) {
	nombre[index]= nombres;
}
bool setApellido( string apellidos, int index) {
	apellido[index]= apellidos;
}
bool setID(int ids, int index) {
	id[index]=ids;
}
bool setCorreo(string correos, int index) {
	correo[index]= correos;
}
bool setTelefono(int telefonos, int index) {
	telefono[index]=telefonos;
}
bool setEsAdmin(bool esAdmins, int index) {
	esAdmin[index]= esAdmins;
}
bool setEsActivo(bool esActivos, int index) {
	esActivo[index]= esActivos;
}
bool setUsuarioLlegada(int llegadas, int index) {
	usuarioLlegada[getIndexFromId(thisID)][tamUsuarioLlegadaDia]=llegadas;
}

//fin de los metodos individuales






//Comienza Modulo de administracion
bool administracion() {
	cout<< opciones << "\n" << "1) Administrar usuarios" << "\n" << "2) Administrar rutinas";
	cin>> seleccion;
	switch(seleccion) {
		case 1:
			adminUsuarios();
			break;
		case 2:
			adminRutinas();
			break;
		default:
			cout<< "Error!";
	}
}
//Administracion de los usuarios
bool adminUsuarios() {
	cout<< opciones << "\n" << "1) Crear un Administrador" << "\n" << "2) Crear un usuario" << "\n" << "3) Modificar un Usuario u Administrador" << "\n" << "4) Eliminar un usuario u administrador";
	cin >> seleccion;
	switch(seleccion) {
		case 1:
			crearAdmin();
			break;
		case 2:
			//crearUser();
			break;
		case 3:
		//	modificarUser();
			break;
		case 4:
		//	eliminarUser();
			break;
		default:
			cout<< "Error!";
	}
}
bool crearAdmin() {
	cout<< ingresaID ;
	cin >> seleccion;
	setID(seleccion, tamId);
	cout<< ingresaNombre;
	cin >> palabra;
	setNombre(palabra, tamNombre);
	cout << ingresaCorreo;
	cin>> palabra;
	setCorreo(palabra, tamCorreo);

	setEsAdmin(true , tamEsAdmin);
	setEsActivo(true, tamEsActivo);
	setEsActivo(true, tamEsActivo);
	setUsuarioLlegada(-1, tamUsuarioLlegada);

	return true;
}
bool crearUser() {
	cout<< ingresaID ;
	cin >> seleccion;
	setID(seleccion, tamId);
	tamId++;

	cout<< ingresaNombre;
	cin >> palabra;
	setNombre(palabra, tamNombre);
	tamNombre++;

	cout<< ingresaApellido;
	cin>> palabra;
	setApellido(palabra, tamApellido);
	tamApellido++;

	cout << ingresaCorreo;
	cin>> palabra;
	setCorreo(palabra, tamCorreo);
	tamCorreo++;

	cout<< ingresaTelefono;
	cin>> seleccion;
	setTelefono(seleccion, tamtelefono);
	tamtelefono++;

	setEsAdmin(false, tamEsAdmin);
	setEsActivo(true, tamEsActivo);
	setUsuarioLlegada(0, tamUsuarioLlegada);
	tamUsuarioLlegada++;

	return true;
}
//administracion de rutinas
bool adminRutinas() {
	cout<< "No entiendo las rutinas";
	return true;
}
//fin de modulo de administracion

//Comienza Modulo usuario
bool usuario() {
	cout << opciones << "1) Registrar su llegada" << "\n" << "2) Ver el Ejercicio en curso" << "\n" << "3) Ver Lista de ejercicios";
	switch(seleccion) {
		case 1:
			registroUsuraio();
			break;
		case 2:
			ultimoEjercicio();
			break;
		case 3:
			listaDeEjercicios();
			break;
		default:
			cout<< "Error!";
	}
}
bool registroUsuraio() {
cout<<"Prueba";
}
bool ultimoEjercicio() {
	cout<< "No entiendo las rutinas";
}
bool listaDeEjercicios() {
	cout<< "No entiendo las rutinas";
}
//fin de modulo de usuario

//comienza modulo de reporte

//Fin de modulo de reporte


