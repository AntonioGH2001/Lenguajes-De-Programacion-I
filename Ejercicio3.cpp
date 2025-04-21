/**********************************************
Autor: Antonio Guerrero Hernandez
Materia: Lenguajes de Programación I
Actividad 3: Cálculo del RFC 
Fecha: Lunes 21 de Abril de 2025
***********************************************/ 

#include <iostream>     //Llamada a la libreria estandar de entradas y salidas
#include <string>       //Llamada a la libreria para trabajar con objetos string 
#include <algorithm>    //Llamada a la libreria para transformar texto a mayusculas 
#include <vector>       //Llamada a la libreria para manejar listas 

using namespace std; //Expresion usada para ahorrar texto y evitar usar std::

string mayusculas(string texto) { 
    transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
    return texto; // Con toda esta funcion se convierte un texto/cadena a mayusculas
}

bool ofensivo(const string& palabra) {
    vector<string> palabraofensiva = {
        "BUEI", "BUEY", "CACA", "CACO", "CAGA", "CAGO", "CAKA", "CAKO",
        "COGE", "COGI", "COJA", "COJE", "COJI", "COJO", "COLA", "CULO",
        "FETO", "GUEY", "JOTO", "KACA", "KACO", "KAGA", "KAGO", "KOGE",
        "KOJO", "KAKA", "KULO", "MAME", "MAMO", "MEAR", "MEAS", "MEON",
        "MION", "MOCO", "MULA", "PEDA", "PEDO", "PENE", "PUTA", "PUTO",
        "QULO", "RATA", "RUIN"
    }; // Se crea una lista de palabras definidas como ofensivas 

    for (const string& ofensiva : palabraofensiva) { // Se recorre la lista y se compara con el RFC generado
        if (palabra == ofensiva) {
            return true; // Si encuentra una coincidencia se considera como ofensivo
        }
    }
    return false; // No se encontro ninguna coincidencia
}

int main() { // Se inicia la funcion principal "main"
    string nombre, apellidopaterno, apellidomaterno; // Se agregan variables tipo string 
    int anio, mes, dia; // Se agregan variables tipo int 

    cout << "Ingrese su nombre: "; getline(cin, nombre); // Se solicita el nombre al usuario 

    cout << "Ingrese su apellido paterno: "; getline(cin, apellidopaterno); //Se solicita el apellido paterno al usuario

    cout << "Ingrese su apellido materno (presione Enter si no tiene): "; getline(cin, apellidomaterno); 
    //Se solicita el apellido materno al usuario o se deja vacio

    cout << "Ingrese su año de nacimiento (YYYY): "; cin >> anio; // Se solicita año de nacimiento
    cout << "Ingrese su mes de nacimiento (MM): "; cin >> mes; // Se solicita mes de nacimiento
    cout << "Ingrese su dia de nacimiento (DD): "; cin >> dia; // Se solicita dia de nacimiento

    // Se convierten todos los textos a mayusculas
    nombre = mayusculas(nombre);
    apellidopaterno = mayusculas(apellidopaterno);
    apellidomaterno = mayusculas(apellidomaterno);

    string rfc = ""; // Se crea la variable RFC tipo string y comienza su creacion vacio

    rfc += apellidopaterno[0]; // Se agrega la primera letra del apellido paterno al RFC 

    // Se busca la primera vocal interna del apellido paterno comenzando desde el segundo caracter del apellido
    string vocales = "AEIOU";
    bool vocal = false;
    for (size_t i = 1; i < apellidopaterno.length(); i++) {
        if (vocales.find(apellidopaterno[i]) != string::npos) {
            rfc += apellidopaterno[i];
            vocal = true;
            break;
        }
    }
    if (!vocal) rfc += 'X'; // Si no hay vocal interna se coloca una X en su lugar

    if (apellidomaterno.empty()) { // Si no se agrega apellido materno se coloca una X en su lugar y se añade al RFC 
        rfc += 'X';
    } else {                       //Si se agrega el apellido materno se toma la primera letra y se agrega al RFC 
        rfc += apellidomaterno[0];
    }

    rfc += nombre[0]; // Se toma la primera letra del nombre y se añade al RFC 

    if (ofensivo(rfc)) { // Se comprueba si los primeros 4 caracteres del RFC forman una palabra ofensiva
        rfc[1] = 'X'; // Si es una palabra ofensiva se sustituye la segunda letra por X
    }

    string anio2 = to_string(anio).substr(2, 2); // Se obtienen los ultimos dos digitos del año
    string mes2 = (mes < 10 ? "0" : "") + to_string(mes); // Si el valor de mes es menor a 10 se coloca un 0 seguido de mes
    string dia2 = (dia < 10 ? "0" : "") + to_string(dia); // Si el valor de dia es menor a 10 se coloca un 0 seguido de dia

    rfc += anio2 + mes2 + dia2; // Se añaden al RFC los 6 digitos de la fecha

    cout << "Los primeros 10 caracteres del RFC son: " << rfc << endl;// Se muestra el resultado final en pantalla 

    return 0; // Se finaliza el programa 
}