/*
* Argus Open Source
* Software to apply Statistical Disclosure Control techniques
* 
* Copyright 2014 Statistics Netherlands
* 
* This program is free software; you can redistribute it and/or 
* modify it under the terms of the European Union Public Licence 
* (EUPL) version 1.1, as published by the European Commission.
* 
* You can find the text of the EUPL v1.1 on
* https://joinup.ec.europa.eu/software/page/eupl/licence-eupl
* 
* This software is distributed on an "AS IS" basis without 
* warranties or conditions of any kind, either express or implied.
*/

#ifndef R_ProgressListener_h
#define R_ProgressListener_h

class RProgressListener
{
public:
    virtual ~RProgressListener() { }
    virtual void UpdateLowerBound(double LowerBound) = 0;
    virtual void UpdateUpperBound(double UpperBound) = 0;
    virtual void UpdateNumberClosedSubProb(long ClosedSubProb) = 0;
    virtual void UpdateNumberOpenSubProb(long OpenSubProb) = 0;
    //virtual void FireUpdateNumberFeasible(long Feasible);
    //virtual void FireUpdateProgress(long Progress);
};

#endif // R_ProgressListener_h
