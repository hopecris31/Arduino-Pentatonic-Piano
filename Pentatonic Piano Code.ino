/*
* Code for the Pentationic Piano Project. There are 5 buttons, and each button
* plays a different note to the buzzer when pressed.
*
*   Hope Crisafi 
*   9/6/2022
*/


#define NOTE_A1 550
#define NOTE_B1 620
#define NOTE_C4 262 
#define NOTE_F1 440 
#define NOTE_G3 196 

const int BUTTON_1_PIN = 3;
const int BUTTON_2_PIN = 5;
const int BUTTON_3_PIN = 6;
const int BUTTON_4_PIN = 9;
const int BUTTON_5_PIN = 10;
const int BUZZER_PIN = 11;

/*
* Plays note B (played on button 1)
*/
void play_note_B(){
  tone(11, NOTE_B1, 250);
}

/*
* Plays note A (played on button 2)
*/
void play_note_A(){
  tone(11, NOTE_A1, 250); 
}

/*
* Plays note G (played on button 3)
*/
void play_note_G(){
  tone(11, NOTE_G3, 250);
}

/*
* Plays note C (played on button 4)
*/
void play_note_C(){
  tone(11, NOTE_C4, 250);
}

/*
* Plays note F (played on button 5)
*/
void play_note_F(){
  tone(11, NOTE_F1, 250);
}


void setup() {
  pinMode(BUTTON_1_PIN, INPUT); 
  pinMode(BUTTON_2_PIN, INPUT); 
  pinMode(BUTTON_3_PIN, INPUT); 
  pinMode(BUTTON_4_PIN, INPUT); 
  pinMode(BUTTON_5_PIN, INPUT); 
  pinMode(BUZZER_PIN, OUTPUT);
}


void loop() {
  int button_1_input = digitalRead(BUTTON_1_PIN);
  while (button_1_input == HIGH){
    play_note_B();
    button_1_input = digitalRead(BUTTON_1_PIN);
  }

  int button_2_input = digitalRead(BUTTON_2_PIN);
  while (button_2_input == HIGH){
    play_note_A();
    button_2_input = digitalRead(BUTTON_2_PIN); 
  }

  int button_3_input = digitalRead(BUTTON_3_PIN);
  while (button_3_input == HIGH){
    play_note_G();
    button_3_input = digitalRead(BUTTON_3_PIN); 
  }

  int button_4_input = digitalRead(BUTTON_4_PIN);
  while (button_4_input == HIGH){
    play_note_C();
    button_4_input = digitalRead(BUTTON_4_PIN);
  }

  int button_5_input = digitalRead(BUTTON_5_PIN);
  while (button_5_input == HIGH){
    play_note_F();
    button_5_input = digitalRead(BUTTON_5_PIN); 
  }
  
}