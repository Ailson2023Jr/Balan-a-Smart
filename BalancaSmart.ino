///
///  Projeto UPX V - Balança de Cálculo de Calorias
///
///  Autor: Ailson
///

#define BLYNK_TEMPLATE_ID "TMPL26s-0kZFW"
#define BLYNK_TEMPLATE_NAME "BALANÇA"
#define BLYNK_AUTH_TOKEN "fph0B4WXiwJ_exOYSrSwM4_VlYaGYGBy"  // Insira sua chave de autenticação Blynk

#include <WiFi.h>  // Biblioteca para ESP32
#include <BlynkSimpleEsp32.h>
#include "HX711.h"

// Definição dos pinos para ESP32
#define DT_PIN 4  // GPIO4 (D4) - Pino de dados do HX711
#define SCK_PIN 5 // GPIO5 (D5) - Pino de clock do HX711

// Credenciais da rede WiFi
char ssid[] = "YYour Credencial";  // Nome da sua rede WiFi
char pass[] = "Your Password";    // Senha do seu WiFi

HX711 scale;  // Instância do sensor

float calibration_factor = -156.0;  // Ajuste conforme necessário para 1014kg
float weight = 0.00; // Variável para armazenar o peso

void setup() {
    Serial.begin(115200);
    
    // Conectar ao WiFi e ao Blynk
    Serial.println("Conectando ao WiFi...");
    Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

    Serial.println("Inicializando HX711 no ESP32...");
    scale.begin(DT_PIN, SCK_PIN); // Inicia a comunicação com HX711
    scale.set_scale(calibration_factor);  // Define o fator de calibração
    scale.tare();  // Zera a balança (remove peso residual)

    Serial.println("Coloque um peso conhecido para calibrar...");
    delay(5000);
}

void loop() {
    Blynk.run();  // Mantém a conexão ativa com o Blynk

    if (scale.is_ready()) { // Verifica se o sensor está pronto para leitura
        weight = scale.get_units(10); // Média de 10 leituras para maior precisão
        Serial.print("Peso: ");
        Serial.print(weight, 2); // Exibe o peso com 2 casas decimais
        Serial.println(" kg");

        // Enviar os dados para o Blynk (usando o Virtual Pin V0)
        Blynk.virtualWrite(V0, weight);
    } else {
        Serial.println("HX711 não está pronto.");
    }

    delay(1000);
}
