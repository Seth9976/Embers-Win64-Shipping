// 函数: sub_1423133d0
// 地址: 0x1423133d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = *(arg1 + 0x360)
int64_t r9_1 = sx.q(arg3) << 6
int128_t zmm1 = *(r9_1 + rax_1 + 0x10)
*arg2 = *(r9_1 + rax_1)
int128_t zmm0 = *(r9_1 + rax_1 + 0x20)
arg2[1] = zmm1
zmm1 = *(r9_1 + rax_1 + 0x30)
arg2[2] = zmm0
arg2[3] = zmm1
return arg2
