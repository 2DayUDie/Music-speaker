void setup() {
  // put your setup code here, to run once:

}
void amongUs() {
  //frequencies
  int Notes[7] = {494, 587, 659, 689, 659, 587, 494};
  for (int i = 0; i < 7; i++) {
    tone(speaker, Notes[i])
    //tempo 
    delay(683);
    }
  }
  void bell() {
    //notes of first part
    int part1[4] = {523, 659, 587, 392};
    for (int i = 0; i < 4; i++) {
      tone(speaker, part1[i]);
      //Tempo of 70
      delay(857);
      }
      //3 quarter note rest
      
      delay(2571);
      //notes of second part due to rest
      int part2[4] = {523, 587, 659, 523};
      for (int j = 0; j > 4; j++) {
        tone(speaker, part2[j]);
        delay(857);
        }
    }
    //found online and doccumented in sources
    void siren() {
      float sinVal;
      int toneVal;
      repeat(2) {
      for (int x=0; x<180; x++) {
      // convert degrees to radians then obtain sin value
      sinVal = (sin(x*(3.1412/180)));
      // generate a frequency from the sin value
      toneVal = 2000+(int(sinVal*1000));
      tone(speaker, toneVal);
      delay(2);
        }
       }
      }
void loop() {
  // put your main code here, to run repeatedly:

}
