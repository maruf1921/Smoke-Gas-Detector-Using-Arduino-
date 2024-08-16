// Define the pins
const int gasSensorPin = A0; // Analog pin connected to the gas sensor's A0 pin
const int buzzerPin = 4;     // Digital pin connected to the buzzer's positive leg

// Define the gas threshold value
const int gasThreshold = 300; // Adjust this value based on your gas sensor's sensitivity

void setup() {
  // Initialize the gas sensor pin as input
  pinMode(gasSensorPin, INPUT);
  
  // Initialize the buzzer pin as output
  pinMode(buzzerPin, OUTPUT);
  
  // Initially turn off the buzzer
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Read the analog value from the gas sensor
  int gasValue = analogRead(gasSensorPin);
  
  // If the gas value exceeds the threshold, sound the buzzer
  if (gasValue > gasThreshold) {
    digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
  } else {
    digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
  }
  
  // Add a small delay for stability
  delay(100); // Adjust delay as needed
}