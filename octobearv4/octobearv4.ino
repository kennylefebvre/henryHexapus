#include <Bounce2.h>

#include <Chrono.h>

#include <Servo.h>

#define BUTTON_PIN 12


//Creer une instance de la logitheque
Servo myServo; 
Servo myServo1; 
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;

int angleServo;
int angleServo1;
int angleServo2;
int angleServo3;
int angleServo4;
int angleServo5;

Chrono chrono240;
int bpm240;
int changement240;
int temps240;

boolean excitee;

Bounce debouncer = Bounce();

int   etatInterrupteur;
int uneFois;
int state;

void setup()
{
  //Activer la fonction servo de la broche 9

  myServo.attach(2);   //myServo == premier droite (blanc)
  myServo1.attach(6);   //myServo1 == milieu droite (blanc)
  myServo2.attach(4);   //myServo2 == dernier droite (blanc)
  myServo3.attach(8);  //myServo3 == premier gauche (noir)
  myServo4.attach(9);   //myServo4 == deuxieme gauche (noir)
  myServo5.attach(11);   //myServo5 == dernier gauche (noir)

  angleServo = 1500;
  angleServo1 = 1500;
  angleServo2 = 1500;
  angleServo3 = 800;
  angleServo4 = 800;
  angleServo5 = 800;



  bpm240 = 250;
  changement240 = 0;
  temps240 = 0;
  
  excitee = false;
  
  etatInterrupteur = 0;
  uneFois = 0;
  
  
 pinMode(BUTTON_PIN,INPUT_PULLUP);
   debouncer.attach(BUTTON_PIN);
  debouncer.interval(5); // interval in ms
 

}

void loop() {
    debouncer.update();
    //etatInterrupteur = debouncer.read();
  
  if ( debouncer.fell()  ) {

              //  Serial.println( millis()-buttonPressTimeStamp );
               if (state == 0) {
                state = 1;
               }  else {
                state = 0; 
               }

        }
    
    

  if (excitee) {
    bpm240 = 125;
  } else {
   bpm240 = 250; 
  }
  
  if (state == 1) {
  if (chrono240.metro(bpm240)) {
    if (temps240 == 0) {
      reset();
    } 
    else if (temps240 == 2 || temps240 == 6 || temps240 == 10 || temps240 == 14 || temps240 == 18) {
      mouvementTentacule(myServo, 0);
    } 
    else if (temps240 == 20) {
      mouvementTentacule(myServo3,3);
    } 
    else if (temps240 == 22) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 26) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 28) {
      mouvementTentacule(myServo3,3);
    }
    else if (temps240 == 30) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 34) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 35) {
      mouvementTentacule(myServo1,1);
    } 
    else if (temps240 == 36) {
      mouvementTentacule(myServo3,3);
    } 
    else if (temps240 == 40) {
      mouvementTentacule(myServo4,4);
    } 
    else if (temps240 == 42) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 43) {
      mouvementTentacule(myServo1,1);
    } 
    else if (temps240 == 44) {
      mouvementTentacule(myServo3,3);
    } 
    else if (temps240 == 48) {
      mouvementTentacule(myServo4,4);
    } 
    else if (temps240 == 50) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 51) {
      mouvementTentacule(myServo1,1);
    }
    else if (temps240 == 52) {
      mouvementTentacule(myServo3,3);
    } 
    else if (temps240 == 56) {
      mouvementTentacule(myServo4,4);
    }
    else if (temps240 == 58) {
      mouvementTentacule(myServo,0);
    }
    else if (temps240 == 59) {
      mouvementTentacule(myServo1,1);
    }
    else if (temps240 == 60) {
      mouvementTentacule(myServo3,3);
    }
    else if (temps240 == 64) {
      mouvementTentacule(myServo4,4);
    } 
    else if (temps240 == 66) {
      mouvementTentacule(myServo,0);
    }  
    else if (temps240 == 67) {
      mouvementTentacule(myServo1,1);
    } 
    else if (temps240 == 68) {
      mouvementTentacule(myServo3,3);
    } 
    else if (temps240 == 69) {
      mouvementTentacule(myServo4,4);
    } 
    else if (temps240 == 70) {
      mouvementTentacule(myServo2,2);
      mouvementTentacule(myServo5,5);
    }  
    else if (temps240 == 74) {
      mouvementTentacule(myServo,0);
    }       
    else if (temps240 == 75) {
      mouvementTentacule(myServo1,1);
    } 
    else if (temps240 == 76) {
      mouvementTentacule(myServo3,3);
    } 
    else if (temps240 == 77) {
      mouvementTentacule(myServo4,4);
    } 
    else if (temps240 == 78) {
      mouvementTentacule(myServo2,2);
      mouvementTentacule(myServo5,5);
    } 
    else if (temps240 == 82) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 84) {
      mouvementTentacule(myServo3,3);
    } 
    else if (temps240 == 86) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 90) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 92) {
      mouvementTentacule(myServo3,3);
    } 
    else if (temps240 == 94) {
      mouvementTentacule(myServo,0);
    } 
    else if (temps240 == 98) {
      mouvementTentacule(myServo,0);
      mouvementTentacule(myServo1,1);
      mouvementTentacule(myServo2,2);
    }     
    else if (temps240 == 100) {
      mouvementTentacule(myServo3,3);
      mouvementTentacule(myServo4,4);
      mouvementTentacule(myServo5,5);
    } 
    else if (temps240 == 106) {
      mouvementTentacule(myServo,0);
      mouvementTentacule(myServo1,1);
      mouvementTentacule(myServo2,2);
    }  
    else if (temps240 == 110) {
      mouvementTentacule(myServo3,3);
      mouvementTentacule(myServo4,4);
      mouvementTentacule(myServo5,5);
    } 
    else if (temps240 == 114) {
      mouvementTentacule(myServo,0);
      mouvementTentacule(myServo1,1);
      mouvementTentacule(myServo2,2);
    }
    else if (temps240 == 116) {
      mouvementTentacule(myServo3,3);
      mouvementTentacule(myServo4,4);
      mouvementTentacule(myServo5,5);
    }
    else if (temps240 == 118) {
      mouvementTentacule(myServo3,3);
      mouvementTentacule(myServo4,4);
      mouvementTentacule(myServo5,5);
    }
    else if (temps240 == 120) {
      mouvementTentacule(myServo,0);
      mouvementTentacule(myServo1,1);
      mouvementTentacule(myServo2,2);
    }
    else if (temps240 == 122) {
      mouvementTentacule(myServo,0);
      mouvementTentacule(myServo2,2);
    }
    else if (temps240 == 124) {
      mouvementTentacule(myServo3,3);
      mouvementTentacule(myServo5,5);
    }
    else if (temps240 == 126) {
      mouvementTentacule(myServo1,1);
    }
    else if (temps240 == 128) {
      mouvementTentacule(myServo4,4);
    }
    else if (temps240 == 130) {
      mouvementTentacule(myServo,0);
    }
    else if (temps240 == 131) {
      mouvementTentacule(myServo1,1);
    }  
    else if (temps240 == 132) {
      mouvementTentacule(myServo3,3);
    }
    else if (temps240 == 133) {
      mouvementTentacule(myServo4,4);
    }
    else if (temps240 == 134) {
      mouvementTentacule(myServo2,2);
    }
    else if (temps240 == 135) {
      mouvementTentacule(myServo5,5);
    }
    else if (temps240 == 138) {
      tous();
    }    
    else if (temps240 == 144) {
      tous();
    }  
    else if (temps240 == 146) {
      tous();
    }   
    else if (temps240 == 154) {
      tous();
    }  
    else if (temps240 == 158) {
      tous();
    } 
    else if (temps240 == 162) {
      mouvementTentacule(myServo,0);
      mouvementTentacule(myServo5,5);
    } else if (temps240 == 164) {
      mouvementTentacule(myServo1,1);
      mouvementTentacule(myServo4,4);
    }  else if (temps240 == 166) {
      mouvementTentacule(myServo2,2);
      mouvementTentacule(myServo3,3);
    }    else if (temps240 == 170) {
      mouvementTentacule(myServo,0);
      mouvementTentacule(myServo5,5);
    } else if (temps240 == 172) {
      mouvementTentacule(myServo1,1);
      mouvementTentacule(myServo4,4);
    }  else if (temps240 == 174) {
      mouvementTentacule(myServo2,2);
      mouvementTentacule(myServo3,3);
    }   else if (temps240 == 178) {
      mouvementTentacule(myServo,0);
    }     else if (temps240 == 179) {
      mouvementTentacule(myServo1,1);
    }   else if (temps240 == 180) {
      mouvementTentacule(myServo2,2);
    }  else if (temps240 == 181) {
      mouvementTentacule(myServo3,3);
    } else if (temps240 == 182) {
      mouvementTentacule(myServo4,4);
    } else if (temps240 == 183) {
      mouvementTentacule(myServo5,5);
    } else if (temps240 == 184) {
      mouvementTentacule(myServo1,1);
    } else if (temps240 == 185) {
      mouvementTentacule(myServo2,2);
    } else if (temps240 == 186) {
      mouvementTentacule(myServo3,3);
    } else if (temps240 == 187) {
      mouvementTentacule(myServo4,4);
    } else if (temps240 == 188) {
      mouvementTentacule(myServo5,5);
    } else if (temps240 == 189) {
      mouvementTentacule(myServo,0);
    } else if (temps240 == 190) {
      mouvementTentacule(myServo2,2);
    } else if (temps240 == 191) {
      mouvementTentacule(myServo3,3);
    } else if (temps240 == 192) {
      mouvementTentacule(myServo4,4);
    } else if (temps240 == 193) {
      mouvementTentacule(myServo5,5);
    } else if (temps240 == 194) {
      mouvementTentacule(myServo,0);
    } else if (temps240 == 195) {
      mouvementTentacule(myServo1,1);
    } else if (temps240 == 198) {
      mouvementTentacule(myServo3,3);
    } else if (temps240 == 199) {
      mouvementTentacule(myServo4,4);
    } else if (temps240 == 200) {
      mouvementTentacule(myServo5,5);
    } 
    else if (temps240 == 201) {
      mouvementTentacule(myServo,0);
    } else if (temps240 == 202) {
      mouvementTentacule(myServo1,1);
    } else if (temps240 == 203) {
      mouvementTentacule(myServo2,2);
    } else if (temps240 == 204) {
      mouvementTentacule(myServo4,4);
    } else if (temps240 == 205) {
      mouvementTentacule(myServo5,5);
    } else if (temps240 == 206) {
      mouvementTentacule(myServo,0);
    } else if (temps240 == 207) {
      mouvementTentacule(myServo1,1);
    } else if (temps240 == 208) {
      mouvementTentacule(myServo2,2);
    } else if (temps240 == 209) {
      mouvementTentacule(myServo3,3);
    } else if (temps240 == 210) {
      mouvementTentacule(myServo5,5);
    } else if (temps240 == 211) {
      mouvementTentacule(myServo,0);
    } else if (temps240 == 212) {
      mouvementTentacule(myServo1,1);
    } else if (temps240 == 213) {
      mouvementTentacule(myServo2,2);
    } else if (temps240 == 214) {
      mouvementTentacule(myServo3,3);
    } else if (temps240 == 215) {
      mouvementTentacule(myServo4,4);
    } else if (temps240 == 216) {
      mouvementTentacule(myServo,0);
    } else if (temps240 == 217) {
      mouvementTentacule(myServo1,1);
    } else if (temps240 == 218) {
      mouvementTentacule(myServo2,2);
    } else if (temps240 == 219) {
      mouvementTentacule(myServo3,3);
    } else if (temps240 == 220) {
      mouvementTentacule(myServo4,4);
    } else if (temps240 == 221) {
      mouvementTentacule(myServo5,5);
    } 
    if (temps240 > 221) {
      temps240 = 0;
      excitee = !excitee;
    } else {
    temps240++;
    }
    Serial.println(temps240);
  }
  } else {
   reset();
  }
}

void mouvementTentacule(Servo servo, int id) {
  float angle;
  switch(id) {
  case 0 :
    angle = angleServo;
    if (angleServo == 1500) {
      angleServo = 3000;
    } 
    else {
      angleServo = 1500;
    }
    break;
  case 1:
    angle = angleServo1;
    if (angleServo1 == 1500) {
      angleServo1 = 3000;
    } 
    else {
      angleServo1 = 1500;
    }
    break;
  case 2:
    angle = angleServo2;
    if (angleServo2 == 1500) {
      angleServo2 = 3000;
    } 
    else {
      angleServo2 = 1500;
    }
    break;
  case 3:
    angle = angleServo3;
    if (angleServo3 == 800) {
      angleServo3 = 2000;
    } 
    else {
      angleServo3 = 800;
    }
    break;
  case 4:
    angle = angleServo4;
    if (angleServo4 == 800) {
      angleServo4 = 2000;
    } 
    else {
      angleServo4 = 800;
    }
    break;
  case 5:
    angle = angleServo5;
    if (angleServo5 == 800) {
      angleServo5 = 2000;
    } 
    else {
      angleServo5 = 800;
    }
    break;
  }

  if (id < 3) {
    if (angle == 1500) {
      servo.writeMicroseconds(3000);
    } 
    else {
      servo.writeMicroseconds(1500);
    }
  } 
  else {
    if (angle == 800) {
      servo.writeMicroseconds(2000);
    } 
    else {
      servo.writeMicroseconds(800);
    }
  }

}

void reset() {
  myServo.writeMicroseconds(1500);
  myServo1.writeMicroseconds(1500);
  myServo2.writeMicroseconds(1500);
  myServo3.writeMicroseconds(800);
  myServo4.writeMicroseconds(800);
  myServo5.writeMicroseconds(800);

  angleServo = 1500;
  angleServo = 1500;
  angleServo = 1500;
  angleServo = 800;
  angleServo = 800;
  angleServo = 800;
  
   // bpm240 = 250;
  changement240 = 0;
  temps240 = 0;
  
 // excitee = false;



}

void tous() {
  mouvementTentacule(myServo,0);
  mouvementTentacule(myServo1,1);
  mouvementTentacule(myServo2,2);
  mouvementTentacule(myServo3,3);
  mouvementTentacule(myServo4,4);
  mouvementTentacule(myServo5,5);
}












