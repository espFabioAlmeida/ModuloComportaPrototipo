# ModuloComportaPrototipo
Projeto Automasensor: Modulo Comporta Protótipo <br>
Utilizado a placa ECU GPS V1 <br>
Feito em especial para feira em casavel 09/02/2026 <br>
# Escopo
Recebe comando pela RS485 para acionar a comporta, para cima, para baixo ou parar na atual posição. <br>
Dois relés acionam a comporta, um faz ela subir e outro descer. <br>
Dois fim de curso limitam o acionamento, tanto para subir, quanto para descer. <br>
# Protocolo de comunicação
Utilizado o comando 1 da ECU VLV. <br>
<br>
Comando 1: Atualziação dos comandos e dados: $,01,OPERACAO,S1,S2,S3,S4,COMPORTAS,HASTE,\r\n <br>
OPERACAO: ENVIAR SEMPRE 0 <br>
S1,S2,S3,4: ENVIAR SEMPRE 0 PARA OS 4 SINAIS <br>
COMPORTAS: 0=PARADO, 1=FECHAR e 2=ABRIR <br>
HASTE: 0=PARADO, 1=SUBIR e 2=DESCER: ENVIAR SEMPRE 0 <br>
<br>
Resposta: Não envia nenhuma resposta, com o objetivo de poder colocar mais de uma em paralelo. <br>
<br>

# Pinagem Conector
1 - VCC <br>
2 - NC <br>
3 - K1 NF - LIGAR NO GND <br>
4 - K1 CM - SAIDA MOTOR FIO 1 <br>
5 - K1 NA - LIGAR NO VCC <br>
6 - K2 NF - LIGAR NO GND <br>
7 - K2 CM - SAIDA MOTOR FIO 2 <br>
8 - K2 NA - LIGAR NO VCC <br>
9 - VCC <br>
10 - VCC <br>
11 - GND <br>
12 - GND <br>
13 - GND <br>
14 - GND <br>
15 - GND <br>
16 - Resistor Fim de Linha, fechar com o pino 23 (fechar somente se quiser colocar o fim de linha) <br>
17 - VCC <br>
18 - NC <br>
19 - IN1 - FIM DE CURSO SOBE <br>
20 - IN2 - FIM DE CURSO DESCE <br>
21 - IN3 - DEIXAR ABERTO <br>
22 - IN4 - DEIXAR ABERTO <br>
23 - RS485 D+ <br>
24 - RS485 D- <br>
