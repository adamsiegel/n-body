/*****************************************************************************
 * NAME:    Adam Siegel                                                      *
 * DATE:    September 25, 2018 (started)                                     *
 * PURPOSE: Source file for general purpose numerical solver.                *
 * NOTES:   See README and License file in main directory.                   *
 *****************************************************************************/

#include "solver.h"
#include "runge_kutta.h"

#include<iostream> //TMP

// Everything here is in the solver namespace //
namespace solver {

  // ---------------------------------------------------------------------- //
  
  // Standard constructor //
  Solver::Solver() { }

  // ---------------------------------------------------------------------- //
  
  // Standard destructor //
  Solver::~Solver() { }


  // ---------------------------------------------------------------------- //
  
  // Create a solver object //
  Solver* Solver::Create(std::string solver_type) {

    // Should always be calling the class which this base class points to.    //
    // If call this without having a base class defined, throw and exception. //
    if ( strcmp(solver_type.c_str(), "Runge-Kutta") == 0 ) {
      runge_kutta::RungeKutta* rk = new runge_kutta::RungeKutta();
      return rk;
    }
    else {
      throw SolverInitException();
    }
    
  }

  // ---------------------------------------------------------------------- //
  
  // Destroy a solver object //
  int Solver::Destroy() {
    // This function should never be used.                                    //
    // Should always be calling the class which this base class points to.    //
    // If call this without having a base class defined, throw and exception. //
    
    
  }

  // ---------------------------------------------------------------------- //
  
  // Solver setup //
  int Solver::Setup() {
    // This function should never be used.                                    //
    // Should always be calling the class which this base class points to.    //
    // If call this without having a base class defined, throw and exception. //
    throw SolverInitException();
    
  }
  
  // ---------------------------------------------------------------------- //
  
  // Main solver call //
  int Solver::Solve() {
    // This function should never be used.                                    //
    // Should always be calling the class which this base class points to.    //
    // If call this without having a base class defined, throw and exception. //
    throw SolverInitException();
    
  }












}
