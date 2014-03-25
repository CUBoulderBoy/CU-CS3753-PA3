/*
 * File: pi.c
 * Author: Andy Sayler
 * Project: CSCI 3753 Programming Assignment 3
 * Create Date: 2012/03/07
 * Modify Date: 2012/03/09
 * Description:
 * 	This file contains a simple program for statistically
 *      calculating pi.
 */

/* Local Includes */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <errno.h>
#include "pi.h"

/* Local Defines */


/* Local Functions */
inline double dist(double x0, double y0, double x1, double y1){
    return sqrt(pow((x1-x0),2) + pow((y1-y0),2));
}

inline double zeroDist(double x, double y){
    return dist(0, 0, x, y);
}

void iterative_pi(){

    long i;
    long iterations;
    double x, y;
    double inCircle = 0.0;
    double inSquare = 0.0;
    double pCircle = 0.0;
    double piCalc = 0.0;

	iterations = ITERATIONS;   

    /* Calculate pi using statistical methode across all iterations*/
    for(i=0; i<iterations; i++){
	   x = (random() % (RADIUS * 2)) - RADIUS;
	   y = (random() % (RADIUS * 2)) - RADIUS;
	   
       if(zeroDist(x,y) < RADIUS){
	       inCircle++;
	   }
       
	   inSquare++;
    }

    /* Finish calculation */
    pCircle = inCircle/inSquare;
    piCalc = pCircle * 4.0;

    /* Print result */
    fprintf(stdout, "pi = %f\n", piCalc);

    return;
}
