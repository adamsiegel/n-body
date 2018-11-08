/*****************************************************************************
 * NAME:    Adam Siegel                                                      *
 * DATE:    September 25, 2018 (started)                                     *
 * PURPOSE: Header file for general purpose numerical solver.                *
 * NOTES:   See README and License file in main directory.                   *
 *****************************************************************************/

// Header files //

#ifndef NBODY_SOLVER_EXCEPTION_H_
#define NBODY_SOLVER_EXCEPTION_H_
#include <exception>  //Header file for exceptions
#endif

#ifndef NBODY_SOLVER_STRING_H_
#define NBODY_SOLVER_STRING_H_
#include <string>
#endif

#ifndef NBODY_SOLVER_STRING_H_H_
#define NBODY_SOLVER_STRING_H_H_
#include <string.h>
#endif

#ifndef NBODY_SOLVER_H_
#define NBODY_SOLVER_H_

// Solver namespace //
//   Main solver    //
namespace solver {

  // Solver exception class                //
  //   Inheritcs from main exception class //
  class SolverInitException : public std::exception {

  public:

    // Exception if the solver is not initialized           //
    //   (Must be some class and not the base solver class) //
    virtual const char* what() const throw() {
      std::string err_msg = "Exception thrown: Must initialize a solver type!";
      err_msg += "\n";
      err_msg += "     DETAILS: Solver can only be called from the derived ";
      err_msg += "              class \n";
      return err_msg.c_str();
    }
    

  protected:
    //None
    
  private:
    //None
    
  };


  // ---------------------------------------------------------------------- //

  

  //Solver class //
  class Solver {


  public:
    // Public Variables //


    //Public Functions //
    Solver();  //Standard constructor
    ~Solver(); //Standard destructor
    virtual int create(std::string solver_type);
    virtual int destroy();
    virtual int solve();
    virtual int setup();

    // ---------------------------------------------------------------------- //
    
  protected:
    // Protected Variables

    
    //Protected Functions
    
    // ---------------------------------------------------------------------- //

  private:
    // Private Variables //
    SolverInitException sol_init_ex;

    //Private Functions //
    
    




  }; //End class


}; //End namespace

#endif
