int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  } else {
    return 0;
  }
}

void setup() {
  Serial.begin(9600);

  int brightnessSetting;
  bool switchOn;
  int lampBrightness;

  // Test 1: switch ON, brightness 0
  brightnessSetting = 0;
  switchOn = true;
  lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  Serial.print("Brightness Setting: ");
  Serial.print(brightnessSetting);
  Serial.print(", Switch: ON, Lamp Brightness: ");
  Serial.println(lampBrightness);

  // Test 2: switch ON, brightness 50
  brightnessSetting = 50;
  switchOn = true;
  lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  Serial.print("Brightness Setting: ");
  Serial.print(brightnessSetting);
  Serial.print(", Switch: ON, Lamp Brightness: ");
  Serial.println(lampBrightness);

  // Test 3: switch ON, brightness 100
  brightnessSetting = 100;
  switchOn = true;
  lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  Serial.print("Brightness Setting: ");
  Serial.print(brightnessSetting);
  Serial.print(", Switch: ON, Lamp Brightness: ");
  Serial.println(lampBrightness);

  // Test 4: switch OFF, brightness 0
  brightnessSetting = 0;
  switchOn = false;
  lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  Serial.print("Brightness Setting: ");
  Serial.print(brightnessSetting);
  Serial.print(", Switch: OFF, Lamp Brightness: ");
  Serial.println(lampBrightness);

  // Test 5: switch OFF, brightness 50
  brightnessSetting = 50;
  switchOn = false;
  lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  Serial.print("Brightness Setting: ");
  Serial.print(brightnessSetting);
  Serial.print(", Switch: OFF, Lamp Brightness: ");
  Serial.println(lampBrightness);

  // Test 6: switch OFF, brightness 100
  brightnessSetting = 100;
  switchOn = false;
  lampBrightness = getLampBrightness(switchOn, brightnessSetting);
  Serial.print("Brightness Setting: ");
  Serial.print(brightnessSetting);
  Serial.print(", Switch: OFF, Lamp Brightness: ");
  Serial.println(lampBrightness);
}

void loop() {
}