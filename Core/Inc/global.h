/*
 * global.h
 *
 *  Created on: Aug 23, 2023
 *      Author: User
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define VERSAO_FIRMWARE 1

enum BOOL {
	false,
	true
};

#define TAMANHO_BUFFER_RS485 128

extern UART_HandleTypeDef huart4;

enum COMANDO_COMPORTAS {
	PARAR_COMPORTAS,
	FECHAR_COMPORTAS,
	ABRIR_COMPORTAS,

	ERRO_COMPORTAS
};

extern uint8_t
	flagPacoteRS485,
	flagLedCOM,

	flagFimDeCursoSobe,
	flagFimDeCursoDesce;

extern uint8_t
	contadorRS485Buffer,

	comandoComportas;

extern char
	rs485DataIn;

extern char
	bufferRS485[TAMANHO_BUFFER_RS485];
#endif /* INC_GLOBAL_H_ */
