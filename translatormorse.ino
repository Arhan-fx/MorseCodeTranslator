const String morseCode[] = {
  ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
  "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."
};

String textToTranslate = "Vote for me";
int ledPin = LED_BUILTIN;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  translateToMorse(textToTranslate);
  delay(10000);
}

void translateToMorse(String input) {
  input.trim();
  for (int i = 0; i < input.length(); i++) {
    char ch = toupper(input.charAt(i));
    if (ch == ' ') {
      delay(700);
    } else {
      int index = ch - 'A';
      if (index >= 0 && index < 26) {
        sendMorse(morseCode[index]);
      } else if (ch >= '0' && ch <= '9') {
        index = ch - '0' + 26;
        sendMorse(morseCode[index]);
      }
    }
  }
}

void sendMorse(String code) {
  for (int i = 0; i < code.length(); i++) {
    if (code.charAt(i) == '.') {
      digitalWrite(ledPin, HIGH);
      delay(200);
      digitalWrite(ledPin, LOW);
      delay(200);
    } else if (code.charAt(i) == '-') {
      digitalWrite(ledPin, HIGH);
      delay(600);
      digitalWrite(ledPin, LOW);
      delay(200);
    }
  }
  delay(600);
}

