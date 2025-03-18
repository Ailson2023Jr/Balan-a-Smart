
## Balança IoT com Blynk
![Smart Balança](https://github.com/user-attachments/assets/880a32b4-2bb6-4ac7-9cbe-95ae5c4a36df)


https://github.com/user-attachments/assets/3a566a12-5a75-445f-a0b5-dd0669d2256e


Este projeto consiste em uma balança eletrônica conectada à plataforma Blynk IoT, permitindo a visualização e o controle remoto das medições pelo celular. Utilizando um microcontrolador com conectividade Wi-Fi, podemos enviar os dados de peso em tempo real e interagir com módulos adicionais por meio do aplicativo Blynk.

## Funcionalidades

Medição de peso em tempo real.

Exibição dos dados no Blynk, permitindo monitoramento remoto.

Controle pelo celular para interação com módulos do microcontrolador.

Registro de histórico de peso para análise posterior.

Alertas e notificações com base em valores predefinidos.

Componentes Utilizados

Microcontrolador ESP8266 ou ESP32 (para conexão Wi-Fi e controle).

Célula de carga com HX711 (para medição do peso).

Aplicativo Blynk (para visualização e controle via smartphone).

Módulos adicionais (ex: relés para controle de motores ou atuadores).

## Como Funciona

O sensor de peso HX711 coleta os dados da célula de carga.

O microcontrolador processa os dados e os envia para a plataforma Blynk.

No aplicativo Blynk, é possível visualizar os valores em tempo real e interagir com os módulos conectados.

O usuário pode ativar dispositivos remotamente (ex: ligar um motor para despejo de material com base no peso medido).

Os dados podem ser armazenados e analisados para futuras referências.

## Configuração e Uso

1. Instalação do Blynk

Baixe o aplicativo Blynk IoT na App Store ou Google Play.

Crie uma conta e um novo projeto.

Adicione um Widget de Gráfico para visualizar os dados do peso.

Configure os botões de controle para interagir com os módulos.

2. Configuração do Microcontrolador

Instale a biblioteca Blynk no Arduino IDE.

Configure a conexão Wi-Fi e o token do Blynk no código.

Conecte o HX711 ao microcontrolador e carregue o código.

3. Uso do Aplicativo

Acompanhe os dados do peso em tempo real pelo celular.

Utilize os botões de controle para ativar dispositivos remotamente.

Receba alertas ao atingir determinados pesos.


## Conclusão

Este projeto possibilita o monitoramento remoto e controle interativo de uma balança eletrônica via Blynk IoT. Com essa solução, é possível visualizar e gerenciar os dados de peso diretamente do celular, tornando o sistema eficiente e prático para diversas aplicações.

Melhorias Futuras

Integração com Google Sheets para armazenamento de dados.

Implementação de machine learning para análise preditiva do peso.

Uso de bateria e painel solar para operação autônoma.

Desenvolvido por Ailson. 🚀
