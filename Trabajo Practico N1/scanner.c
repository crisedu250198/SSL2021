#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "scanner.h"

int get_token(char buffer[]){
	char caracter;
	int i=0;
	while((caracter = getchar()) != EOF){
	
		if(caracter == ','){
			if(i != 0){
				ungetc(caracter,stdin);
				return CAD;
			}
			buffer[0]=caracter;
			buffer[1]='\0';
			return SEP;
		}
		else if(caracter == '\n'||caracter == '\0')
		{
			if(i != 0){
			ungetc(caracter,stdin);
			return CAD;
			}
			return FDT;
		}
		else if(isspace(caracter))
		{
			if(i != 0){
			return CAD;
			}
		}
		else
		{
			buffer[i]=caracter;
			i++;
		}
	}
	return FDT;
}

