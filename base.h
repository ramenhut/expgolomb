
/*
//
// Copyright (c) 2002-2014 Joe Bertolami. All Right Reserved.
//
// base.h
//
//   Redistribution and use in source and binary forms, with or without
//   modification, are permitted provided that the following conditions are met:
//
//   * Redistributions of source code must retain the above copyright notice, this
//     list of conditions and the following disclaimer.
//
//   * Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//   DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
//   FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
//   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
//   SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
//   CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//   OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
//   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Additional Information:
//
//   For more information, visit http://www.bertolami.com.
//
*/

#ifndef __EV_BASE_H__
#define __EV_BASE_H__

/**********************************************************************************
//
// Common types
//
**********************************************************************************/

#if defined ( _WIN32 ) || defined ( _WIN64 )
  #include "windows.h"

  typedef INT64 int64;		  
  typedef INT32 int32;		    
  typedef INT16 int16;		     
  typedef INT8  int8; 

  typedef UINT64 uint64;		      
  typedef UINT32 uint32;		        
  typedef UINT16 uint16;		        
  typedef UINT8  uint8;	

  #define inline __inline
#elif defined ( __APPLE__ )
  #include "unistd.h"
  #include "sys/types.h"
  #include "ctype.h"

  typedef int64_t int64;		
  typedef int32_t int32;		
  typedef int16_t int16;		
  typedef int8_t  int8; 

  typedef u_int64_t uint64;	    
  typedef u_int32_t uint32;	    
  typedef u_int16_t uint16;	    
  typedef u_int8_t uint8;	 
#else
     #error "Unsupported target platform detected."
#endif

typedef float float32;         
typedef double float64;           
typedef wchar_t wchar;

#endif // __EV_BASE_H__