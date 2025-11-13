// 函数: sub_141f2e1b0
// 地址: 0x141f2e1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04660(arg1, arg2)
*arg1 = &data_143273d68
int32_t var_10 = 0
arg1[5] = &data_1432742f0
__builtin_memset(&arg1[0x25], 0, 0x24)
*(arg1 + 0x14c) = 0xffffffff
arg1[0x2a].d = 0
*(arg1 + 0x194) = 0xffffffff
arg1[0x33].d = 0
char rax = arg1[0x1f].b
*(arg1 + 0x8a) |= 0x10
arg1[0x1d].b &= 0x7e
arg1[0x1f].b = (rax & 0xef) | 0x68
char rax_1 = *(arg1 + 0xf9) & 0xf0
*(arg1 + 0xc4) = _mm_unpacklo_ps(0x3f800000, 0)
*(arg1 + 0xf9) = rax_1 | 0x10
*(arg1 + 0xcc) = 0
*(arg1 + 0x10c) = 0x3f800000
*(arg1 + 0x114) = 0x3f19999a
arg1[0x23].d = 0x3e4ccccd
*(arg1 + 0x11c) = 0x40a00000
__builtin_memcpy(arg1 + 0x154, 
    "\xcd\xcc\x4c\x3d\x04\x00\x00\x00\x01\x00\x00\x00\xcd\xcc\xcc\x3d\xcd\xcc\x4c\x3d\x00\x00\x96\x43\x"
"00\x00\xfa\x43", 
    0x1c)
*(arg1 + 0xfc) = 0x3f800000
arg1[0x20] = data_14399f678
arg1[0x21].d = data_14399f680
return arg1
