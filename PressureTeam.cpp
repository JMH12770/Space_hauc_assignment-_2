/*!
 * @file
 */

// Copyright Dominic Sears

#include "./PressureTeam.h"

 /*!
  * Creates a new pressureTeam object with a default pressureLevel
  * of half the input.
  *
  * @param inputPressure the default pressure level to be set.
  */
pressureTeam::pressureTeam(double inputPressure) {
    pressureLevel = inputPressure / 2;
}

/*!
 * Sets a new pressure level for the pressureTeam object of
 * half the input.
 *
 * @param pressureSet the new pressure level to be stored by the object
 */
void pressureTeam::setPressure(double pressureSet) {
    pressureLevel = pressureSet / 2;
}

/*!
 * Retrieves the pressure Level.
 *
 * @return the pressure level stored by the pressureTeam object
 */
double pressureTeam::getPressure(void) {
    return pressureLevel;
}
