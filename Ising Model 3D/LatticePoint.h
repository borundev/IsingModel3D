//
//  LatticePoint.h
//  Ising Model 3D
//
//  Created by Borun Chowdhury on 5/29/15.
//  Copyright (c) 2015 Borun Chowdhury and Mouchumi Bhuyan. All rights reserved.
//

#ifndef __Ising_Model_3D__LatticePoint__
#define __Ising_Model_3D__LatticePoint__

#include <stdio.h>

#endif /* defined(__Ising_Model_3D__LatticePoint__) */

class LatticePoint {
public:
    int x,y,z;
    int spin;
    int operator &=(int s);
};