#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[25][3];

void cargarLibros() {
    // Arreglo con categoria, descripcion y autor
	libros[0][0] = "Algoritmos";
    libros[0][1] = "Algoritmos y Programacion (Guia para docentes)";
    libros[0][2] = "Thomas H. Cormen";

	libros[1][0] = "Algoritmos"; 
    libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos";
    libros[1][2] = "Roberto Sedgewick";

	libros[2][0] = "Algoritmos"; 
    libros[2][1] = "Breves Notas sobre Analisis de Algoritmos";
    libros[2][2] = "Steven Skiena";

	libros[3][0] = "Algoritmos"; 
    libros[3][1] = "Fundamentos de Informatica y Programacion";
    libros[3][2] = "Steven Skiena";

	libros[4][0] = "Base de Datos"; 
    libros[4][1] = "Apuntes de Base de Datos 1";
    libros[4][2] = "Christopher Date";

	libros[5][0] = "Base de Datos"; 
    libros[5][1] = "Base de Datos (2011)";
    libros[5][2] = "Bill Gates";

	libros[6][0] = "Base de Datos"; 
    libros[6][1] = "Base de Datos Avanzadas (2013)";
    libros[6][2] = "Christopher Date";
    
	libros[7][0] = "Base de Datos"; 
    libros[7][1] = "Diseno Conceptual de Bases de Datos";
    libros[7][2] = "Bill Gates";

	libros[8][0] = "Ciencia Computacional"; 
    libros[8][1] = "Breves Notas sobre Automatas y Lenguajes";
    libros[8][2] = "Alan Turing";

	libros[9][0] = "Ciencia Computacional"; 
    libros[9][1] = "Breves Notas sobre Teoria de la Computacion";
    libros[9][2] = "Steve Jobs";

	libros[10][0] = "Metodologias de desarrollo de software"; 
    libros[10][1] = "Compendio de Ingenieria del Software";
    libros[10][2] = "Steve Jobs";

	libros[11][0] = "Metodologias de desarrollo de software"; 
    libros[11][1] = "Diseno agil con TDD";
    libros[11][2] = "Alan Turing";

	libros[12][0] = "Metodologias de desarrollo de software"; 
    libros[12][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion";
    libros[12][2] = "Bill Gates";

	libros[13][0] = "Miscelaneos"; 
    libros[13][1] = "97 cosas que todo programador deberia saber";
    libros[13][2] = "Rasmus Lerdorf";

	libros[14][0] = "Miscelaneos"; 
    libros[14][1] = "Docker";
    libros[14][2] = "Dennis Ritchie";

	libros[15][0] = "Miscelaneos"; 
    libros[15][1] = "El camino a un mejor programador";
    libros[15][2] = "Sergey Brin";

	libros[16][0] = "Miscelaneos"; 
    libros[16][1] = "Introduccion a Docker";
    libros[16][2] = "Jeff Bezos";

	libros[17][0] = "PHP"; 
    libros[17][1] = "Manual de estudio introductorio al lenguaje PHP procedural";
    libros[17][2] = "Rasmus Lerdorf";

	libros[18][0] = "PHP"; 
    libros[18][1] = "PHP y Programacion orientada a objetos";
    libros[18][2] = "Steve Wosniak";

	libros[19][0] = "PHP"; 
    libros[19][1] = "POO y MVC en PHP";
    libros[19][2] = "Sergey Brin";

	libros[20][0] = "PHP"; 
    libros[20][1] = "Symfony 2.4, el libro oficial";
    libros[20][2] = "Mark Zuckerberg";

	libros[21][0] = "Python"; 
    libros[21][1] = "Introduccion a Programando con Python";
    libros[21][2] = "Larry Page";

	libros[22][0] = "Python"; 
    libros[22][1] = "Python para ciencia e ingenieria";
    libros[22][2] = "Linus Torvalds";

	libros[23][0] = "Python"; 
    libros[23][1] = "Python para principiantes";
    libros[23][2] = "Jimmy Wales";

	libros[24][0] = "Python"; 
    libros[24][1] = "Python para todos";
    libros[24][2] = "Richard Satllman";
}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro que busca: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 25; i++)
        {
            string libro = libros[i][1];
            string autor = libros[i][2];
            string libroEnminuscula = libro;
            string autorEnminuscula = autor;

            // transformamos a minuscula los string buscar, libro y autor
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
            
            if (libroEnminuscula.find(buscar) != string::npos || autorEnminuscula.find(buscar) != string::npos) {
                cout << "Libro encontrado: " << libro << ", autor: "<< autor << endl;
                

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 24 + 1;
                int sugerencia2 = rand() % 24 + 1;
                int sugerencia3 = rand() % 24 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }
        

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    
    
    return 0;
}