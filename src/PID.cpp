#include "PID.h"


using namespace std;


PID::PID() {}


PID::~PID() {}


void PID::Init(double Kp, double Ki, double Kd) {

    // Initialize PID controller with the coefficients as the input values.
    PID::Kp = Kp;                           // Proportionnal term
    PID::Ki = Ki;                           // Integral term
    PID::Kd = Kd;                           // Differential term

    PID::p_error = 0.0;                     // Proportionnal error
    PID::i_error = 0.0;                     // Integral error
    PID::d_error = 0.0;                     // Differential error
}


void PID::UpdateError(double cte) {

    // Difference from the previous cte (p_error) to the new cte
    d_error = cte - p_error;

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

