///////////////////////////////////////////////////////////////////////////////
//ARQUIVO:    SubrotinasReles
//AUTOR:      Fábio Almeida
//CIRADO:     28/01/2026
//OBSERVAÇÕES:
////////////////////////////////////////////////////////////////////////////////
#include "main.h"
#include "global.h"
/*=============================================================================
LEITURA ENTRADAS DIGITAIS
==============================================================================*/
void acionamentoReles() {

	if(comandoComportas == ABRIR_COMPORTAS && flagFimDeCursoSobe) {
		comandoComportas = PARAR_COMPORTAS;
	}
	if(comandoComportas == FECHAR_COMPORTAS && flagFimDeCursoDesce) {
		comandoComportas = PARAR_COMPORTAS;
	}

	switch(comandoComportas) {
		default:
		case PARAR_COMPORTAS:
			off(OUT1_GPIO_Port, OUT1_Pin);
			off(OUT2_GPIO_Port, OUT2_Pin);
			break;

		case ABRIR_COMPORTAS:
			on(OUT1_GPIO_Port, OUT1_Pin);
			off(OUT2_GPIO_Port, OUT2_Pin);
			break;

		case FECHAR_COMPORTAS:
			off(OUT1_GPIO_Port, OUT1_Pin);
			on(OUT2_GPIO_Port, OUT2_Pin);
			break;
	}

}
/*=============================================================================
FIM DO ARQUIVO
==============================================================================*/
