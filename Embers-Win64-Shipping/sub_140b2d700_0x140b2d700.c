// 函数: sub_140b2d700
// 地址: 0x140b2d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e78568
arg1[1] = 0
arg1[1] = *arg2
__builtin_memset(arg2, 0, 0x20)
arg1[2].d = arg2[1].d
*(arg1 + 0x14) = *(arg2 + 0xc)
arg1[3] = 0
arg1[3] = arg2[2]
arg1[4].d = arg2[3].d
*(arg1 + 0x24) = *(arg2 + 0x1c)
arg1[5].b = arg2[4].b
*(arg1 + 0x29) = *(arg2 + 0x21)
int64_t rcx = arg2[2]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *arg2

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return arg1
