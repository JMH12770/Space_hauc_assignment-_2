/*!
 * @file
 */

// Copyright Dominic Sears

#include "./PowerTeam.h"

/*!
 * Creates a new powerTeam object with a default power level
 *
 * @param inputPower the default power level to be set.
 */
powerTeam::powerTeam(double inputPower)
{
    powerLevel = inputPower;
} 

/*!
 * Sets a new power level for the powerTeam object
 *
 * @param powerSet the new power level to be stored by the object
 */
void powerTeam::setPower(double powerSet) {
    powerLevel = powerSet;
}

/*!
 * Retrieves the Power Level.
 *
 * @return the power level stored by the powerTeam object
 */
double powerTeam::getPower(void) {
    return powerLevel;
}
