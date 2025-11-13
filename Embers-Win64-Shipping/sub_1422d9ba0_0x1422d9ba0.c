// 函数: sub_1422d9ba0
// 地址: 0x1422d9ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[2].d = 3
arg1[3] = *arg2
arg1[4] = arg2[1]
arg1[5] = arg2[2]
arg1[6].d = *(arg2 + 0x24)
*(arg1 + 0x34) = arg2[5].d
arg1[7].d = *(arg2 + 0x2c)
*(arg1 + 0x3c) = 0xffffffff
arg1[8].b = *(arg2 + 0x34) & 1
*(arg1 + 0x41) = (*(arg2 + 0x34) u>> 1).b & 1
*(arg1 + 0x42) = (*(arg2 + 0x34) u>> 2).b & 1
int32_t rax_11 = *(arg2 + 0x34)
*(arg1 + 0x44) = 0
arg1[9] = 2
arg1[0xa].w = 0
*(arg1 + 0x43) = (rax_11 u>> 3).b & 1
*(arg1 + 0x54) = arg2[6].d
arg1[0xb].d = 0x3f800000
*(arg1 + 0x5c) = 0
__builtin_memset(&arg1[0xc], 0, 0x14)
*(arg1 + 0x74) = -0x40800000
void* rax_14 = arg1[4]
*(arg1 + 0x7c) = 0x3f800000
arg1[0x10].d = 1
arg1[0x11] = 0
int32_t rax_15

if (rax_14 == 0)
    rax_15 = data_1439c7a08
else
    rax_15 = *(rax_14 + 8)

if (rax_15 s> 1)
    return arg1

if (sub_1422eb710() != 0)
    return arg1

arg1[5].d &= 0xfffbffff
return arg1
