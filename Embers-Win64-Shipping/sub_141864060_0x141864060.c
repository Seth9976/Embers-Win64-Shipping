// 函数: sub_141864060
// 地址: 0x141864060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
int128_t zmm0 = *arg3
arg1[5] = arg5
*(arg1 + 0x10) = zmm0
arg1[4] = arg4
arg1[6].d = arg6
int64_t rcx = *arg2

if (rcx != 0)
    sub_140a74f90(rcx)

return arg1
