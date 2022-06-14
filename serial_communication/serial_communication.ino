// The script is written by Slavko Zdravevski
// If you want to support my work, you can subscribe to my youtube channel: https://bit.ly/3FG9hpK
// I do a lot of interesting things in my free time, so you might find something of your interest or we can exchange ideas and knowledge

//The script works in combination with my android app. If you are using a GPS module with your microcontroller, you might wanna visualize the data that the module returns
//If that's the case you can use my app, and change the serial commands with the data that your module will give you
void setup() {
  Serial.begin(115200);
}

void loop() {
  //I just wrote a random map point, just to show you how it works, change the code and send your coordinates to the phone
  Serial.write("41.037806805413965,21.34574775323119|"); //My app expects: "latitude,longitude|" do not forget the "|" after the coordinates
  Serial.flush();
  delay(5000);
  Serial.write("41.03511284027609,21.339848139262262|");
  Serial.flush();
  delay(5000);
  Serial.write("41.032318982233626,21.335615232425358|");
  Serial.flush();
  delay(5000);
  Serial.write("41.03178015306117,21.330191820376996|");
  Serial.flush();
  delay(5000);
  Serial.write("41.03215932956679,21.322149297386886|");
  Serial.flush();
  delay(5000);
  Serial.write("41.03285780691883,21.316170316308956|");
  Serial.flush();
  delay(5000);
}
