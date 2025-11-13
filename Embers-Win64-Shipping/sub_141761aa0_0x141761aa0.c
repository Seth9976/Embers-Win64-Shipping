// 函数: sub_141761aa0
// 地址: 0x141761aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = arg2
*arg1 = &data_142fc6e58
arg1[2] = 0
arg1[3].d = 0
int128_t zmm0 = data_142d3f660
__builtin_memset(&arg1[6], 0, 0x12)
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
*(arg1 + 0xd0) = zmm0
*arg1 = &data_142fc6e68
__builtin_memset(&arg1[0x1e], 0, 0x54)
__builtin_memset(&arg1[0x2a], 0, 0x3c)
*(arg1 + 0x18c) = 0x3f800000
__builtin_memset(arg1 + 0x194, 0, 0x38)
*(arg1 + 0x1cc) = 0x3f800000
__builtin_memset(&arg1[0x3a], 0, 0x18)
arg1[0x3d].d = 0xffffffff
*(arg1 + 0x1ec) = 0
*(arg1 + 0x1f4) = 0
return arg1
