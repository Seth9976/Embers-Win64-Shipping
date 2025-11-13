// 函数: sub_14180b590
// 地址: 0x14180b590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
arg1[2] = 0
arg1[2] = *arg3
*arg3 = 0
arg1[3].d = arg3[1].d
*(arg1 + 0x1c) = *(arg3 + 0xc)
arg3[1] = 0
sub_140b29d90(&arg1[4])
arg1[5].d &= 0xfffffffe
arg1[5].d = ((zx.d(arg4) | arg1[5].d) & 0xfffffffd) | (zx.d(arg5) * 2)
return arg1
