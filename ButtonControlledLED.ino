
#define led 13
#define switch 7
void setup() {

    pinMode(led, OUTPUT);  
    pinMode(switch, INPUT);

}

void loop() {

    int buttonState = digitalRead(switch); 

    if (buttonState == HIGH) {  
        digitalWrite(led, HIGH);  
    } 
    else {
        digitalWrite(led, LOW);   
    }
}
