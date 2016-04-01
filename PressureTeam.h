/*!
 * @file
 */

// Copyright Dominic Sears

#ifndef PRESSURETEAM_H_
#define PRESSURETEAM_H_

/*!
 * The PressureTeam class inputs the pressure level
 * of the object, sets the pressure level, and returns the pressure level.
 */
class pressureTeam {
 public:
    explicit pressureTeam(double inputPressure);
    void setPressure(double pressureSet);
    double getPressure(void);
 private:
    /*! The pressure level stored by the current object */
    double pressureLevel;
};

#endif  // PRESSURETEAM_H_
