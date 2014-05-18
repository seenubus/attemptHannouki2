//
//  kinetics.h
//  hannouki
//
//  Created by Guest User on 5/15/14.
//  Copyright (c) 2014 Guest User. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataFile.h"

@protocol kineticsProtocol <NSObject>
void evaluateKinetics(register float rV[], register float initialConditionsVector[], register float parameterVector[]);
@end

@interface kinetics: NSObject <kineticsProtocol>{
    @private
    NSMutableArray * rV;

    @protected
        double _tStart;
        double _tStop;
        double _tStep;
        double _numRates;
        float *rateConstantVector;
        float *initalConditionsVector;
        float *stoichiometricMatrix;
        float *measurementIndexVecto;
        float *parameterVector;
        DataFile * _dataFile;
    
}

-(void) print;

@property (assign) double tStart;
@property (assign) double tStop;
@property (assign) double tStep;
@property (assign) double numRates;
@property (retain) DataFile *dataFile;

-(void) obtainDataFileValues;

@property (retain) NSMutableArray *rV;


@end
