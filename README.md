# Arduino Automatic Handwash Dispenser
### A simple automatic handwash dispenser, using Arduino Uno  

***Overview :***  
An automatic hand wash dispenser, which detects the hand and dispenses the handwash. Can be used as an automatic sanitizer dispenser too.  
- Based on the distance between the hand and the sensor, the dispensor activates.  
- If the servo motor is activated, a buzzer is given, indicating the handwash/sanitizer has been dispensed. 
- If the hand is still held in position, servo activates 2 seconds after the first activation.

***Required Components :***  
- Arduino Uno
- Servo Motor
- Piezo Speaker
- Ultrasonic Distance Sensor (HC-SR04)
- Resistors (Optional)

***Connections :***
![image](https://user-images.githubusercontent.com/77038120/152568551-c6275375-78e0-495f-ae7f-80359ca5c8c5.png)  

[Tinkercad Simulation](https://www.tinkercad.com/things/iDxutfmYfYT)

***Versions***  
- v1.0.0 - 2 seconds gap between successive servo activations.  

***Motivation Behind the Project :***  
The idea behind this project is to introduce IoT to my juniors from college. This is basically a simplified version of what we showed them. The original version also includes an LED and an LCD display.  

Visit [My GitHub Profile](https://github.com/Bharadwaj-R) for more simple projects.
