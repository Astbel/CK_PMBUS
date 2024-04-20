#ifndef GENERICTYPE_H
#define	GENERICTYPE_H

#include <stdlib.h>
#include <xc.h>

/****************************************************************
 * type define
 ****************************************************************/
typedef unsigned char		uint8_t;				// 8-bit unsigned
typedef unsigned int		uint16_t;				// 16-bit unsigned
typedef unsigned long		uint32_t;				// 32-bit unsigned
typedef unsigned long long	uint64_t;				// 64-bit unsigned
typedef signed char			int8_t;				    // 8-bit signed
typedef signed int			int16_t;				// 16-bit signed
typedef signed long			int32_t;				// 32-bit signed
typedef signed long long	int64_t;			    // 64-bit signed

/****************************************************************
 * ptr function
 ****************************************************************/
typedef void (*callback)(void); //void type



#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
}
#endif

#endif	/* TEMPLATE_H */
