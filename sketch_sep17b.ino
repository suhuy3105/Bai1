// /*New blynk app project
//    Home Page
// */

// //Include the library files
// #define BLYNK_PRINT Serial
// #include <ESP8266WiFi.h>
// #include <BlynkSimpleEsp8266.h>
// #define BLYNK_TEMPLATE_ID           "TMPL6qPmaezNi"
// #define BLYNK_TEMPLATE_NAME         "Quickstart Device"


// #define BLYNK_AUTH_TOKEN "YeA00ObrFCIgTIQXmn0U02ZoZk_ctu-v" //Enter your blynk auth token

// char auth[] = BLYNK_AUTH_TOKEN;
// char ssid[] = "Noi Bo";//Enter your WIFI name
// char pass[] = "laubongon";//Enter your WIFI password

// //Get the button value
// BLYNK_WRITE(V0) {
//   digitalWrite(D0, param.asInt());
// }

// void setup() {
//   //Set the LED pin as an output pin
//   pinMode(D0, OUTPUT);
//   //Initialize the Blynk library
//   Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
// }

// void loop() {
//   //Run the Blynk library
//   Blynk.run();
// }
/*************************************************************

  Blynk using a LED widget on your phone!

  App dashboard setup:
    LED widget on V1
 *************************************************************/

/* Fill-in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID           "TMPL6qPmaezNi"
#define BLYNK_TEMPLATE_NAME         "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "YeA00ObrFCIgTIQXmn0U02ZoZk_ctu-v"

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Noi Bo";
char pass[] = "laubongon";



BlynkTimer timer;
BLYNK_WRITE(V5) {
  digitalWrite(D0, param.asInt());
}


void setup()
{
  // Debug console
  Serial.begin(115200);
  pinMode(D0, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  // You can also specify server:
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, IPAddress(192,168,1,100), 8080);

}

void loop()
{
  Blynk.run();
 
}
