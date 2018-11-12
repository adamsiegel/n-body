/*****************************************************************************
 * NAME:    Adam Siegel                                                      *
 * DATE:    September 25, 2018 (started)                                     *
 * PURPOSE: Source file for Runge-Kutta numerical ODE solver.                *
 * NOTES:   See README and License file in main directory.                   *
 *****************************************************************************/

#include "runge_kutta.h"

//TMP
#include <iostream>

// Everything here is in the solver namespace //
namespace runge_kutta {

  // ---------------------------------------------------------------------- //
  // Standard constructor //
  RungeKutta::RungeKutta() { }
  
  // ---------------------------------------------------------------------- //
  // Standard destructor //
  RungeKutta::~RungeKutta() { }

  // ---------------------------------------------------------------------- //
  // Setting up the RK solver code //
  int RungeKutta::Setup() { 

    

  }

  // ---------------------------------------------------------------------- //
  // Main solver code //
  int RungeKutta::Solve() {
    
    // Generic 4th Order Rugne Kutta Method Coupled ODE Solver   //
    //-----------------------------------------------------------//
    //    Solves the equations based on the vector notation:     //
    //                                                           //
    //    y = y(y1, y2, ..., yN)                                 //
    //    f = f(f1, f2, ..., fN)                                 //
    //                                                           //
    //    therefore, we have                                     //
    //                                                           //
    //    dy                                                     //
    //    -- = f(y,t)                                            //
    //    dt                                                     //
    //                                                           //
    //-----------------------------------------------------------//
    


    return 0;
  }

  






}
