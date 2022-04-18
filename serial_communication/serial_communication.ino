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
  Serial.write("41.01724994739295,21.26610019032601|"); //My app expects: "latitude,longitude|" do not forget the "|" after the coordinates
  Serial.flush();
  delay(10000);
  Serial.write("41.03253160170603,21.33991458122485|");
  Serial.flush();
  delay(10000);
}
