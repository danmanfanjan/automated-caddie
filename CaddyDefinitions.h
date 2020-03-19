// Blynk Auth
char auth[] = "0UszaTLC_Isz14H8N3ReHEIjGv2bDV5u";

// Pin variables
#define SERVO_PIN 3

#define GPS_TX_PIN 16

#define BLUETOOTH_TX_PIN 18
#define BLUETOOTH_RX_PIN 19

#define MOTOR_A_EN_PIN 2
#define MOTOR_B_EN_PIN 3
#define MOTOR_A_IN_1_PIN 30
#define MOTOR_A_IN_2_PIN 31
#define MOTOR_B_IN_1_PIN 33
#define MOTOR_B_IN_2_PIN 34

#define US_1_TX_PIN 22
#define US_1_RX_PIN 23
#define US_2_TX_PIN 24
#define US_2_RX_PIN 25
#define US_3_TX_PIN 26
#define US_3_RX_PIN 27

// If one motor tends to spin faster than the other, add offset
#define MOTOR_A_OFFSET 20
#define MOTOR_B_OFFSET 0

// You must then add your 'Declination Angle' to the compass, which is the 'Error' of the magnetic field in your location.
// Find yours here: http://www.magnetic-declination.com/
// Mine is: 13° 24' E (Positive), which is ~13 Degrees, or (which we need) 0.23 radians
#define DECLINATION_ANGLE -0.192f

// The offset of the mounting position to true north
// It would be best to run the /examples/magsensor sketch and compare to the compass on your smartphone
#define COMPASS_OFFSET 0.0f

// How often the GPS should update in MS
// Keep this above 1000
#define GPS_UPDATE_INTERVAL 1000

// Number of changes in movement to timeout for GPS streaming
// Keeps the cooler from driving away if there is a problem
#define GPS_STREAM_TIMEOUT 18

// Number of changes in movement to timeout for GPS waypoints
// Keeps the cooler from driving away if there is a problem
#define GPS_WAYPOINT_TIMEOUT 45

// PWM write for servo locations
#define SERVO_LID_OPEN 20
#define SERVO_LID_CLOSE 165

// Definitions (don't edit these)
struct GeoLoc {
  float lat;
  float lon;
};

enum CoolerLid {
  OPENED,
  CLOSED
};
