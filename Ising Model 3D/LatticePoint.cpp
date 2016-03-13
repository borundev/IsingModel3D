//
//  LatticePoint.cpp
//  Ising Model 3D
//
//  Created by Borun Chowdhury on 5/29/15.
//  Copyright (c) 2015 Borun Chowdhury and Mouchumi Bhuyan. All rights reserved.
//

#include "LatticePoint.h"

int LatticePoint::operator &=(int s) {
    spin=s;
    return spin;
}