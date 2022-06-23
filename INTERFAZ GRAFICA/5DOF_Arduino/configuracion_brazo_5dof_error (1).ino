#include <AccelStepper.h>
#include <MultiStepper.h>

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
#define X_STEP_PIN         22
#define X_DIR_PIN          23
#define X_ENABLE_PIN       24

// Joint 5
#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      25

AccelStepper joint1(AccelStepper::DRIVER, E1_STEP_PIN, E1_DIR_PIN);
AccelStepper joint2(AccelStepper::DRIVER, Z_STEP_PIN, Z_DIR_PIN);
AccelStepper joint3(AccelStepper::DRIVER, Y_STEP_PIN, Y_DIR_PIN);
AccelStepper joint4(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN);
//AccelStepper joint5(AccelStepper::DRIVER, E0_STEP_PIN, E0_DIR_PIN);

// Up to 10 steppers can be handled as a group by MultiStepper
MultiStepper steppers;

//test with uint8 converted to long
unsigned int x = 1000;

void setup() {
  //Serial.begin(57600);
  // Configure each stepper
  joint1.setMaxSpeed(10000);                                                             
  joint2.setMaxSpeed(3000);
  joint3.setMaxSpeed(10000);
  joint4.setMaxSpeed(1000);

  // Configuracion de aceleracion del motor paso a paso

  // Then give them to MultiStepper to manage
  steppers.addStepper(joint1);
  steppers.addStepper(joint2);
  steppers.addStepper(joint3);
  steppers.addStepper(joint4);

  pinMode(E0_ENABLE_PIN, OUTPUT);

  digitalWrite(E0_ENABLE_PIN, HIGH);
}

void loop() {  
  long positions[5]; // Array of desired stepper positions

  positions[0] = 0; //hombro 50000+ subir
  positions[1] = 900; //subir bajar muneca -30000 bajar
  positions[2] = 0; //rotacion antebrazo 19000 rotar derecha hacia adentro
  positions[3] = 0; 
  positions[4] = 0; 

  steppers.moveTo(positions);
  steppers.runSpeedToPosition(); // Blocks until all are in position
  delay(1000);
/*
  positions[0] = 0; //joint 5 --------- 180 grados = 50000 pasos
  positions[1] = 0; //joint 4 --------- 90 grados = 50000 pasos
  positions[2] = 0;
  positions[3] = 0; 
  positions[4] = 0; 

  steppers.moveTo(positions);
  steppers.runSpeedToPosition(); // Blocks until all are in position
  delay(50000);*/

  digitalWrite(E0_ENABLE_PIN, LOW);
}
