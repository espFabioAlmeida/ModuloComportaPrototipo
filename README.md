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
