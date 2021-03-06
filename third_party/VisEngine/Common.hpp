/**
 * projectM -- Milkdrop-esque visualisation SDK
 * Copyright (C)2003-2007 projectM Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * See 'LICENSE.txt' included within this release
 *
 */
/**
 * $Id: Common.hpp,v 1.1 2009-09-17 14:26:03 jeanfrancois Exp $
 *
 * $Log: Common.hpp,v $
 * Revision 1.1  2009-09-17 14:26:03  jeanfrancois
 * First visualisation version
 *
 */

#ifndef COMMON_H
#define COMMON_H

#include "FixedPoint.h"
#include <stdarg.h>

#ifdef _MSC_VER
#define strcasecmp(s, t) _strcmpi(s, t)
#endif

#ifdef DEBUG
//extern FILE *debugFile;
#endif

#ifdef MACOS
#include <cstdio>
extern FILE *fmemopen(void *buf, size_t len, const char *pMode);
#endif /** MACOS */

#include "dlldefs.h"

#define DEFAULT_FONT_PATH "/home/carm/fonts/courier1.glf"
#define MAX_TOKEN_SIZE 512
#define MAX_PATH_SIZE 4096

#define STRING_BUFFER_SIZE 1024*150
#define STRING_LINE_SIZE 1024

			 
#ifdef LINUX
#include <cstdlib>
#endif
			 
#ifdef LINUX
#define projectM_isnan isnan
#endif

#ifdef LINUX
#define projectM_isnan isnan
#endif

#ifdef WIN32
#define projectM_isnan(x) ((x) != (x))
#endif

#ifdef MACOS
#define projectM_isnan(x) ((x) != (x))
#endif

#ifdef LINUX
//#define projectM_fmax fmax
#define projectM_fmax(x,y) ((x) >= (y) ? (x): (y))
#endif

#ifdef WIN32
#define projectM_fmax(x,y) ((x) >= (y) ? (x): (y))
#endif

#ifdef MACOS
#define projectM_fmax(x,y) ((x) >= (y) ? (x): (y))
#endif

#ifdef LINUX
//#define projectM_fmin fmin
#define projectM_fmin(x,y) ((x) <= (y) ? (x): (y))
#endif

#ifdef WIN32
#define projectM_fmin(x,y) ((x) <= (y) ? (x): (y))
#endif

#ifdef MACOS
#define projectM_fmin(x,y) ((x) <= (y) ? (x): (y))
#endif

#ifndef TRUE
#define TRUE true
#endif

#ifndef FALSE
#define FALSE false
#endif


#define MAX_FLOAT_SIZE  mathval(32767.0f)
#define MIN_FLOAT_SIZE mathval(-32767.0f)

#define MAX_INT_SIZE  10000000
#define MIN_INT_SIZE -10000000

/* default mathtype initial value */
#define DEFAULT_FLOAT_IV mathval(0.0f)

/* default mathtype lower bound */
#define DEFAULT_FLOAT_LB MIN_FLOAT_SIZE 

/* default mathtype upper bound */
#define DEFAULT_FLOAT_UB MAX_FLOAT_SIZE 

#ifdef WIN32
#include <mathtype.h>
#define isnan _isnan
#endif /** WIN32 */

/** Per-platform path separators */
#define WIN32_PATH_SEPARATOR '\\'
#define UNIX_PATH_SEPARATOR '/'
#ifdef WIN32
#define PATH_SEPARATOR WIN32_PATH_SEPARATOR
#else
#define PATH_SEPARATOR UNIX_PATH_SEPARATOR
#endif /** WIN32 */

#define DWRITE printf
/*inline void DWRITE( char *fmt, ... ) {
	return;
    va_list args;
    va_start( args, fmt );
    va_end( args );
  }*/

#endif


