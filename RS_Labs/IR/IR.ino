// Define the pin connected to the IR sensor module and LED
const int IRSensor = 9; // connect IR sensor module to Arduino pin D9
const int LED = 3;     // connect LED to Arduino pin 13

void setup() {
  Serial.begin(9600); // Initialize Serial communication
  pinMode(IRSensor, INPUT); // Set IR Sensor pin as INPUT
  pinMode(LED, OUTPUT);     // Set LED pin as OUTPUT
}

void loop() {
  // Read the digital value from the IR sensor
  int sensorStatus = digitalRead(IRSensor);
  
  // Check if motion is detected (sensorStatus is HIGH)
  if (sensorStatus == HIGH) {
    // Turn off the LED
    digitalWrite(LED, LOW);
    // Print "Motion Detected!" to the serial monitor
    Serial.println("Motion Detected!");
  } else {
    // If no motion detected, turn on the LED
    digitalWrite(LED, HIGH);
    // Print "Motion Ended!" to the serial monitor
    Serial.println("Motion Ended!");
  }

  // Add a short delay to avoid rapid serial output
  delay(1000);
}
