// 函数: sub_141f89220
// 地址: 0x141f89220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax_2 = *(arg1 + 0x70)
int64_t zmm1 = rax_2[1].q
int32_t rax = *(rax_2 + 0x18)
*arg2 = *rax_2
arg2[1].q = zmm1
*(arg2 + 0x18) = rax
return arg2
