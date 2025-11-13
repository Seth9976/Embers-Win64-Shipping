// 函数: sub_142902eb0
// 地址: 0x142902eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc0) =
    ((zx.d(arg2[0x13]) << 8 | zx.d(arg2[0x12])) << 8 | zx.d(arg2[0x11])) << 8 | zx.d(arg2[0x10])
*(arg1 + 0xc4) =
    ((zx.d(arg2[0x17]) << 8 | zx.d(arg2[0x16])) << 8 | zx.d(arg2[0x15])) << 8 | zx.d(arg2[0x14])
*(arg1 + 0xc8) =
    ((zx.d(arg2[0x1b]) << 8 | zx.d(arg2[0x1a])) << 8 | zx.d(arg2[0x19])) << 8 | zx.d(arg2[0x18])
*(arg1 + 0xcc) =
    ((zx.d(arg2[0x1f]) << 8 | zx.d(arg2[0x1e])) << 8 | zx.d(arg2[0x1d])) << 8 | zx.d(arg2[0x1c])
__builtin_memset(arg1, 0, 0x14)
*(arg1 + 0x14) =
    (((zx.d(arg2[3]) & 0xf) << 8 | zx.d(arg2[2])) << 8 | zx.d(arg2[1])) << 8 | zx.d(*arg2)
*(arg1 + 0x18) = (((zx.d(arg2[7]) & 0xf) << 8 | zx.d(arg2[6])) << 8 | zx.d(arg2[5])) << 8
    | (zx.d(arg2[4]) & 0xfc)
*(arg1 + 0x1c) = (((zx.d(arg2[0xb]) & 0xf) << 8 | zx.d(arg2[0xa])) << 8 | zx.d(arg2[9])) << 8
    | (zx.d(arg2[8]) & 0xfc)
int32_t result = zx.d(arg2[0xc]) & 0xfc
*(arg1 + 0x20) =
    (((zx.d(arg2[0xf]) & 0xf) << 8 | zx.d(arg2[0xe])) << 8 | zx.d(arg2[0xd])) << 8 | result
*(arg1 + 0xe0) = 0
return result
