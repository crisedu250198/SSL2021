#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*valores = fopen("entrada.txt", "rb");
	if(valores == NULL)
	{printf("ERROR-No se pudo abrir el archivo");
	 return 1;
	}
	fseek(valores,0,SEEK_END);
	int cantElem=ftell(valores);
	rewind(valores);
	char * cadena =(char*) calloc(sizeof(char),cantElem);
	int ElemLeidos= fread(cadena,sizeof(char),cantElem,valores);
	if(ElemLeidos!=cantElem)
	{
		printf("ERROR- No leyo correctamente");
		return 2;
	} 
		printf("CONTENIDO DEL ARCHIVO:\n");
		printf("-------------------------------------------------------------------------------------------------\n");
	 	printf("%s",cadena);
	return 0;
}
