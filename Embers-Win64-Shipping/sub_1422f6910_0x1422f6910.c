// 函数: sub_1422f6910
// 地址: 0x1422f6910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = 0x3f800000
*arg1 = 0
arg1[1].d = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x1c) = 0x3f800000
*(arg1 + 0x24) = 0
*(arg1 + 0x2c) = 0x3f800000
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0x3f800000
__builtin_memset(&arg1[8], 0, 0x2c)
*(arg1 + 0x6c) = 0x3f800000
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0x3f800000
*(arg1 + 0x84) = 0
*(arg1 + 0x8c) = 0x3f800000
*(arg1 + 0x94) = 0
*(arg1 + 0x9c) = 0x3f800000
arg1[0x14] = 0
arg1[0x15].b = arg9
arg1[0x16].d = 2
*(arg1 + 0xac) = 2

if (arg9 == 0)
    arg1[0x14] = arg2[1]
    *(arg1 + 0x60) = arg5[2]
    *(arg1 + 0x80) = arg6[2]
    *(arg1 + 0x70) = arg5[3]
    *(arg1 + 0x90) = arg6[3]
else
    arg1[8] = *arg2
    arg1[9] = arg3
    arg1[0xa] = arg4
    *arg1 = *arg5
    *(arg1 + 0x20) = *arg6
    *(arg1 + 0x10) = arg5[1]
    *(arg1 + 0x30) = arg6[1]

*(arg1 + 0xb4) = *arg7
*(arg1 + 0xbc) = *arg8
return arg1
