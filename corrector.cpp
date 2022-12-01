#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Diccionario(char* nombrearch,char palabra[])
{
	strcpy(palabra[0], "Diccionario");
	int elementos = 1;

	FILE* archivo;

	fopen_s(&archivo, nombrearch,"r");
	if (archivo != NULL)
	{
		char texto[700];

		while (!feof(archivo))
		{
			for (int i = 0; i != elementos; i++)
			{
				fscanf(archivo, "%s", texto[i]);
			}
			fclose(archivo);
		}
		int caracternombrearch, numpalabra = 0, j = 0;
		char palabrasinorden[]{ 'hola','pepe','C' };
		char arrayAxiliar[];
		struct PALABRA_CON_FREC
		{
			char laPalabra[];
			int frecuencia = 1;
		}
		unaPalabra;
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