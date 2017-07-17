# PID-Control

---
## Overview

Aim of the project is to implement and tune PID controller in C++ to maneuver the vehicle around the track.

[Simulator](https://github.com/udacity/self-driving-car-sim/releases) is providing the cross track error (CTE) and the velocity (mph) in order to compute the appropriate steering angle.

Resulting video with simulation record is available on [YouTube](https://www.youtube.com/watch?v=tSrgP2qTNdI).

## Tuning

A **Proportional–Integral–Derivative** controller (PID controller) is a control loop feedback mechanism (controller) commonly used in industrial control systems. [More...](https://en.wikipedia.org/wiki/PID_controller)

**P (Proportionnal coefficient)** - It causes the car to steer proportional (and opposite) to the car's distance from the lane center (CTE).

**I (Integral coefficient)** - Used for compensation of systematic bias.

**D (Differential coefficient)** - Counteracts the P component's tendency to ring and overshoot the center line.

The process of setting the optimal gains for P, I and D to get an ideal response from a control system is called **tuning**.

In this project I used empirical method for tuning of parameters:

- Set I and D to 0.0. Tuning of **P** (**0.3**). Test.

- Tuning of **D** (**3.0**). Test.

- Tuning of **I** (**0.001**). Test. It's not significant difference from 0.0, but with 0.0 car crossed border 2 times.


## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

