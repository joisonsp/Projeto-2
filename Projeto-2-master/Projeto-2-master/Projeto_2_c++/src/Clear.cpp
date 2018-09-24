#include "Clear.h"

#ifdef __unix__  /* Diretiva que executar� o c�digo se em diferentes sistemas do tipo Unix como o Linux quando for definida */
	#include <unistd.h> /* Fornece acesso � API do sistema operacional POSIX, habilitando constantes e tipos simb�licos padr�o */
	#include <stdlib.h>

#elif defined(_WIN32) || defined(WIN32)
	#define OS_Windows
	#include <windows.h>
#endif

Clear::Clear() {
	#ifdef OS_Windows
	/* Codigo Windows */
	system("cls");
	#else
	/* Codigo GNU/Linux */
	system("clear");
	#endif /* Encerrando Diretiva _unix_ */
}
