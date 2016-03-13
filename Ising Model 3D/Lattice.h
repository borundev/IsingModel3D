//
//  Lattice.h
//  Ising Model 3D
//
//  Created by Borun Chowdhury on 5/29/15.
//  Copyright (c) 2015 Borun Chowdhury and Mouchumi Bhuyan. All rights reserved.
//

#ifndef __Ising_Model_3D__Lattice__
#define __Ising_Model_3D__Lattice__

#include <stdio.h>

#endif /* defined(__Ising_Model_3D__Lattice__) */

#include "LatticePoint.h"


class Lattice {
private:
    int N,T;
    LatticePoint ***array;
    
public:
    int getSpin(int x, int y, int z);
    void setSpin(int x, int y, int z, int spin);
    Lattice(int n, float t);
};