#include<cstdio>
 #include<iostream>
 using namespace std; 

struct Disco{
string nombre;
int cantidadCanciones;
double precio;
string fechaCompra;
};


Disco discos[100];
int cantidadDiscos = 0;
int opcion;
int ind;
void crearDisco(){if(cantidadDiscos >= 100){
cout << "No se pueden agregar mas discos " <<endl;
}else{
cout << "Ingrese el nombre del disco: " <<endl;
cin >> discos[cantidadDiscos].nombre;

cout << "Ingrese la cantidad de canciones: " <<endl;
cin >> discos[cantidadDiscos].cantidadCanciones;

cout << "Ingrese el precio del disco: " <<endl;
cin >> discos[cantidadDiscos].precio;

cout << "Ingrese la fecha de compra (dd/mm/aaaa): " <<endl;
cin >> discos[cantidadDiscos].fechaCompra;

cantidadDiscos = cantidadDiscos + 1;

cout << "\nDisco agregado correctamente.\n" <<endl;
}

}

void leerDiscos(){if(cantidadDiscos == 0){
cout << "No existen discos registrados. " <<endl;
}else{
for(int i = 0; i < cantidadDiscos; 
i += 1){
cout << "Disco: " << i + 1 <<endl;
cout << "Nombre: " << discos[i].nombre <<endl;
cout << "Cantidad de Canciones: " << discos[i].cantidadCanciones <<endl;
cout << "Precio: $" << discos[i].precio <<endl;
cout << "Fecha de Compra: " << discos[i].fechaCompra <<endl;
cout << " " <<endl;}

}

}

void actualizarDisco(){
cout << "Ingrese el numero del disco que desea actualizar: " <<endl;
cin >> ind;

ind = ind - 1;
if(ind < 0){
cout << "Disco no encontrado. " <<endl;
}else{if(ind >= 100){
cout << "Disco no encontrado. " <<endl;
}else{
cout << "Ingrese el nuevo nombre del disco: " <<endl;
cin >> discos[ind].nombre;

cout << "Ingrese la nueva cantidad de canciones: " <<endl;
cin >> discos[ind].cantidadCanciones;

cout << "Ingrese el nuevo precio del disco: " <<endl;
cin >> discos[ind].precio;

cout << "Ingrese la nueva fecha de compra (dd/mm/aaaa): " <<endl;
cin >> discos[ind].fechaCompra;

cout << "\nDisco actualizado correctamente.\n" <<endl;
}

}

}

void eliminarDisco(){
cout << "Ingrese el numero del disco que desea eliminar: " <<endl;
cin >> ind;

ind = ind - 1;
if(ind < 0){
cout << "Disco no encontrado. " <<endl;
}else{if(ind >= 100){
cout << "Disco no encontrado. " <<endl;
}else{
for(int i = ind; i < cantidadDiscos - 1; 
i += 1){discos[i] = discos[i + 1];
}

cantidadDiscos = cantidadDiscos - 1;

cout << "\nDisco eliminado correctamente.\n " <<endl;
}

}

}

void ejercicio1(){int numeros[10];
int i, j, aux, temp;

i = 0;

while(i < 10){
cout << "Introduce un numero" <<endl;
cin >> aux;
numeros[i] = aux;

i += 1;
}

i = 0;

while(i < 9){
j = 0;

while(j < 9 - i){if(numeros[j] > numeros[j + 1]){
temp = numeros[j];

aux = numeros[j + 1];
numeros[j] = aux;
numeros[j+1] = temp;

}
j = j + 1;
}

i = i + 1;
}

cout << "..Arreglo Ordenado.." <<endl;
for(int i = 0; i < 10; 
i += 1){
cout << numeros[i] <<endl;}

}

void ejercicio2(){int aux, temp, suma, maxFrecuencia, moda, modaEncontrada;
double media, mediana;
int numeros[10];
int frecuencia[10];

suma = 0;

moda = 0;

modaEncontrada = 0;

for(int i = 0; i < 10; 
i += 1){
cout << "Introduce un numero" <<endl;
cin >> aux;
numeros[i] = aux;
}

for(int i = 0; i < 10; 
i += 1){
suma += numeros[i];
}

media = suma / 10.0;

for(int i = 0; i < 9; 
i = i + 1){
for(int j = 0; j < 9 - i; 
j = j + 1){if(numeros[j] > numeros[j + 1]){
temp = numeros[j];
numeros[j] = numeros[j + 1];
numeros[j+1] = temp;

}}
}
if(10 % 2 == 0){
mediana = numeros[4];

mediana += numeros[5];

mediana /= 2.0;

}else{
mediana = numeros[5];

}

for(int i = 0; i < 10; 
i += 1){frecuencia[i] = 0;

for(int j = 0; j < 10; 
j += 1){if(numeros[i] == numeros[j]){
aux = frecuencia[i];

aux = aux + 1;
frecuencia[i] = aux;

}}
}

maxFrecuencia = 0;

for(int i = 0; i < 10; 
i += 1){if(frecuencia[i] > maxFrecuencia){
maxFrecuencia = frecuencia[i];

moda = numeros[i];

modaEncontrada = 1;

}}

cout << "La media es: " << media <<endl;
cout << "La mediana es: " << mediana <<endl;
cout << "La moda es: " << moda <<endl;
}

void ejercicio3(){
opcion = 0;

while(opcion != 5){
cout << "  ----- Menu Discos -----" <<endl;
cout << "      Selecciona una opcion.... " <<endl;
cout << "      (1) Crear nuevo disco " <<endl;
cout << "      (2) Leer información de discos " <<endl;
cout << "      (3) Actualizar información de un disco " <<endl;
cout << "      (4) Eliminar un disco " <<endl;
cout << "      (5) Salir " <<endl;
cin >> opcion;
if(opcion == 1){crearDisco();

}else if(opcion == 2){leerDiscos();

}else if(opcion == 3){actualizarDisco();

}else if(opcion == 4){eliminarDisco();

}else if(opcion == 5){
cout << "Saliendo de discos...." <<endl;
}else{
cout << "Valor invalido, vuelve a ingresar..." <<endl;
}
}

}

int main(){
int op;

op = 0;

while(op != 4){
cout << "  ---Menu Mezcal Bateria de Pruebas---" <<endl;
cout << "      Selecciona una opcion.... " <<endl;
cout << "      (1) Ejercicio 1 " <<endl;
cout << "      (2) Ejercicio 2 " <<endl;
cout << "      (3) Ejercicio 3 " <<endl;
cout << "      (4) Salir *_* " <<endl;
cin >> op;
if(op == 1){ejercicio1();

}else if(op == 2){ejercicio2();

}else if(op == 3){ejercicio3();

}else if(op == 4){
cout << "Saliendo...." <<endl;
}else{
cout << "Valor invalido, vuelve a ingresar..." <<endl;
}
}


return 0;

}
