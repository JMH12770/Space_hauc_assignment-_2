/*!
 * @file
 */

// Copyright Dominic Sears

#ifndef POWERTEAM_H_
#define POWERTEAM_H_

/*!
 * The PowerTeam class inputs the power level
 * of the object, sets the power level, and returns the power level.
 */
class powerTeam {
 public:
    explicit powerTeam(double inputPower);
    void setPower(double powerSet);
    double getPower(void);
 private:
   /*! The current power level stored by the object */
    double powerLevel;
};

#endif  // POWERTEAM_H_
