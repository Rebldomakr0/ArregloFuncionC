#include <stdio.h>

void busqueda(int *);
void modificacion(int *, int);
void listado(int *);

int main(){
	int elem[5], mod1;
	int i, opc, numb, band=0, pos;
	for(i=0; i<5; i++){
		printf("Ingrese el valor %d para el arreglo: ", i+1);
		scanf("%d", &elem[i]);
	}
	do{
		printf("\nMENU\n");
		printf("1. Busqueda\n");
		printf("2. Modificacion\n");
		printf("3. Listado\n");
		printf("4. Fin\n");
		printf("\nSeleccione la opcion a realizar\n");
		scanf("%d", &opc);
		
	switch(opc){
		case 1:
			busqueda (elem);
			break;
			
		case 2:
			modificacion (elem, pos);
			break;
			
		case 3:
			listado (elem);
			break;
			
		case 4:
			printf("\n");
			printf("Saliendo del programa...");
			printf("\n");
			break;
			
		default:
			printf("Ingrese una opcion valida");
			printf("\n");
			break;
	}
			
	}while(opc!=4);
	printf(" ");
	
	return 0;
}

void busqueda(int elem[5]){
	int numb;
printf("Ingrese el numero  buscar en el arreglo: ");
			  scanf("%d", &numb);
			  int band=0;
				for(int i=0; i<5; i++){
		         if(numb==elem[i]){
		         	band=1;
		           printf("El elemento se encuentra en la posicion %d", i);	
		           printf("\n");
		        }
	       }
	       if(band==0){
			    printf("-1");
		        }
		    }
		    
void modificacion(int elem[5], int pos){
	int mod1;
	printf("Ingrese un numero del 0 al 4 para modificar su contenido: ");
	        scanf("%d", &pos);
	        	    if(pos>=0 && pos<4){
		         	printf("\nIngrese un numero para sustituir: ");
	                scanf("%d", &mod1);
	                elem[pos]=mod1;
	                printf("La posicion %d fue sustituida por %d", pos, elem[pos]);
		        }
        
        	else{
        		printf("No existe esa posicion");
			}
}

void listado(int elem[5]){
		printf("\nArreglo actual\n");
			for(int i=0; i<5; i++){
				printf("[%d]", elem[i]);
			}
			printf("\n");
}
