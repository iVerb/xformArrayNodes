/**
    Copyright (c) 2017 Ryan Porter
    You may use, distribute, or modify this code under the terms of the MIT license.
*/

#pragma once

#include <maya/MDataBlock.h>
#include <maya/MPlug.h>
#include <maya/MPxNode.h>
#include <maya/MString.h>
#include <maya/MTypeId.h>

class ComposeMatrixArrayNode : public MPxNode
{
public:
    virtual MStatus         compute(const MPlug& plug, MDataBlock& data);
    static  void*           creator();
    static  MStatus         initialize();

public:
    static MTypeId          NODE_ID;
    static MString          NODE_NAME;

    static MObject          inputTranslateAttr;
    static MObject          inputRotateAttr;
    static MObject          inputQuatAttr;
    static MObject          inputScaleAttr;
    static MObject          inputShearAttr;
    static MObject          inputRotateOrderAttr;
    static MObject          useEulerRotationAttr;

    static MObject          outputMatrixAttr;   
};