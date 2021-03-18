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
    int y= 0; 
	for (int x = 0;y < pAltura;){
		if (x < anchoM){
			cout<<"Va por: y: "<<y<<", x: "<<x<<endl;
			int num = 1 + rand() % (101-1);
			if (num<=90){
				matrizPatron[x][y] = 160;
			}else{
				int colorAleatorio =  1 + rand() % (159-0);
				if((y>0)&&(y<50)){
					matrizPatron[x][y] = colorAleatorio;
					matrizPatron[x][y-1] = colorAleatorio;
					matrizPatron[x][y+1] = colorAleatorio;	
				}					
			}
			x++;
		}
		else{
			x = 0;
			y +=2;
		}    
    }
	
	for(int j = 0; j < pAltura;j++){
		for (int i = 0; i < pAncho;i++){
			cout<<matrizPatron[i][j]<<" ";
		}
		cout<<"\n";
	}
}



int main(){
	
	int X = 15;
	int Y = 10;
	
	PatronGrupo6(X,Y);


    return 0;
}
