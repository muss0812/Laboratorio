#include <LiquidCrystal_I2C.h>
#include <ros.h>
#include <rospy_tutorials/Floats.h>
#include <AccelStepper.h>
#include <MultiStepper.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

ros::NodeHandle  nh;  // NodeHandle Herencia de ros 

long positions[6] = {0,0,0,0,0,0};

// Joint 1
#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30

// Joint 2
#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       50
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

// Joint 3
#define Y_STEP_PIN         53
#define Y_DIR_PIN          51
#define Y_ENABLE_PIN       49
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15

// Joint 4
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38

// Joint 5
#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

AccelStepper joint1(AccelStepper::DRIVER, E1_STEP_PIN, E1_DIR_PIN);
AccelStepper joint2(AccelStepper::DRIVER, Z_STEP_PIN, Z_DIR_PIN);
AccelStepper joint3(AccelStepper::DRIVER, Y_STEP_PIN, Y_DIR_PIN);
AccelStepper joint4(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN);
//AccelStepper joint5(AccelStepper::DRIVER, E0_STEP_PIN, E0_DIR_PIN);

// Up to 10 steppers can be handled as a group by MultiStepper
MultiStepper steppers;

void setup() {
  
  joint1.setMaxSpeed(5000);                                                             
  joint2.setMaxSpeed(2000);
  joint3.setMaxSpeed(5000);
  joint4.setMaxSpeed(5000);

  steppers.addStepper(joint1);
  steppers.addStepper(joint2);
  steppers.addStepper(joint3);
  steppers.addStepper(joint4);

   lcd.init();
  
  //Encender la luz de fondo.
  lcd.backlight();
    
}

void loop() {
 
   
   lcd.print(String(positions[i]));
}
