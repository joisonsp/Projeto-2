#include "Clear.h"

#ifdef __unix__  /* Diretiva que executará o código se em diferentes sistemas do tipo Unix como o Linux quando for definida */
	#include <unistd.h> /* Fornece acesso à API do sistema operacional POSIX, habilitando constantes e tipos simbólicos padrão */
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
