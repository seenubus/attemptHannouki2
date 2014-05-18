//
//  SolveBalanceEqns.m
//  hannouki
//
//  Created by Guest User on 5/15/14.
//  Copyright (c) 2014 Guest User. All rights reserved.
//

#import "SolveBalanceEqns.h"

@implementation SolveBalanceEqns : NSObject 

@synthesize TSIM;
@synthesize X;
@synthesize OBJECTIVE;
@synthesize dataFile = _dataFile;

-(id) init
{
    self = [super init];
    if (self)
    {
        NSMutableArray * X = [[ NSMutableArray alloc] init];
        NSNumber *XFile = [NSNumber numberWithFloat:0.2f];
        [X addObject:XFile];
        
        NSMutableArray * OBJECTIVE = [[NSMutableArray alloc]init];
        NSNumber *Objective = [NSNumber numberWithFloat:0.2f];
        [OBJECTIVE addObject:Objective];
        
        NSArray * TSIM = [[NSArray alloc]init];
        NSNumber *tsim = [NSNumber numberWithFloat:0.2f];
        [TSIM addObject:tsim];
        
        

       
    }
        return self;
   }
    

-(void) obtainDataFileValues
        {
            //how to store float type objects in these vectors/arrays???
            //that's what i'm trying to do here...
            
            self.dataFile = [[DataFile alloc] init];
            NSMutableDictionary *dictionary = [[self dataFile] constructDataStructure];

            
            rateConstantVector = [self.dataFile valueForKey:@"RateConstantVector"];
            NSNumber *num = [NSNumber numberWithFloat:0.2f];
            [rateConstantVector addObject:num];
            
            initialConditionsVector = [self.dataFile valueForKey:@"InitialConditionsVector"];
            NSNumber *fum = [NSNumber numberWithFloat:0.2f];
            [initialConditionsVector addObject:fum];
            
            parameterVector = [self.dataFile valueForKey:@"ParameterVector"];
            NSNumber *gum = [NSNumber numberWithFloat:0.2f];
            [parameterVector addObject:gum];
            
            
        }
 
void SolveBalanceEquations (float TSIM[],  float X[],  float OBJECTIVE[], double tStart, double tStop, double tStep)
{
    BalanceEqns( float TSIM[], float X[], double tStart, double tStop, float initialConditionsVector[])
    {
    
    if (X<0){
    abs(X);
    }
    
    
    return X[];
    }
    
    return;
}

    
@end
