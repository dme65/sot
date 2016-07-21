/* 
 * File:   sot.h
 * Author: davideriksson
 *
 * Created on July 18, 2016, 4:49 PM
 */

#ifndef SOT_H
#define SOT_H

#include "sot_bits/surrogate.h"
#include "sot_bits/adaptive_sampling.h"
#include "sot_bits/common.h"
#include "sot_bits/experimental_design.h"
#include "sot_bits/genetic_algorithm.h"
#include "sot_bits/kNN.h"
#include "sot_bits/dds.h"
#include "sot_bits/optimizer.h"
#include "sot_bits/rbf.h"
#include "sot_bits/shepard.h"
#include "sot_bits/test_problems.h"
#include "sot_bits/utils.h"

// Useful typedefs
namespace sot {    
    typedef RBFInterpolant<CubicKernel,LinearTail> CubicRBF;
    typedef RBFInterpolant<ThinPlateKernel,LinearTail> TPSRBF;
    typedef SymmetricLatinHypercube SLHD;
    typedef LatinHypercube LHD;
}

#endif /* SOT_H */

