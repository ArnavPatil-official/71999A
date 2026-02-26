#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// PORT MAP - update these to your real ports before competition
// Lower intake conveyor motors
inline pros::Motor intake(-3);     // TODO: set correct port and gearset/reversed if needed
inline pros::Motor intake2(-10);    // TODO: set correct port and gearset/reversed if needed

inline ez::Piston match_loader('A');  // false = retracted on boot
inline ez::Piston descorer('B');  // false = retracted on boot
inline ez::Piston stage('H');  // false = retracted on boot


// inline pros::Motor leftFrontMotor(-10, pros::v5::MotorGears::green);
// inline pros::Motor leftMiddleMotor(-6, pros::v5::MotorGears::green);
// inline pros::Motor leftBackMotor(-5, pros::v5::MotorGears::green);

// inline pros::Motor rightFrontMotor(7, pros::v5::MotorGears::green);
// inline pros::Motor rightMiddleMotor(11, pros::v5::MotorGears::green);
// inline pros::Motor rightBackMotor(2, pros::v5::MotorGears::green);