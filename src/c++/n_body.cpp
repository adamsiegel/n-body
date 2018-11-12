/*****************************************************************************
 * NAME:    Adam Siegel                                                      *
 * DATE:    September 25, 2018 (started)                                     *
 * PURPOSE: Header file for n-body problem.                                  *
 * NOTES:   See README and License file in main directory.                   *
 *****************************************************************************/

#include "n_body.h"


// Everything in this file is in the n_body namespace //
namespace n_body {

  // ---------------------------------------------------------------------- //
  // Standard constructor //
  NBody::NBody() { }
  
  // ---------------------------------------------------------------------- //
  // Standard destructor //
  NBody::~NBody() { }

  // ---------------------------------------------------------------------- //
  // Setup function  //
  int NBody::Setup() { 

    // Create the solver //
    try {
      solver_ = solver::Solver::Create("Runge-Kutta"); 
    }
    catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }

    // Setting up the solver //
    solver_->Setup();

    return 0;

  }









}



