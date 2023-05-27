#include <Servo.h>

Servo servoGarra;
int pinoServo = 9;
//DEFINIR PINOS DOS MOTORES DO CARRO E TENTAR COLOCAR PWM NA PONTE H
#define TRIGGER_PIN 7  // Pino de disparo do ultrassônico
#define ECHO_PIN 6     // Pino de eco do ultrassônico

void setup() {
  servoGarra.attach(pinoServo);
  Serial.begin(9600);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  int u = ultrassonicoRead();
  if (u == 1){
    //PEGAR RESULTADOS DO BLACKWHITEREAD E EXECUTAR TAREFAS NOS MOTORES DO VEICULO
  }
  else{
    //FAZER ALGO CASO O ULTRASSONICO RETORNE VALOR <=3
    //SE COR 1 PEGAR OBJETO, SE COR 2 DESVIAR...
  }
}
char blackwhiteRead(){

}
//FAZ A LEITURA DO ULTRASSÔNICO E MANDA O VALOR DA LEITURA PARA O LOOP...
int ultrassonicoRead(){
  long duration, distance;
  
  // Dispara o pulso ultrassônico
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  
  // Mede a duração do pulso de eco
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Converte a duração em distância
  distance = duration * 0.034 / 2;
  
  // Exibe a distância no monitor serial
  if (int(distance) >= 3){
    return 1;
  }
  else{
    return 0;
  }
  
  
  delay(1000);  // Aguarda 1 segundo antes da próxima leitura
}
void abrirGarra() {
  //INTERVALO A ATÉ INTERVALO B
}

void fecharGarra() {
  //INTERVALO A ATÉ INTERVALO B
}
