#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h> 
#include "scanner.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char buffer[128];
	int token, i=0;
	/*FILE*valores = fopen("entrada.txt", "rb");
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
	 */
	 printf("Ingrese una cadena:\n");
	 while((token = get_token(buffer)) != FDT){
	 	
	 	if(token==CAD)
	 	{
	 		printf("CADENA: ");
	 		while(buffer[i]!='\0'){
	 			printf("%c",buffer[i]);
	 			buffer[i]=NULL;
			 	i++;
			}
			printf("\n");
		}
		else if(token==SEP){
			printf("SEPARADOR: ");
			while(buffer[i]!='\0'){
	 			printf("%c",buffer[i]);
			 	i++;
			}
			printf("\n");
		}
		i=0;
	 }	
	return 0;
}
