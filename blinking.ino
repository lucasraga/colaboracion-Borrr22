int led = 15


void setup() {
	pinMode(led, OUTPUT);

}


void loop(){
	
	digitalWriter(led, HIGH);
	delay(4000);
	digitalWriter(led, LOW);
	delay(4000);

}