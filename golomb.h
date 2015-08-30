
/*
//
// Copyright (c) 2002-2015 Joe Bertolami. All Right Reserved.
//
// golomb.h
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

#ifndef __EVX_EXP_GOLOMB_H__
#define __EVX_EXP_GOLOMB_H__

/* 
//  Exponential Golomb codes conserve space for lower values at the expense
//  of higher values. Thus, these codes are useful for functions with higher
//  probabilities of low valued outputs. 
//   
//  The smallest input symbol, 0, results in a single bit of output, but larger 
//  values may require up to 32 bits of storage space.
//
//  For more information, check out 'Fundamentals of Data Compression' on my 
//  blog at http://www.bertolami.com.
*/

#include "base.h"

/*
// Description:
//   Calculates the exponential golomb code for an unsigned value.
//
// Args:
//   input: the unsigned source symbol to encode.
//   count: (optional) upon return, contains the number of bits written to
//          the output.   
*/
uint32 encode_unsigned_golomb_value(uint16 input, uint8 *count);

/*
// Description:
//   Calculates the unsigned source value for a golomb code. 
//
// Args:
//   input: the unsigned golomb code to decode.
//   count: (optional) upon return, contains the number of bits written to
//          the output.   
*/
uint16 decode_unsigned_golomb_value(uint32 input, uint8 *count);

/*
// Description:
//   Calculates the exponential golomb code for a signed integer value.
//
// Args:
//   input: the signed source symbol to encode.
//   count: (optional) upon return, contains the number of bits written to
//          the output.   
*/
uint32 encode_signed_golomb_value(int16 input, uint8 *count);

/*
// Description:
//   Calculates the signed source value for a given golomb code. 
//
// Args:
//   input: the signed golomb code to decode.
//   count: (optional) upon return, contains the number of bits written to
//          the output.   
*/
int16 decode_signed_golomb_value(uint32 input, uint8 *count);

#endif // __EV_EXP_GOLOMB_H__