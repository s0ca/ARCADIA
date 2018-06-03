#include <Bounce.h>

const int channel = 1; // mettre un switch pour selectionner les canaux plutot que coder en dur 

//TODO
// implementer les LEDs
// Pin 1,2,8 pour le 78HC595
// 1=CLK 2=DATA 8=LATCH |

////////// #Key Sur l'ARCADIA ///////////  ///////////// Notes Sur l'ARCADIA ///////////////  /////////// N° Btn Sur l'ARCADIA ////////////
//                                     //  //                                             //  //                                         //
// | 52 | | 48 | 49 | 50 | 51 | | 53 | //  // | E2  |  | C2  | C#2 | D2  | D#2 |  | F2 |  //  //  | 17 |  | 13 | 14 | 15 | 17 |  | 18 |  //
// | 54 | | 44 | 45 | 46 | 47 | | 55 | //  // | F#2 |  | G#1 | A1  | A#1 | B1  |  | G2 |  //  //  | 19 |  | 09 | 10 | 11 | 12 |  | 20 |  //
// | 56 | | 40 | 41 | 42 | 43 | | 57 | //  // | G#2 |  | E1  | F1  | F#1 | G1  |  | A2 |  //  //  | 21 |  | 05 | 06 | 07 | 08 |  | 22 |  //
//        | 36 | 37 | 38 | 39 |        //  //          | C1  | C#1 | D1  | D#1 |          //  //          | 01 | 02 | 03 | 04 |          //
//                                     //  //                                             //  //                                         //
/////////////////////////////////////////  /////////////////////////////////////////////////  /////////////////////////////////////////////

// Ordre des boutons (pin, debounce)
Bounce button1 = Bounce(0, 5);
Bounce button2 = Bounce(3, 5);  
Bounce button3 = Bounce(4, 5);  
Bounce button4 = Bounce(5, 5);  
Bounce button5 = Bounce(6, 5);
Bounce button6 = Bounce(7, 5);  
Bounce button7 = Bounce(9, 5);  
Bounce button8 = Bounce(10, 5);  
Bounce button9 = Bounce(11, 5);
Bounce button10 = Bounce(12, 5);
Bounce button11 = Bounce(13, 5);
Bounce button12 = Bounce(14, 5);
Bounce button13 = Bounce(15, 5);
Bounce button14 = Bounce(16, 5);
Bounce button15 = Bounce(17, 5);
Bounce button16 = Bounce(18, 5);
Bounce button17 = Bounce(19, 5);
Bounce button18 = Bounce(20, 5);
Bounce button19 = Bounce(21, 5);
Bounce button20 = Bounce(22, 5);
Bounce button21 = Bounce(23, 5);
Bounce button22 = Bounce(24, 5);



void setup() {

  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);
  pinMode(18, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
  pinMode(24, INPUT_PULLUP);
}

void loop() {

  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();
  button12.update();
  button13.update();
  button14.update();
  button15.update();
  button16.update();
  button17.update();
  button18.update();
  button19.update();
  button20.update();
  button21.update();
  button22.update();


  if (button1.fallingEdge()) {
    usbMIDI.sendNoteOn(36, 99, channel);  // 36 = C1
  }
  if (button2.fallingEdge()) {
    usbMIDI.sendNoteOn(37, 99, channel);  // 37 = C#1
  }
  if (button3.fallingEdge()) {
    usbMIDI.sendNoteOn(38, 99, channel);  // 38 = D1
  }
  if (button4.fallingEdge()) {
    usbMIDI.sendNoteOn(39, 99, channel);  // 39 = D#1
  }
  if (button5.fallingEdge()) {
    usbMIDI.sendNoteOn(40, 99, channel);  // 40 = E1
  }
  if (button6.fallingEdge()) {
    usbMIDI.sendNoteOn(41, 99, channel);  // 41 = F1
  }
  if (button7.fallingEdge()) {
    usbMIDI.sendNoteOn(42, 99, channel);  // 42 = F#1
  }
  if (button8.fallingEdge()) {
    usbMIDI.sendNoteOn(43, 99, channel);  // 43 = G1
  }
  if (button9.fallingEdge()) {
    usbMIDI.sendNoteOn(44, 99, channel);  // 44 = G#1
  }
  if (button10.fallingEdge()) {
    usbMIDI.sendNoteOn(45, 99, channel);  // 45 = A1
  }
  if (button11.fallingEdge()) {
    usbMIDI.sendNoteOn(46, 99, channel);  // 46 = A#1
  }
  if (button12.fallingEdge()) {
    usbMIDI.sendNoteOn(47, 99, channel);  // 47 = B1
  }
  if (button13.fallingEdge()) {
    usbMIDI.sendNoteOn(48, 99, channel);  // 48 = C2
  }
  if (button14.fallingEdge()) {
    usbMIDI.sendNoteOn(49, 99, channel);  // 49 = C#2
  }
  if (button15.fallingEdge()) {
    usbMIDI.sendNoteOn(50, 99, channel);  // 50 = D2
  }
  if (button16.fallingEdge()) {
    usbMIDI.sendNoteOn(51, 99, channel);  // 51 = D#2
  }
  if (button17.fallingEdge()) {
    usbMIDI.sendNoteOn(52, 99, channel);  // 52 = E2
  }
  if (button18.fallingEdge()) {
    usbMIDI.sendNoteOn(53, 99, channel);  // 53 = F2
  }
  if (button19.fallingEdge()) {
    usbMIDI.sendNoteOn(54, 99, channel);  // 54 = F#2
  }
  if (button20.fallingEdge()) {
    usbMIDI.sendNoteOn(55, 99, channel);  // 55 = G2
  }
  if (button21.fallingEdge()) {
    usbMIDI.sendNoteOn(56, 99, channel);  // 56 = G#2
  }
  if (button22.fallingEdge()) {
    usbMIDI.sendNoteOn(57, 99, channel);  // 57 = A2
  }
  if (button1.risingEdge()) {
    usbMIDI.sendNoteOff(36, 0, channel);  // 36 = C1
  }
  if (button2.risingEdge()) {
    usbMIDI.sendNoteOff(37, 0, channel);  // 37 = C#1
  }
  if (button3.risingEdge()) {
    usbMIDI.sendNoteOff(38, 0, channel);  // 38 = D1
  }
  if (button4.risingEdge()) {
    usbMIDI.sendNoteOff(39, 0, channel);  // 39 = D#1
  }
  if (button5.risingEdge()) {
    usbMIDI.sendNoteOff(40, 0, channel);  // 40 = E1
  }
  if (button6.risingEdge()) {
    usbMIDI.sendNoteOff(41, 0, channel);  // 41 = F1
  }
  if (button7.risingEdge()) {
    usbMIDI.sendNoteOff(42, 0, channel);  // 42 = F#1
  }
  if (button8.risingEdge()) {
    usbMIDI.sendNoteOff(43, 0, channel);  // 43 = G1
  }
  if (button9.risingEdge()) {
    usbMIDI.sendNoteOff(44, 0, channel);  // 44 = G#1
  }
  if (button10.risingEdge()) {
    usbMIDI.sendNoteOff(45, 0, channel);  // 45 = A1
  }
  if (button11.risingEdge()) {
    usbMIDI.sendNoteOff(46, 0, channel);  // 46 = A#1
  }
  if (button12.risingEdge()) {
    usbMIDI.sendNoteOff(47, 0, channel);  // 47 = B1
  }
  if (button13.risingEdge()) {
    usbMIDI.sendNoteOff(48, 0, channel);  // 48 = C2
  }
  if (button14.risingEdge()) {
    usbMIDI.sendNoteOff(49, 0, channel);  // 49 = C#2
  }
  if (button15.risingEdge()) {
    usbMIDI.sendNoteOff(50, 0, channel);  // 50 = D2
  }
  if (button16.risingEdge()) {
    usbMIDI.sendNoteOff(51, 0, channel);  // 51 = D#2
  }
  if (button17.risingEdge()) {
    usbMIDI.sendNoteOff(52, 0, channel);  // 52 = E2
  }
  if (button18.risingEdge()) {
    usbMIDI.sendNoteOff(53, 0, channel);  // 53 = F2
  }
  if (button19.risingEdge()) {
    usbMIDI.sendNoteOff(54, 0, channel);  // 54 = F#2
  }
  if (button20.risingEdge()) {
    usbMIDI.sendNoteOff(55, 0, channel);  // 55 = G2
  }
  if (button21.risingEdge()) {
    usbMIDI.sendNoteOff(56, 0, channel);  // 56 = G#2
  }
  if (button22.risingEdge()) {
    usbMIDI.sendNoteOff(57, 0, channel);  // 57 = A2
  }

  while (usbMIDI.read()) {
  }
}
