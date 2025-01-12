# Morse Code Translator with ESP8266

This project is a simple Morse code translator that uses an ESP8266 microcontroller. It converts a given text string into Morse code and flashes the built-in LED to represent the Morse signals.

## Features
- Converts English alphabets (A-Z) and numbers (0-9) into Morse code.
- Outputs Morse code using the ESP8266's built-in LED.
- Supports spaces between words with appropriate delays.

## How It Works
1. The input text is stored in the `textToTranslate` variable.
2. Each character of the text is converted to its corresponding Morse code using the predefined `morseCode` array.
3. The Morse code for each character is flashed on the built-in LED:
   - `.` (dot) is represented by a short flash (200 ms).
   - `-` (dash) is represented by a long flash (600 ms).
   - Spaces between characters and words are represented by delays.

## Hardware Requirements
- ESP8266 microcontroller (e.g., NodeMCU, Wemos D1 Mini).
- USB cable for programming and power supply.

## Software Requirements
- Arduino IDE (configured for ESP8266 development).

## Setup Instructions
1. Install the Arduino IDE from [Arduino's website](https://www.arduino.cc/en/software).
2. Configure the Arduino IDE for ESP8266:
   - Add the ESP8266 board URL to the Board Manager: `https://arduino.esp8266.com/stable/package_esp8266com_index.json`
   - Install the ESP8266 board package.
   - Select the appropriate ESP8266 board and COM port.
3. Copy the provided code into a new Arduino sketch.
4. Connect your ESP8266 to your computer via USB.
5. Compile and upload the code to the ESP8266.

## How to Use
1. Modify the `textToTranslate` variable with the text you want to convert to Morse code (e.g., "HELLO WORLD").
2. Open the Serial Monitor at a baud rate of 115200 to view debug messages.
3. Observe the built-in LED flashing Morse code corresponding to your input text.

## Code Explanation
- **`morseCode[]`**: An array containing Morse code for alphabets (A-Z) and digits (0-9).
- **`translateToMorse()`**: A function that iterates through the input text and translates each character to Morse code.
- **`sendMorse()`**: A function that flashes the LED based on the Morse code (`.` or `-`).
- **Delays**:
  - 200 ms for a dot (`.`).
  - 600 ms for a dash (`-`).
  - 600 ms between characters.
  - 700 ms for spaces between words.

## Example Output
For the text "HELLO WORLD":
- H: ....
- E: .
- L: .-..
- L: .-..
- O: ---
- Space: (700 ms delay)
- W: .--
- O: ---
- R: .-.
- L: .-..
- D: -..

The built-in LED will flash accordingly.

## Notes
- Ensure the ESP8266 is powered and connected properly.
- Modify delays in the `sendMorse()` function if needed to adjust the timing of the LED flashes.

## Future Improvements
- Add support for punctuation marks.
- Create a web interface to input text and view Morse translations.

---

This project demonstrates a simple yet effective way to translate text into Morse code using an ESP8266 microcontroller.

