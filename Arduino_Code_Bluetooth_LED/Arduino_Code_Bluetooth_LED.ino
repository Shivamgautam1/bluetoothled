/* Example Bluetooth LED code
 *  Code Written by Shivam Gautam (www.amritsar.tech)
 *  www.github.io/shivamgautam1
 *  Install the app from the github repo (Source code included)
 *  www.github.io/shivamgautam1/bluetoothled
 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX
int ledpin=13;
int BluetoothData;

void setup() {
  mySerial.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop() {
   if (mySerial.available()){
      BluetoothData=mySerial.read();
      if(BluetoothData=='1'){ 
         digitalWrite(ledpin,1);
      }
      if (BluetoothData=='0'){
      digitalWrite(ledpin,0);
      }
    }
  delay(100);
}
