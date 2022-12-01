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
		while (nombrearch[caracternombrearch] != '\0')
		{
			caracternombrearch = 0;
			while (caracternombrearch != ' ' && caracternombrearch != '\0' && caracternombrearch != '	' && caracternombrearch != ',' && caracternombrearch != '.' && caracternombrearch != '(' && caracternombrearch != ')' && caracternombrearch != '¿' && caracternombrearch != '?' && caracternombrearch != '!' && caracternombrearch != '¡')
			{
				palabrasinorden[numpalabra][caracternombrearch++] = nombrearch[caracternombrearch];
			}
			caracternombrearch = '\0';
			numpalabra++;
			if (nombrearch[caracternombrearch] != '\0')
			{
				caracternombrearch++;
			}
		}
		for (int i = 0; i < caracternombrearch; i++)
		{
			for (int posicionDelantera = 1; posicionDelantera < caracternombrearch; posicionDelantera++)
			{
				if (strcmp(palabrasinorden[i], palabrasinorden[posicionDelantera]) == 0)
				{
					palabrasinorden[posicionDelantera][0] = '\0';
					unaPalabra.frecuencia++;
				}
				else if (strcmp(palabrasinorden[i], palabrasinorden[posicionDelantera]) > 0)
				{
					strcpy(arrayAxiliar, palabrasinorden[i]);
					strcpy(palabrasinorden[i], palabrasinorden[posicionDelantera]);
					strcpy(palabrasinorden[posicionDelantera], arrayAxiliar);
				}
			}
		}

	}
}
int main()
{
	return 0;
}