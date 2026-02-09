#include <Arduino.h>
int ldrpin=A0;
void setup() {
    Serial.begin(9600);
// write your initialization code here
}

void loop() {
    int ldrValue=analogRead(ldrpin);
    int lightPercent= map(ldrValue,0,1023,0,100);
    Serial.print("LDR Value:");
    Serial.println(ldrValue);
    Serial.print("!Light:");
    Serial.print("Light Percent:");
    Serial.println("%");
    delay(300);
// write your code here
}