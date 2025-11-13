// 函数: sub_14230aea0
// 地址: 0x14230aea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2
int128_t* rax_1 = sub_141deaf80(rcx, rcx + 0x30, *arg3, arg2[1], arg2[2])
int128_t zmm1 = rax_1[1]
*arg1 = *rax_1
int128_t zmm0 = rax_1[2]
arg1[1] = zmm1
arg1[2] = zmm0
return arg1
