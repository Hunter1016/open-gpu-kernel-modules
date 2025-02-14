/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

/* THIS FILE IS AUTOMATICALLY GENERATED, DO NOT EDIT! */

#include "core/bin_data.h"
#include "rmflcnbl.h"
#include "nvBinSegment.h"
#include "../src/kernel/core/bin_data_pvt.h"

//
// Forward declarations.
// These are needed for generating the bindata access functions, which use
// "struct X" as a parameter. This is easier than #include-ing all the necessary
// headers. TODO: consider sharing a list of forward struct declarations with
// e.g. eng_desc.h?
//
struct KernelGsp;
struct KernelSec2;

//
// Default segment for bindata to put the data arrays to paged memory.
// This segment is never locked.
//
CONS_SEGMENT("PAGErGEN")

#if !defined(NVLOG_PARSING)

struct BINDATA_STORAGE_PVT_ALL
{
#define BINDATA_NO_SEGMENTS
#define BINDATA_INCLUDE_STORAGE_PVT_DECL

#include "g_bindata_kgspGetBinArchiveGspRmBoot_TU102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GA100.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GA102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_AD102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GH100.c"
#include "g_bindata_kgspGetBinArchiveGspRmFmcGfwDebugSigned_GH100.c"
#include "g_bindata_kgspGetBinArchiveGspRmFmcGfwProdSigned_GH100.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_TU102.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_TU116.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_GA100.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_GA102.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_AD102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_TU102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_TU116.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_GA100.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_GA102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_AD102.c"
#include "g_bindata_ksec2GetBinArchiveBlUcode_TU102.c"

#undef BINDATA_INCLUDE_STORAGE_PVT_DECL
#undef BINDATA_NO_SEGMENTS
};

// First include the data as it's referenced by storage_pvt
// Also useful to keep the NvU8 data packed together so we can merge multiple
// buffers into a single chunk for allocations.
#define BINDATA_INCLUDE_DATA

#include "g_bindata_kgspGetBinArchiveGspRmBoot_TU102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GA100.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GA102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_AD102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GH100.c"
#include "g_bindata_kgspGetBinArchiveGspRmFmcGfwDebugSigned_GH100.c"
#include "g_bindata_kgspGetBinArchiveGspRmFmcGfwProdSigned_GH100.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_TU102.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_TU116.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_GA100.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_GA102.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_AD102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_TU102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_TU116.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_GA100.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_GA102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_AD102.c"
#include "g_bindata_ksec2GetBinArchiveBlUcode_TU102.c"

#undef BINDATA_INCLUDE_DATA

BINDATA_CONST struct BINDATA_STORAGE_PVT_ALL g_bindata_pvt =
{
#define BINDATA_NO_SEGMENTS
#define BINDATA_INCLUDE_STORAGE_PVT_DEFN

#include "g_bindata_kgspGetBinArchiveGspRmBoot_TU102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GA100.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GA102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_AD102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GH100.c"
#include "g_bindata_kgspGetBinArchiveGspRmFmcGfwDebugSigned_GH100.c"
#include "g_bindata_kgspGetBinArchiveGspRmFmcGfwProdSigned_GH100.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_TU102.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_TU116.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_GA100.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_GA102.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_AD102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_TU102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_TU116.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_GA100.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_GA102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_AD102.c"
#include "g_bindata_ksec2GetBinArchiveBlUcode_TU102.c"

#undef BINDATA_INCLUDE_STORAGE_PVT_DEFN
#undef BINDATA_NO_SEGMENTS
};

const NvU32 g_bindata_pvt_count = sizeof(g_bindata_pvt) / sizeof(BINDATA_STORAGE_PVT);

// Lastly, include everything else..
#define BINDATA_INCLUDE_ARCHIVE
#define BINDATA_INCLUDE_FUNCTION

#include "g_bindata_kgspGetBinArchiveGspRmBoot_TU102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GA100.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GA102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_AD102.c"
#include "g_bindata_kgspGetBinArchiveGspRmBoot_GH100.c"
#include "g_bindata_kgspGetBinArchiveGspRmFmcGfwDebugSigned_GH100.c"
#include "g_bindata_kgspGetBinArchiveGspRmFmcGfwProdSigned_GH100.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_TU102.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_TU116.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_GA100.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_GA102.c"
#include "g_bindata_kgspGetBinArchiveBooterLoadUcode_AD102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_TU102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_TU116.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_GA100.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_GA102.c"
#include "g_bindata_kgspGetBinArchiveBooterUnloadUcode_AD102.c"
#include "g_bindata_ksec2GetBinArchiveBlUcode_TU102.c"

#undef BINDATA_INCLUDE_FUNCTION
#undef BINDATA_INCLUDE_ARCHIVE

#endif // !defined(NVLOG_PARSING)
