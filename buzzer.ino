int buzzerPin = 9;
int freq = 880;

void setup() {
    pinMode(buzzerPin, OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    delay(1000);
    Serial.begin(9600);
    Serial.println("HELLO, DEBUGGER IS NOW RUNNING ON SERIAL PORT AT 9600 bps");
    delay(1000);
}

void loop() {
    if (Serial.available()) {
        char serialListener = Serial.read();
        switch (serialListener){
            case 'A':
                dot();
                line();
                break;
            case 'B':
                line();
                dot();
                dot();
                dot();
                break;
            case 'C':
                line();
                dot();
                line();
                dot();
                break;
            case 'D':
                line();
                dot();
                dot();
                break;
            case 'E':
                dot();
                break;
            case 'F':
                dot();
                dot();
                line();
                dot();
                break;
            case 'G':
                line();
                line();
                dot();
                break;
            case 'H':
                dot();
                dot();
                dot();
                dot();
                break;
            case 'I':
                dot();
                dot();
                break;
            case 'J':
                dot();
                line();
                line();
                line();
                break;
            case 'K':
                line();
                dot();
                line();
                break;
            case 'L':
                dot();
                line();
                dot();
                dot();
                break;
            case 'M':
                line();
                line();
                break;
            case 'N':
                line();
                dot();
                break;
            case 'O':
                line();
                line();
                line();
                break;
            case 'P':
                dot();
                line();
                line();
                dot();
                break;
            case 'Q':
                line();
                line();
                dot();
                line();
                break;
            case 'R':
                dot();
                line();
                dot();
                break;
            case 'S':
                dot();
                dot();
                dot();
                break;
            case 'T':
                line();
                break;
            case 'U':
                dot();
                dot();
                line();
                break;
            case 'V':
                dot();
                dot();
                dot();
                line();
                break;
            case 'X':
                line();
                dot();
                dot();
                line();
                break;
            case 'Y':
                line();
                dot();
                line();
                line();
                break;
            case 'Z':
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

