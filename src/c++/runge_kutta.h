/*****************************************************************************
 * NAME:    Adam Siegel                                                      *
 * DATE:    September 25, 2018 (started)                                     *
 * PURPOSE: Header file for general purpose Runge Kutta ODE solver.          *
 * NOTES:   See README and License file in main directory.                   *
 *****************************************************************************/


// Include files //
#include "solver.h"



// Header files //
#ifndef NBODY_SOLVER_RUNGEKUTTA_H
#define NBODY_SOLVER_RUNGEKUTTA_H



// Solver namespace //
//   Main solver    //
namespace runge_kutta {

  //Solver class //
  class RungeKutta : public solver::Solver {
    
  private:
    // Private Variables //


    //Private Functions //



  public:
    // Public Variables //


    //Public Functions //
    RungeKutta();   //Standard constructor
    ~RungeKutta();  //Standard destructor
    

  }; //End Runge Kutta class


}; //End Runge Kutta namespace

#endif
