/* NOTE: Do not edit this file, it is generated by a script:
   Export.py --api gl 4.4 --api wgl 4.4 --api glx 4.4 --api cgl 1.4 --api egl 1.0 --outdir .
*/

/*
  Copyright (c) 2011-2013 NVIDIA Corporation
  Copyright (c) 2011-2013 Cass Everitt
  Copyright (c) 2012-2013 Scott Nations
  Copyright (c) 2012 Mathias Schott
  Copyright (c) 2012-2013 Nigel Stewart
  Copyright (c) 2012-2013 Google Inc.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification,
  are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
  OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
  Intended formatting conventions:
  $ astyle --style=allman --indent=spaces=2 --indent-switches
*/

#ifndef REGAL_LAYER_TEXC_PROCS_H
#define REGAL_LAYER_TEXC_PROCS_H

#include "RegalUtil.h"

REGAL_GLOBAL_BEGIN

#include "RegalPrivate.h"
#include "RegalContext.h"
#include "RegalDispatch.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

void TexCIntercept( Layer *layer, Dispatch::GL & dt );

struct TexCOriginate {

  TexCOriginate() {
    memset(this, 0, sizeof( *this ) );
  }

  REGALGLACTIVETEXTUREPROC glActiveTexture;
  REGALGLACTIVETEXTUREARBPROC glActiveTextureARB;
  REGALGLBINDTEXTUREPROC glBindTexture;
  REGALGLBINDTEXTUREEXTPROC glBindTextureEXT;
  REGALGLDELETETEXTURESPROC glDeleteTextures;
  REGALGLDELETETEXTURESEXTPROC glDeleteTexturesEXT;
  REGALGLGENTEXTURESPROC glGenTextures;
  REGALGLGENTEXTURESEXTPROC glGenTexturesEXT;
  REGALGLGENERATEMIPMAPPROC glGenerateMipmap;
  REGALGLGENERATEMIPMAPEXTPROC glGenerateMipmapEXT;
  REGALGLPIXELSTOREIPROC glPixelStorei;
  REGALGLTEXIMAGE2DPROC glTexImage2D;
  REGALGLTEXSUBIMAGE2DPROC glTexSubImage2D;

  void Initialize( Dispatch::GL & dt ) {
    glActiveTexture = dt.glActiveTexture;
    glActiveTextureARB = dt.glActiveTextureARB;
    glBindTexture = dt.glBindTexture;
    glBindTextureEXT = dt.glBindTextureEXT;
    glDeleteTextures = dt.glDeleteTextures;
    glDeleteTexturesEXT = dt.glDeleteTexturesEXT;
    glGenTextures = dt.glGenTextures;
    glGenTexturesEXT = dt.glGenTexturesEXT;
    glGenerateMipmap = dt.glGenerateMipmap;
    glGenerateMipmapEXT = dt.glGenerateMipmapEXT;
    glPixelStorei = dt.glPixelStorei;
    glTexImage2D = dt.glTexImage2D;
    glTexSubImage2D = dt.glTexSubImage2D;
  }
};

REGAL_NAMESPACE_END

#endif // REGAL_LAYER_TEXC_PROCS_H