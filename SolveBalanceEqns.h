//
//  SolveBalanceEqns.h
//  hannouki
//
//  Created by Guest User on 5/15/14.
//  Copyright (c) 2014 Guest User. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataFile.h"
#import "BalanceEqns.h"


@protocol SolveBalanceEqnsProtocol <NSObject>
void evaluateSolveBalanceEqns(register float TSIM[], register float X[], register float OUTPUT[]);

@end

@interface SolveBalanceEqns : NSObject <SolveBalanceEqnsProtocol>

{
    @private
    NSArray * TSIM;
    NSMutableArray * X;
    NSMutableArray * OBJECTIVE;
    

@protected

    double _tStart;
    double _tStop;
    double _tStep;
    float *rateConstantVector;
    float *initialConditionsVector;
    float *stoichiometricMatrix;
    float *parameterVector;
    double _numberParameters;
    double _numStates;
    float *measurementSelectionVector;
    DataFile * _dataFile;

}

-(void) print;

@property (assign) double tStart;
@property (assign) double tStop;
@property (assign) double tStep;
@property (retain) DataFile *dataFile;


-(void) obtainDataFileValues;

@property (retain) NSArray *TSIM;
@property (retain) NSMutableArray *X;
@property (retain) NSMutableArray *OBJECTIVE;

@end
