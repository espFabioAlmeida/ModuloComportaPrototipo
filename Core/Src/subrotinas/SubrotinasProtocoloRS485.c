///////////////////////////////////////////////////////////////////////////////
//ARQUIVO:    SubrotinasProtocoloRS485
//AUTOR:      Fábio Almeida
//CRIADO:     20/01/2026
//OBSERVAÇÕES:
////////////////////////////////////////////////////////////////////////////////
#include "main.h"
#include "global.h"
/*==============================================================================
CONSTANTES DO ARQUIVO
==============================================================================*/
/*==============================================================================
ATUALIZAÇÃO DOS DADOS
==============================================================================*/
void protocoloRS485AtualizacaoDados(uint8_t offset) {
	uint8_t operacao = charToByte(bufferRS485[offset + 5]);
	uint8_t flagAcionamentoS1 = charToBool(bufferRS485[offset + 7]);
	uint8_t flagAcionamentoS2 = charToBool(bufferRS485[offset + 9]);
	uint8_t flagAcionamentoS3 = charToBool(bufferRS485[offset + 11]);
	uint8_t flagAcionamentoS4 = charToBool(bufferRS485[offset + 13]);
	comandoComportas = charToByte(bufferRS485[offset + 15]);
	uint8_t comandoHaste = charToByte(bufferRS485[offset + 17]);

	if(comandoComportas >= ERRO_COMPORTAS) {
		comandoComportas = PARAR_COMPORTAS;
	}

	flagLedCOM = true;
}
/*==============================================================================
PROTOCOLO RS485
==============================================================================*/
void protocoloRS485() {
	signed int offset;
	if(!flagPacoteRS485) {
		return;
	}

	offset = indexOf(bufferRS485, "$,");

	if(offset >= 0) {
		uint8_t comando = charToByte(bufferRS485[offset + 2]) * 10 + charToByte(bufferRS485[offset + 3]);

		switch(comando) {
			case 1: protocoloRS485AtualizacaoDados(offset); break;
		}

	}

	flagPacoteRS485 = false;
	apagaRS485Buffer();
}
/*==============================================================================
FIM DO ARQUIVO
==============================================================================*/
