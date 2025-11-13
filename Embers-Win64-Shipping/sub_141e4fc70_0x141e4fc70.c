// 函数: sub_141e4fc70
// 地址: 0x141e4fc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[4] = 0
arg1[2].d = 0x3f800000
*(arg1 + 0x14) = 0x3f800000
arg1[3].d = 0x469c4000
*(arg1 + 0x1c) = 0x41a00000
arg1[5] = 0
void* rcx = &arg1[6]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
__builtin_memset(&arg1[0xe], 0, 0x50)
int32_t rax_1 = arg1[0x20].d
arg1[0x18] = arg3
arg1[0x19].d = 0
arg1[0x20].d = (rax_1 & 0xffff0400) | 0x400
*(arg1 + 0xcc) = 0x3f800000
arg1[0x1a] = 0x3f800000
arg1[0x1b].d = 0xa
*(arg1 + 0xdc) = 0x64
arg1[0x1c] = 0x3f800000
arg1[0x1d] = 0
*(arg1 + 0xf4) = 0
*(arg1 + 0xfc) = 0xbf800000
__builtin_memset(arg1 + 0x104, 0, 0x1c)
arg1[0x25].d = 0
*(arg1 + 0x12c) = 0x469c4000
arg1[0x26].d = 0x469c4000
*(arg1 + 0x134) = 0x469c4000
arg1[0x27].d = 0x469c4000
*(arg1 + 0x13c) = 0x469c4000
arg1[0x28] = 0x41a00000
arg1[0x29] = data_143dbb1f8.q
arg1[0x2a].d = data_143dbb200
__builtin_memset(arg1 + 0x154, 0, 0x1d)
*(arg1 + 0x174) = 0
*(arg1 + 0x17c) = 0
sub_141f7a080(&arg1[0x31])
arg1[0x42].d = 0
__builtin_memset(&arg1[0x43], 0, 0x14)
arg1[0x46] = arg2
arg1[0x47].b = 0
int32_t rax_6 = data_143f39928 + 1
data_143f39928 = rax_6
arg1[0x45].d = rax_6
return arg1
