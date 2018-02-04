/* NGL-SmartLEDs-Blink
Version: 04 Feb 18
Started: 04 Feb 18

Uses D9 as an output. Nothing else... but others "reserved" for
NGL purposes genearlly.

Some stmts superfluous to needs of this program... again, they
   are here for general wants of NGL.

"NGL"?.. NoviceGuardLite...
   http://rugguino.com/ngl/index.htm

*/


/*For details of next two, see
 * http://www.arunet.co.uk/tkboyd/ec/WS2812SmartLEDs.htm
 * Do not change, JS, next 3 unless we discuss first.
 */
#include <Adafruit_NeoPixel.h> << **************************
const byte pSmartLedData=9;//Pin data going to Smart LEDs over.
Adafruit_NeoPixel tkbSmartLEDStrip=
   Adafruit_NeoPixel(16,pSmartLedData,NEO_GRB + NEO_KHZ800);


const byte pLEDr=11;//Not part of "official" NGL... a red LED
const byte pLEDg=10;//Not part of "official" NGL... a red LED
const byte pLED0=13;//Leave in
const byte pLED1=12;//Leave in
const byte pLED2=5;//Leave in
const byte pLED3=4;//Leave in

const byte pBu0=3;//Leave in
const byte pBu1=2;//Leave in
const byte pBu2=A3;//Leave in (See pAnIn0 for Bu3)

const byte pAnIn0=A2;//Leave in (See pBu2 for AnIn1)

int iAnIn0;//Leave in

void setup() {
  Serial.begin(9600);//Leave in

  pinMode(pLED0,OUTPUT);//Leave in
  pinMode(pLED1,OUTPUT);//Leave in
  pinMode(pLED2,OUTPUT);//Leave in
  pinMode(pLED3,OUTPUT);//Leave in
  pinMode(pLEDr,OUTPUT);//Leave in (but not part of "official" NGL)
  pinMode(pLEDg,OUTPUT);//Leave in (but not part of "official" NGL)

  pinMode(pBu0,INPUT_PULLUP);//Leave in
  pinMode(pBu1,INPUT_PULLUP);//Leave in
  pinMode(pBu2,INPUT_PULLUP);//Leave in

  tkbSmartLEDStrip.begin();//<< "Always right" "thing" to stay in SmartLED programs.
  tkbSmartLEDStrip.show(); // Initialize all pixels to 'off'
      //Pervious is another "always right" "thing" to stay in SmartLED programs.

}

void loop() {
  tkbSmartLEDStrip.setPixelColor(0,tkbSmartLEDStrip.Color(255,0,0));
  tkbSmartLEDStrip.setPixelColor(1,tkbSmartLEDStrip.Color(255,0,0));
  tkbSmartLEDStrip.setPixelColor(2,tkbSmartLEDStrip.Color(0,255,0));
  tkbSmartLEDStrip.setPixelColor(3,tkbSmartLEDStrip.Color(0,0,255));
  tkbSmartLEDStrip.setPixelColor(4,tkbSmartLEDStrip.Color(0,0,255));
  tkbSmartLEDStrip.setPixelColor(5,tkbSmartLEDStrip.Color(0,0,255));
  tkbSmartLEDStrip.show();//****
  delay(1000);
  }
