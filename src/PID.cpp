#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {

    // Initialize PID controller with the coefficients as the input values.
    PID::Kp = Kp;
    PID::Ki = Ki;
    PID::Kd = Kd;
}


void PID::UpdateError(double cte) {

    // Difference from the previous cte (p_error) to the new cte
    d_error = (cte - p_error);

    // Set to the new cte
    p_error = cte;

    // Sum of cte's at this point
    i_error += cte;
}


double PID::TotalError() {

    // Total error of each coefficient multiplied by the respective error
    double t_error = -Kp * p_error - Kd * d_error - Ki * i_error;

    return t_error;
}

