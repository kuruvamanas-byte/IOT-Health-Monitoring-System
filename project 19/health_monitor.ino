Read temperature
       ↓
Read heart rate
       ↓
Read SpO₂
       ↓
Validate sensor data
       ↓
Display on OLED
       ↓
Check thresholds
       ↓
 ┌─────┴─────┐
Normal       Abnormal
  ↓             ↓
Green LED    Red LED
              Buzzer
       ↓
Send data through Wi-Fi
       ↓
MQTT / IoT dashboard
