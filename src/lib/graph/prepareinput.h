//
//  prepareinput.h
//  jpcnn
//
//  Created by Peter Warden on 1/9/14.
//  Copyright (c) 2014 Jetpac, Inc. All rights reserved.
//

#ifndef INCLUDE_PREPAREINPUT_H
#define INCLUDE_PREPAREINPUT_H

#include "jpcnn.h"

#include "basenode.h"

class PrepareInput : BaseNode {
public:

  PrepareInput(Buffer* dataMean, bool useCenterOnly=false, bool needsFlip=true);
  ~PrepareInput();

  Buffer* run(Buffer* input);

  Buffer* _dataMean;
  bool _useCenterOnly;
  bool _needsFlip;
};

#endif // INCLUDE_PREPAREINPUT_H

