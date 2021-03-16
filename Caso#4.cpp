//Codigo base
//Funcion:
//Parametro : tamano de la matriz , largo por ancho


//Else: de manera aleatoria llenar la posiscion con un color aleatorio entre el gris y el negro
#include <iostream>
#include <algorithm>


using namespace std;

void PatronGrupo6( int pAncho, int pAltura){
	
	//Crear una matriz con los parametros asignados que por defecto toda la matriz sea de color blanco(metodo fill)
	const size_t anchoM = pAncho;
	const size_t alturaM = pAltura;
	int matrizPatron[anchoM][alturaM];
	
	//El metodo fill se utiliza en el codigo para llenar la matriz entera con el valor deseado
	std:: fill(*matrizPatron, *matrizPatron + anchoM * alturaM, 255);
	
	for(int y=0; y < alturaM; y++){
		if (y%2==0){
			for(int x=0; x < anchoM; x++){
				//Generar una opcion aleatoria
				int num = 1 + rand() % (101-1);
				if (num<=70){
					matrizPatron[x][y] = 160;
				}else{
					int colorAleatorio =  1 + rand() % (159-0);
					if((y>0)&&(y<50)){
						matrizPatron[x][y] = colorAleatorio;
						matrizPatron[x][y-1] = colorAleatorio;
						matrizPatron[x][y+1] = colorAleatorio;	
					}		
				}		
        	}
		}else{
			continue;
		}
        
    }
	cout<<"Prueba: "<<matrizPatron[32][13]<<endl;
	cout<<"Prueba2: "<<matrizPatron[32][44]<<endl;
	cout<<"Prueba3: "<<matrizPatron[32][27]<<endl;
	cout<<"Prueba4: "<<matrizPatron[32][36]<<endl;
}



int main(){
	
	int X = 50;
	int Y = 70;
	
	PatronGrupo6(X,Y);


    return 0;
}
