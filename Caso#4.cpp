/*
Diego Alvarez Esquivel
Sebastián Díaz Obando
Analisis de Algoritmos
Caso#4
*/


//Parametro : tamano de la matriz , largo por ancho
#include <iostream>
#include <algorithm>

using namespace std;

void PatronGrupo6( int pAncho, int pAltura){
	
	//Crear una matriz con los parametros asignados que por defecto toda la matriz sea de color blanco(metodo fill)
	const size_t anchoM = pAncho;     //-->1
	const size_t alturaM = pAltura;    //-->1
	int matrizPatron[anchoM][alturaM]; //-->2
	//El metodo fill se utiliza en el codigo para llenar la matriz entera con el valor deseado
	std:: fill(*matrizPatron, *matrizPatron + anchoM * alturaM, 255); //-->5
    int y = 0; //-->1
    /*La x del for no se toma en cuenta en el ciclo pero al estar igualada a 0 tiene un valor*/ //-->1
    
	for (int x = 0;y < pAltura;){ //-->1    For:  11 + 19(n-1)
		if (x < anchoM){ //-->1
			int num = 1 + rand() % (100); //-->4
			int colorAleatorio = 1 + rand() % 30 + 110; //-->5
			if(y%2!=0){ //-->2
				if (num>=80){ //-->2          
					matrizPatron[x][y] = colorAleatorio; //-->3
				}
			}else{
				if (num<=95){ //-->1
					matrizPatron[x][y] = colorAleatorio; //-->3
				}
				else{
					matrizPatron[x][y] = 0; //-->3
				}	
			}
					
			x++; //-->2
		}
		else{
			x = 0;
			y++;
		}    
    }
    
    y=0; //-->1
    /*La x del for no se toma en cuenta en el ciclo pero al estar igualada a 0 tiene un valor*/ //-->1
	for (int x = 0;y < pAltura;){ //-->1    For: 2 + 40(n-1)
		int degradado = 5; //-->1
		if (x < anchoM){ //-->1
			if(matrizPatron[x][y]<30){ //-->3
				try {
					matrizPatron[x+1][y] = matrizPatron[x][y]+degradado; //-->7
					matrizPatron[x-1][y] = matrizPatron[x][y]+degradado; //-->7
					matrizPatron[x][y+1] = matrizPatron[x][y]+degradado; //-->7 
					matrizPatron[x][y-1] = matrizPatron[x][y]+degradado; //-->7
					throw 1;
				}
				catch (int e) {
					x++;
				}
				degradado += 5; //-->2
				x++;	//-->2
		 }
			x++; //-->2
		}	
			
		else{
			x = 0;
			y++;
		}    
    }
    //Este doble for se utiliza para mostrar la matriz por consola por lo que no es parte del codigo
	for(int j = 0; j < pAltura;j++){
		for (int i = 0; i < pAncho;i++){
			cout<<matrizPatron[i][j]<<" ";
		}
		cout<<"\n";
	}
}
/*

Conteo final:
f(n)= 11+19(n-1)+2+40(n-1)
f(n)= 13+59(n-1)
O grande = O(n)

*/



int main(){
	cout<<"Primer ejemplo matriz de 20 por 20:"<<endl<<endl;
	int X = 20;
	int Y = 20;
	
	PatronGrupo6(X,Y);
	
	cout<<endl<<endl<<"Segundo ejemplo matriz de 35 por 40:"<<endl<<endl;
	X = 35;
	Y = 40;
	
	PatronGrupo6(X,Y);
	

    return 0;
}
