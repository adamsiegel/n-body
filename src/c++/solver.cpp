/*****************************************************************************
 * NAME:    Adam Siegel                                                      *
 * DATE:    September 25, 2018 (started)                                     *
 * PURPOSE: Source file for general purpose numerical solver.                *
 * NOTES:   See README and License file in main directory.                   *
 *****************************************************************************/

#include "solver.h"
#include "runge_kutta.h"

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
  int Solver::create(std::string solver_type) {
    // This function should never be used.                                    //
    // Should always be calling the class which this base class points to.    //
    // If call this without having a base class defined, throw and exception. //
    if ( strcmp(solver_type.c_str(), "Runge-Kutta") ) {
      runge_kutta::RungeKutta *rk;
      //return rk;
    }
    
  }

  // ---------------------------------------------------------------------- //
  
  // Destroy a solver object //
  int Solver::destroy() {
    // This function should never be used.                                    //
    // Should always be calling the class which this base class points to.    //
    // If call this without having a base class defined, throw and exception. //
    
    
  }

  // ---------------------------------------------------------------------- //
  
  // Solver setup //
  int Solver::setup() {
    // This function should never be used.                                    //
    // Should always be calling the class which this base class points to.    //
    // If call this without having a base class defined, throw and exception. //
    throw sol_init_ex;
    
  }
  
  // ---------------------------------------------------------------------- //
  
  // Main solver call //
  int Solver::solve() {
    // This function should never be used.                                    //
    // Should always be calling the class which this base class points to.    //
    // If call this without having a base class defined, throw and exception. //
    throw sol_init_ex;
    
  }












}
