#include "SoftwareSerial.h"
  #include "DFRobotDFPlayerMini.h"
  #include "BluetoothSerial.h"
 
  SoftwareSerial mySoftwareSerial(33,32); // RX, TX
  DFRobotDFPlayerMini myDFPlayer;//D14-17TH PIN
  //D27-16TH PIN
  BluetoothSerial ESP_BT;
  const int bt1 = 23;
  const int bt2= 22;
  const int bt3 = 21;
  const int bt4 = 19;
  const int bt5 = 18;
  const int bt6 = 5;
  //int buttonState1 = 0;
  //int buttonState2 = 0;
  //int buttonState3 = 0;
 
  void setup()
  {
 
    mySoftwareSerial.begin(9600);
    Serial.begin(9600);
    myDFPlayer.begin(mySoftwareSerial);
    pinMode(bt1, INPUT);
    pinMode(bt2, INPUT);
     pinMode(bt3, INPUT);
     pinMode(bt4, INPUT);
     pinMode(bt5, INPUT);
     pinMode(bt6, INPUT);
     ESP_BT.begin("ESP32_Control");
  }
 
  void loop()  {
 
  if (ESP_BT.available())
    {
     int incoming = ESP_BT.read();
      int button = incoming - 48 ;
 
  Serial.println(incoming);
  myDFPlayer.volume(30);
    switch (incoming) {
        case 65:  
     myDFPlayer.playMp3Folder(1);
  //  
   break;
   case 66:  
   
     myDFPlayer.playMp3Folder(2);
   
   break;
       case 67:  
     myDFPlayer.playMp3Folder(3);
   
   break;
   case 68:  
   //Set volume value (0~30).
     myDFPlayer.playMp3Folder(4);
   
   break;
     case 69:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(5);
   
   break;
   case 70:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(6);
   
   break;
       case 71:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(7);
   
   break;
   case 72:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(8);
   
   break;
           case 57:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(9);
   
   break;
   case 74:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(10);
   
   break;
       case 75:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(11);
   
   break;
   case 76:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(12);
   
   break;
     case 77:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(13);
   
   break;
   case 78:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(14);
   
   break;
       case 79:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(15);
   
   break;
   case 80:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(16);
   
   break;
        case 81:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(17);
   
   break;
   case 82:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(18);
   
   break;
       case 83:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(19);
   
   break;
   case 84:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(20);
   
   break;
     case 85:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(21);
   
   break;
   case 86:  
             //Set volume value (0~30).
     myDFPlayer.playMp3Folder(22);
   
   break;
       case 87:  
             //Set volume value (0~30).
      myDFPlayer.playMp3Folder(23);
   
   break;
   case 88:  
             //Set volume value (0~30).
      myDFPlayer.playMp3Folder(24);
   
   break;
           case 89:  
             //Set volume value (0~30).
      myDFPlayer.playMp3Folder(25);
   
   break;
   case 90:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(26);
   
   break;
   case 49:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(27);
   
   break;
    case 50:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(28);
   
   break;
    case 51:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(29);
   
   break;
    case 52:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(30);
   
   break;
    case 53:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(31);
   
   break;
    case 54:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(32);
   
   break;
    case 55:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(33);
   
   break;
    case 56:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(34);
   
   break;
    case 110:
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(35);
   
   break;
    case 48:  
             //Set volume value (0~30).
       myDFPlayer.playMp3Folder(36);
   break;
     }
    }
  /////KFVYHDFCK.ECFH. KDXCFHXK.CFN,EDCGB VHUZRK.D
   int b1 = digitalRead(bt1);
   int b2 = digitalRead(bt2);
   int b3 = digitalRead(bt3);
   int b4  = digitalRead(bt4);
   int b5 = digitalRead(bt5);
   int b6 = digitalRead(bt6);
 
   myDFPlayer.volume(30);
   Serial.println(b1);
   Serial.println(b2);
   Serial.println(b3);
   Serial.println(b4);
   Serial.println(b5);
   Serial.println(b6);
   Serial.println("-----End-----");
  if(b1==HIGH)
  {
      if(b2==HIGH)
      {
          if(b3==HIGH)
          {
              if(b4==HIGH)
              {
                  if(b5==HIGH)
                  {
                      myDFPlayer.playMp3Folder(17);
                  }//1 2 3 4 5
                  else
                  {
                      myDFPlayer.playMp3Folder(7);
                  }
              }// 1 2 3 4
              else if(b5==HIGH)
              {
                  myDFPlayer.playMp3Folder(16);
              }//1 2 3 5
              else
              {
                  myDFPlayer.playMp3Folder(6);
              }
          }//1 2 3
          else if(b4==HIGH)
          {
              if(b5==HIGH)
              {
                  if(b6==HIGH)
                  {
                      myDFPlayer.playMp3Folder(25);
                  }//1 2 4 5 6
                  else
                  {
                      myDFPlayer.playMp3Folder(14);
                  }
              }//1 2 4 5
              else
              {
                  myDFPlayer.playMp3Folder(4);
              }
          }//1 2 4
          else if(b5==HIGH)
          {
              if(b6==HIGH)
              {
                  myDFPlayer.playMp3Folder(24);
              }//1 2 5 6
              else
              {
                  myDFPlayer.playMp3Folder(13);
              }
          }// 1 2 5
          else
          {
              myDFPlayer.playMp3Folder(3);
          }
             
      }//1 2
      else if (b3==HIGH)
      {
          if(b4==HIGH)
          {
              if(b5==HIGH)
              {
                  myDFPlayer.playMp3Folder(18);
              }//1 3 4 5
              else
              {
                  myDFPlayer.playMp3Folder(8);
              }
          }// 1 3 4 H
          else if(b5==HIGH)
          {
              if(b6==HIGH)
              {
                  myDFPlayer.playMp3Folder(22);
              }//1 3 5 6
              else
              {
                  myDFPlayer.playMp3Folder(12);
              }
          }// 1 3 5
          else
          {
              myDFPlayer.playMp3Folder(2);
          }
      }// 1 3
      else if(b4==HIGH)
      {
          if(b5==HIGH)
          {
              if(b6==HIGH)
              {
                  myDFPlayer.playMp3Folder(26);
              }
              else
              {
                  myDFPlayer.playMp3Folder(15);
              }//1 4 5 6
          }//1 4 5
          else
          {
              myDFPlayer.playMp3Folder(5);
          }
      }// 1 4
      else if(b5==HIGH)
      {
          if(b6==HIGH)
          {
              myDFPlayer.playMp3Folder(21);
          }//1 5 6
          else
          {
              myDFPlayer.playMp3Folder(11);
          }
      }//1 5
      else
      {
          myDFPlayer.playMp3Folder(1);
      }
  }// END 1
  else if(b2==HIGH)
  {
      if(b3==HIGH)
      {
          if(b4==HIGH)
          {
              if(b5==HIGH)
              {
                  myDFPlayer.playMp3Folder(20);
              }//2 3 4 5
              else if(b6==HIGH)
              {
                  myDFPlayer.playMp3Folder(23);
              }//2 3 4 6
              else
              {
                  myDFPlayer.playMp3Folder(10);
              }
          }//2 3 4
          else if(b5==HIGH)
          {
              myDFPlayer.playMp3Folder(19);
          }// 2 3 5
          else
          {
              myDFPlayer.playMp3Folder(9);
          }
      }//2 3
  }// END 2
  else if(b3==HIGH)
  {
      if(b4==HIGH)
      {
          if(b5==HIGH)
          {
              if(b6==HIGH)
              {
                  myDFPlayer.playMp3Folder(33);
              }//3 4 5 6
              else
              {
                  myDFPlayer.playMp3Folder(32);
              }
          }//3 4 5
          else if(b6==HIGH)
          {
              myDFPlayer.playMp3Folder(30);
          }//3 4 6
          else
          {
              myDFPlayer.playMp3Folder(29);
          }
      }//3 4
      else if(b5==HIGH)
      {
          if(b6==HIGH)
          {
              myDFPlayer.playMp3Folder(34);
          }//3 5 6
          else
          {
              myDFPlayer.playMp3Folder(28);
          }
      }//3 5
      else if(b6==HIGH)
      {
          myDFPlayer.playMp3Folder(31);
      }//3 6
      else
      {
          myDFPlayer.playMp3Folder(27);
      }
  }//END 3
  else if(b4==HIGH)
  {
      if(b5==HIGH)
      {
          if(b6==HIGH)
          {
              myDFPlayer.playMp3Folder(36);
          }//4 5 6
          else
          {
              myDFPlayer.playMp3Folder(35);
          }
      }//4 5
  }//END 4
  delay(700);
  }