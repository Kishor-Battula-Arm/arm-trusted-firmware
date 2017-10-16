/*
 * Copyright (c) 2016-2017, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Build platform specific handling.
 * This allows for builds on non-Posix platforms
 * e.g. Visual Studio on Windows
 */

#ifndef __FIPTOOL_PLATFORM_H__
#	define __FIPTOOL_PLATFORM_H__

#	ifndef _MSC_VER

		/* Not Visual Studio, so include Posix Headers. */
#		include <getopt.h>
#		include <openssl/sha.h>
#		include <unistd.h>

#		define  BLD_PLAT_STAT stat

#	else

		/* Visual Studio. */

#	endif

#endif /* __FIPTOOL_PLATFORM_H__ */
