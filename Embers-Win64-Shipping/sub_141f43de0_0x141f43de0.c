// 函数: sub_141f43de0
// 地址: 0x141f43de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xcd].d &= 0xfffffffe
arg1[0xcc] = arg2
int32_t rdx_2 = (zx.d(arg3) | arg1[0xcd].d) & 0xfffffffd
*(arg1 + 0x66c) = arg5
arg1[0xce].d = arg6
arg1[0xcd].d = rdx_2 | (zx.d(arg4) * 2)
sub_141f477c0(arg1, 1)
sub_141f4b670(arg1, zx.o(0), 0)
jump(*(*arg1 + 0x8d8))
