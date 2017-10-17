// Practica.cpp
//
#pragma warning(disable: 4514)

#include <stdio.h>

const int NUMBER_TRES = 3;
#define TRES 3

const unsigned int CONST_BYTE_MAX = 256;
#define            MACRO_BYTE_MAX   256

enum TPrueba
{
	EVal1 = 0,
	EVal2 = 4,
};

// Ejemplo de información empaquetada.
// en un entero de 32 bits tenemos:
// 7 bits mayor peso la vida
// siguientes 8 bits: número de balas.
// Siguientes 4 bits: número de compañeros.
// bit 0: invulnerable
// bit 1: balas infinitas.
// bit 2: escudo.
// bit 3: berseker mode.
// vvvvvvvb bbbbbbbc cccxxxxx xxxxrein

typedef bool (*PunteroAMiFuncion) (int, float);
typedef long long LONG64;

int main(int argc, char* argv[])
{
	char					c1	= -1;
	char					c2	=  1;
	unsigned char			uc	=  1;

	int			  i1	=  1;
	int           i2	= -1;
	unsigned int ui1	=  1;
	unsigned int ui2	=  16384;
	unsigned int ui3	=  16383;

	printf("long long int: %d, long int:%d, int:%d, short int:%d, "
					"float:%d, double:%d, char: %d, bool:%d, wchar_t:%d, p:%d \n", 
					sizeof(long long int), sizeof(long int), sizeof(int), sizeof(short int),
					sizeof(float), sizeof(double), sizeof(char), sizeof(bool), sizeof(wchar_t), sizeof (int *));

	// typedef
	PunteroAMiFuncion p1	 = nullptr; // 0 o NULL
	bool (*p2)(int, float) = nullptr;

	int ilonglongSize = sizeof(LONG64);

	// Comparaciones.
	if ((i1 != 0) == true)
		i1++;

	if (i1 != 0)
		i1++;

	if (i1)
		i1++;

	// Ojo con las conversiones.
	// Explicar que pasa en cada caso.
	if (ui1 > (unsigned int)-1) // -1 casted to unsigned is 4294967295.
		ui1 = 0;
	ui1 = c1;
	ui1 = c2;
	uc	= ui2;
	c1	= ui2;
	uc	= ui3;
	c1	= ui3;
	ui1 = EVal1;

  if (CONST_BYTE_MAX > i2)
    printf("Mayor\n");

  if (MACRO_BYTE_MAX > i2)
    printf("Mayor\n");

	// ¿Cual es la diferencia?
	int number = NUMBER_TRES;
	number = TRES;

	// ¿Cuanto ocupa un enum?
	number = sizeof(TPrueba);

	// Conversión de float a entero y entero a float
	// Fijarse que el utilizar floats es más costoso computacionalmente que 
	// usar enteros.
	// Por ejemplo para asignar una cte. a una variable se necesitan 2 instrucciones ensamblador
	// en lugar de una.
	float f  = 3.1416f;
	float fv = 3;
	// Fijarse en las instrucciones ensamblador de conversión utilizadas "cvttss2si"
	// más costosas que las de movimiento. Si es que está disponible en el precesador. 
  // Si no lo está la instrucción se convierte en una llamada a una función (_ftol2_sse)
	int i3 = f;
	f = i3; 
	bool b = (f == 3);

#define BIT23 0x00800000

	unsigned int uBitsMap = 0;
	uBitsMap |= BIT23;
	uBitsMap &= ~BIT23;

	unsigned int uValue  = 0xFF000000;
	int					 iValue  = 0xFF000000;
	unsigned int uResult = uValue >> 8;
	int					 iResult = iValue >> 8;

	// Hacer la siguiente práctica.
	// Para almacenar el estado de un personaje se utiliza la variable
	// que está empaquetada según el formato de arriba.
	// 1.- Hacer una función que pasado un valor retorne el número de balas
	// 2.- Hacer una función que añada un número de balas a las ya existentes.
	// 1.- Hacer una función que pasado un valor retorne si se tienen balas infinitas
	// 2.- Hacer una función ponga modo de balas infinitas.

	printf("%d", i1);
	getchar();

	return 0;
}

