///////////////////////////////////////////////////////////////////////////////
//ARQUIVO:    SubrotinasEntradasDigitais
//AUTOR:      Fábio Almeida
//CIRADO:     25/04/2024
//OBSERVAÇÕES:
////////////////////////////////////////////////////////////////////////////////
#include "main.h"
#include "global.h"
/*=============================================================================
LEITURA ENTRADAS DIGITAIS
==============================================================================*/
void entradasDigitais() {

	if(flagFimDeCursoSobe) { //NA
		if(debounceInverso(IN1_GPIO_Port, IN1_Pin)) {
			flagFimDeCursoSobe = false;
		}
	}
	else {
		if(debounce(IN1_GPIO_Port, IN1_Pin)) {
			flagFimDeCursoSobe = true;
		}
	}

	if(flagFimDeCursoDesce) { //NA
		if(debounceInverso(IN2_GPIO_Port, IN2_Pin)) {
			flagFimDeCursoDesce = false;
		}
	}
	else {
		if(debounce(IN2_GPIO_Port, IN2_Pin)) {
			flagFimDeCursoDesce = true;
		}
	}
}
/*=============================================================================
FIM DO ARQUIVO
==============================================================================*/
