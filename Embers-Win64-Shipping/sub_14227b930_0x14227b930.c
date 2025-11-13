// 函数: sub_14227b930
// 地址: 0x14227b930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x265c) = arg2
int128_t zmm0 = *arg5
int32_t rax_1 = *(arg1 + 0x2710) & 0xfffffff7
*(arg1 + 0x2660) = arg3
*(arg1 + 0x2664) = arg4
uint32_t result = zx.d(arg7) << 0xb
*(arg1 + 0x2668) = arg4
*(arg1 + 0x2710) = ((zx.d(arg6) << 3 | rax_1) & 0xfffff7ff) | result | 0x1004
*(arg1 + 0x24c) = zmm0
return result
