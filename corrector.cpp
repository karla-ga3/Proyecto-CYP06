#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Diccionario(char*nombrearch,char palabra[])
{
	strcpy(palabra[0], "Diccionario");
	int elementos = 1;

	FILE* archivo;

	fopen_s(&archivo, nombrearch,"r");
	if (archivo != NULL)
	{
		scanf("%[^\n]", &palabra);
		fflush(stdin);
		for (in i = 0; palabra[i] != '\0'; i++)
		{
			palabra[i] = tolower(palabra[i]);
		}
		printf("%s", palabra);
	}
	else
	{
		printf("\n No detecta archivo \n\n");
	}
	fclose(archivo);
}
int main()
{
	return 0;
}