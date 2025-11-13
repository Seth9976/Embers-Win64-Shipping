// 函数: sub_141760e40
// 地址: 0x141760e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = data_142d3f660
*arg1 = &data_142fc6e58
arg1[1].b = arg2
__builtin_memset(&arg1[6], 0, 0x12)
arg1[2] = 0
arg1[3].d = 0
*(arg1 + 0x44) = 0xffffffff
arg1[9] = 0
arg1[0xa].d = 0
void* rcx = &arg1[0xb]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
__builtin_memset(&arg1[0xf], 0, 0x54)
*arg1 = &data_142fc6e60
*(arg1 + 0xd0) = zmm0
return arg1
