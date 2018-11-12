/*****************************************************************************
 * NAME:    Adam Siegel                                                      *
 * DATE:    September 25, 2018 (started)                                     *
 * PURPOSE: Header file for n-body solver.                                   *
 * NOTES:   See README and License file in main directory.                   *
 *****************************************************************************/

// Header files //
#ifndef NBODY_SOLVER_SOLVER_RK_H_
#define NBODY_SOLVER_SOLVER_RK_H_
#include "solver.h"
#endif

#ifndef NBODY_SOLVER_STDIO_RK_H_
#define NBODY_SOLVER_STDIO_RK_H_
#include <iostream>
#endif




#ifndef NBODY_SOLVER_H
#define NBODY_SOLVER_H

// n-body problem namespace //
//   n-body    //
namespace n_body {

  //n-body problem class //
  class NBody {

     public:
    // Public Variables //
    

    //Public Functions //
    NBody(); //Standard constructor
    ~NBody(); //Standard destructor
    int Setup(); //Setup the n-body problem
    

    // --------------------------------------------------------------------- //
    
  protected:
    // Protected Variables

    
    //Protected Functions
    
    // --------------------------------------------------------------------- //

  private:
    // Private Variables //
    solver::Solver* solver_; //Declare the solver
                             //Main solver to use in any n_body function


    //Private Functions //



  }; //End n-body class


}; //End n-body namespace

#endif
