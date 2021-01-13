/*
*	General definitions
*/

#ifndef __INCLUDED_DEFS_H__
#define __INCLUDED_DEFS_H__

#include "APBMemoryMap.h"

//register-access type
#define __IO volatile
#define __I  volatile const

//dereferenced-register types
//Read-Write type
#define _RW8(x) 	(*((volatile int8_t*)  (x)))
#define _RW16(x)	(*((volatile int16_t*) (x)))
#define _RW32(x) 	(*((volatile int32_t*) (x)))
#define _RW8(x) 	(*((volatile uint8_t*) (x)))
#define _RW16(x) 	(*((volatile uint16_t*)(x)))
#define _RW32(x) 	(*((volatile uint32_t*)(x)))

//Read-Only type
#define _R8(x) 	(*((constant volatile int8_t*)  (x)))
#define _R16(x)	(*((constant volatile int16_t*) (x)))
#define _R32(x) 	(*((constant volatile int32_t*) (x)))
#define _R8(x) 	(*((constant volatile uint8_t*) (x)))
#define _R16(x) 	(*((constant volatile uint16_t*)(x)))
#define _R32(x) 	(*((constant volatile uint32_t*)(x)))

#endif //__INCLUDED_DEFS_H__