#ifndef _PROBLEM_H_
#define _PROBLEM_H_

#include "Array.h"
using namespace QuadProg;

//The objective function
double objfun(double x1, double x2,double *para);

//The gradient of objective function
void Gradient(double x1, double x2,Vector<double>& c,double *para);

//The Hessian Matrix of the objective function
void Hessian(double x1, double x2, Matrix<double>& Q,double *para);

//The gradient of equation constraint function
void GradientCE(double x1, double x2,Matrix<double>& CE,double *para);

//The constant term of equation constraint function
void CE0(double x1, double x2, Vector<double>& ce0,double *para);

//The gradient of inequation constraint function
void GradientCI(double x1, double x2,Matrix<double>& CI,double *para);

//The constant term of inequation constraint function
void CI0(double x1, double x2, Vector<double>& ci0,double *para);

// The value of the Quadratic function
double Quadfun(Matrix<double> Q, Vector<double> c, Vector<double> d);

#endif
