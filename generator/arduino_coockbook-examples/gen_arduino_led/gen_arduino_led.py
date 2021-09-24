f = open("led_blink.ino", "w")
f.write("int led = 13;  // LED connected to digital pin 13\n")
f.write("\n")
f.write("void setup {\n")
f.write("pinMode(led, OUTPUT);\n")
f.write("}\n")
f.write("\n")
f.write("void loop(){\n")
f.write("digitalWrite(led, HIGH);   // set the LED on\n")
f.write("delay(1000);               // wait for one second\n")
f.write("digitalWrite(led, LOW);    // set the LED off\n")
f.write("delay(1000);               // wait for one second\n")
f.write("}\n")
f.close()

# open and read the file after the appending:
#f = open("led_blink.ino", "r")
#print(f.read())

