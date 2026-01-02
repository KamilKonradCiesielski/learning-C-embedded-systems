void setup() {
 pinMode(7, INPUT_PULLUP);
 pinMode(6, INPUT_PULLUP);
 pinMode(5, INPUT_PULLUP);
 pinMode(4, INPUT_PULLUP);

 digitalWrite(3, OUTPUT); 
}

void loop() {

if (digitalRead(7) == LOW) {
	analogWrite(3, 255);	
	delay(1000);
	analogWrite(3,0);
}
if (digitalRead(6) == LOW) {
	analogWrite(3,191);
	delay(1000);
	analogWrite(3,0);
}
if (digitalRead(5) == LOW) {
	analogWrite(3,127);
	delay(1000);
	analogWrite(3,0);
}
if (digitalRead(4) == LOW){
	analogWrite(3,63);
	delay(1000);
	analogWrite(3,0);
}
}
