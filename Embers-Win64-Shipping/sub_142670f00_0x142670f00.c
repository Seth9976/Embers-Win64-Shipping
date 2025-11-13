// 函数: sub_142670f00
// 地址: 0x142670f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_1434597e0
memset(&arg1[3], 0, 0x88)
int32_t rax = *(arg1 + 0x7c)
void* rcx_1 = &arg1[0x46]
arg1[0x11].d = 0xa
*(arg1 + 0x8c) = 0xffffffff
*(arg1 + 0x7c) = (rax & 0xffffffc7) | 7
*(arg1 + 0x9c) = 0
*(arg1 + 0xac) = 0
arg1[0x16].d = 1
*(arg1 + 0xb4) = 0x41000000
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1d] = arg2
__builtin_memset(&arg1[0x1e], 0, 0x30)
arg1[0x44] = 0
arg1[0x45] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x5e]
arg1[0x4a].d = 0xffffffff
*(arg1 + 0x254) = 0
arg1[0x4c] = 0
arg1[0x4d].d = 0
*(arg1 + 0x28c) &= 0xfffffffc
*(arg1 + 0x28c) |= 4
arg1[0x52].d = 0
__builtin_memcpy(&arg1[0x54], 
    "\xfa\x7e\x6a\xbc\x74\x93\x48\x3f\xfc\xa9\xf1\xd2\x4d\x62\x70\x3f\x00\x00\x80\xbf", 0x14)
arg1[0x53] = 0
__builtin_strncpy(arg1 + 0x2b4, "333?", 7)
__builtin_memset(&arg1[0x58], 0, 0x30)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x62].d = 0xffffffff
*(arg1 + 0x314) = 0
arg1[0x64] = 0
arg1[0x65].d = 0
arg1[0x66].b = 0
*(arg1 + 0x334) = 0
__builtin_memset(&arg1[0xe7], 0, 0x18)
__builtin_memset(&arg1[0x12a], 0, 0x20)
arg1[0x12e] = 0x3f647ae147ae147b
arg1[0x12f] = 0
arg1[0x130].b = 0
return arg1
