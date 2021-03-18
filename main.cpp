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
			int num = 1 + rand() % (100);
			int colorAleatorio = 1 + rand() % 30 + 110;
			if(y%2!=0){
				if (num>=80){
					matrizPatron[x][y] = colorAleatorio;
				}
			}else{
				if (num<=95){
					matrizPatron[x][y] = colorAleatorio;
				}
				else{
					matrizPatron[x][y] = 0;
				}	
			}
					
			x++;
		}
		else{
			x = 0;
			y++;
		}    
    }
    
    y=0; 
	for (int x = 0;y < pAltura;){
		int color = 5;
		cout<<"x: "<<x<<" y: "<<y<<endl;
		if (x < anchoM){
			if(matrizPatron[x][y]<30){
				try {
					matrizPatron[x+1][y] = matrizPatron[x][y]+color;
					matrizPatron[x-1][y] = matrizPatron[x][y]+color;
					matrizPatron[x][y+1] = matrizPatron[x][y]+color;
					matrizPatron[x][y-1] = matrizPatron[x][y]+color;
					throw 1;
				}
				catch (int e) {
					x++;
				}
				color += 5;
				x++;	
			}
			x++;
		}	
			
		else{
			x = 0;
			y++;
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
	int Y = 15;
	
	PatronGrupo6(X,Y);


    return 0;
}
