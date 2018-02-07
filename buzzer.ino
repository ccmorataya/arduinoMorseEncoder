int buzzerPin = 9;
int freq = 2500;

void setup() {
    pinMode(buzzerPin, OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    delay(1000);
    Serial.begin(9600);
    Serial.println("Morse encoder project");
    Serial.println("All systems ready");
    delay(1000);
}

void loop() {
    if (Serial.available()) {
        char serialListener = Serial.read();
        switch (serialListener){
            case 'A':
            case 'a':
                dot();
                line();
                break;
            case 'B':
            case 'b':
                line();
                dot();
                dot();
                dot();
                break;
            case 'C':
            case 'c':
                line();
                dot();
                line();
                dot();
                break;
            case 'D':
            case 'd':
                line();
                dot();
                dot();
                break;
            case 'E':
            case 'e':
                dot();
                break;
            case 'F':
            case 'f':
                dot();
                dot();
                line();
                dot();
                break;
            case 'G':
            case 'g':
                line();
                line();
                dot();
                break;
            case 'H':
            case 'h':
                dot();
                dot();
                dot();
                dot();
                break;
            case 'I':
            case 'i':
                dot();
                dot();
                break;
            case 'J':
            case 'j':
                dot();
                line();
                line();
                line();
                break;
            case 'K':
            case 'k':
                line();
                dot();
                line();
                break;
            case 'L':
            case 'l':
                dot();
                line();
                dot();
                dot();
                break;
            case 'M':
            case 'm':
                line();
                line();
                break;
            case 'N':
            case 'n':
                line();
                dot();
                break;
            case 'O':
            case 'o':
                line();
                line();
                line();
                break;
            case 'P':
            case 'p':
                dot();
                line();
                line();
                dot();
                break;
            case 'Q':
            case 'q':
                line();
                line();
                dot();
                line();
                break;
            case 'R':
            case 'r':
                dot();
                line();
                dot();
                break;
            case 'S':
            case 's':
                dot();
                dot();
                dot();
                break;
            case 'T':
            case 't':
                line();
                break;
            case 'U':
            case 'u':
                dot();
                dot();
                line();
                break;
            case 'V':
            case 'v':
                dot();
                dot();
                dot();
                line();
                break;
            case 'X':
            case 'x':
                line();
                dot();
                dot();
                line();
                break;
            case 'Y':
            case 'y':
                line();
                dot();
                line();
                line();
                break;
            case 'Z':
            case 'z':
                line();
                line();
                dot();
                dot();
                break;
            case '1':
                dot();
                line();
                line();
                line();
                line();
                break;
            case '2':
                dot();
                dot();
                line();
                line();
                line();
                break;
            case '3':
                dot();
                dot();
                dot();
                line();
                line();
                break;
                dot();
                dot();
                dot();
                dot();
                line();
                break;
            case '5':
                dot();
                dot();
                dot();
                dot();
                dot();
                break;
            case '6':
                line();
                dot();
                dot();
                dot();
                dot();
                break;
            case '7':
                line();
                line();
                dot();
                dot();
                dot();
                break;
            case '8':
                line();
                line();
                line();
                dot();
                dot();
                break;
            case '9':
                line();
                line();
                line();
                line();
                dot();
                break;
            case '0':
                line();
                line();
                line();
                line();
                line();
                break;

            case 32:
                Serial.print(" ");
                delay(250);
                break;
            default:
                dot();
                dot();
                dot();
                dot();
                dot();
                dot();
                dot();
                dot();
        }
    }
    delay(50);
}

void dot() {
    Serial.print(".");
    tone(buzzerPin, freq, 100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    noTone(buzzerPin);
}

void line() {
    Serial.print("-");
    tone(buzzerPin, freq, 300);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(300);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    noTone(buzzerPin);
}

