//
//  Lattice.cpp
//  Ising Model 3D
//
//  Created by Borun Chowdhury on 5/29/15.
//  Copyright (c) 2015 Borun Chowdhury and Mouchumi Bhuyan. All rights reserved.
//

#include "Lattice.h"
#include <stdio.h>

#include <stack>
#include <iostream>
#include <fstream>

#include <time.h>
using namespace std;

Lattice::Lattice(int n, float t) {
    N=n;
    T=t;
    
    
    // Initialize random N*N*N lattice
    srand (time(0));
    
    array=new LatticePoint **[N];
    for (int i=0;i<N;i++){
        array[i]=new LatticePoint *[N];
        for(int j=0;j<N;j++){
            array[i][j]= new LatticePoint[N];
        for (int k=0;k<N;k++){
                    array[i][j][=rand() % 2;
            }
            
        }
    }
}