#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Diccionario()
{
	FILE* archivo;
		char palabra;

	fopen_s(&archivo, ".txt", "w");
	if (archivo != Null)
	{
		scanf("%[^\n]", &palabra);
		fflush(stdin);
	}
	else
	{
		printf("\n No detecta archivo \n\n");
	}
	fclose(archivo);
}