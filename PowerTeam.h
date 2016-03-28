/*!
 * @file
 */

// Copyright Dominic Sears

/*!
 * The PowerTeam class inputs the power level
 * of the object, sets the power level, and returns the power level
 * using 3 different methods/constructors.
 */

#ifndef POWERTEAM_H_
#define POWERTEAM_H_

class powerTeam {
 public:
/*!
 * Receives the input Power for the Power Level.
 */
    explicit powerTeam(double inputPower);
/*!
 * Sets the stated double as the Power Level.
 */
    void setPower(double powerSet);
/*!
 * Retrieves the Power Level, as well as sets the initial PL as nothing.
 */
    double getPower(void);
 private:
    double powerLevel;
};

#endif  // POWERTEAM_H_
