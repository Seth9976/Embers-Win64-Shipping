// 函数: sub_1413510c0
// 地址: 0x1413510c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xb8)
int128_t* rax_1 = (*(*rcx + 0x10))(rcx)
int128_t zmm1 = rax_1[1]
*arg2 = *rax_1
int128_t zmm0 = rax_1[2]
arg2[1] = zmm1
zmm1 = rax_1[3]
arg2[2] = zmm0
zmm0 = rax_1[4]
arg2[3] = zmm1
arg2[4] = zmm0
return arg2
