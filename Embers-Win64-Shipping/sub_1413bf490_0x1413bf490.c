// 函数: sub_1413bf490
// 地址: 0x1413bf490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].b = arg2[1].b
arg1[3] = 0

if (arg2[3] == 0)
    memmove(&arg1[2], &arg2[2], 4)

int64_t rcx_1 = arg1[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[3] = arg2[3]
arg2[3] = 0
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg2[4].d = 0
*(arg2 + 0x24) = 1
return arg1
