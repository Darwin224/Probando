#include <iostream>

using namespace std;

//Prototipos*****************************************************************************************

int suma(int, int);
void mostrar(void);

int main(){
    
    int altura=0;
    
    mostrar();
    cin>>altura;
     for (int i = 1; i <= altura; i++) {
        // Imprimir espacios en blanco antes de los asteriscos
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }
        
        // Imprimir los asteriscos en cada fila
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << std::endl;
    }
   

    return 0;
}

//funciones*****************************************************************************************

//x+y=c
int suma(int p, int j){

    int result=0;

    result=p+j;

    return result;

}

void mostrar(){
    int nota=0;
    nota=suma(5,15);

    cout<<"Ingrese la nota del estudiante"<<endl;
    //cin>>nota;



    if(nota>=65 && nota<=100){ // v y v = v
        cout<<"aprobado";
    }else{
        if(nota<0 || nota>=100){//v o f = v
            cout<<"numero negativo";
        }else{
            cout<<"no aprobo";
        }
    }
}