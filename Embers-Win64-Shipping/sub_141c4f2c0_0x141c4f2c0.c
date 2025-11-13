// 函数: sub_141c4f2c0
// 地址: 0x141c4f2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_14320a4a0
arg1[5] = &data_14320a9f0
sub_141e4f3c0(&arg1[0x40])
*(arg1 + 0x2b1) &= 0xf0
arg1[0x40] = &data_143209430
arg1[0x56].b = 0x83
*(arg1 + 0x2b2) = 0
*(arg1 + 0x2b4) = 0
__builtin_memcpy(&arg1[0x57], 
    "\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x48\x43\x00\x80\x3b\x45\x00\x80\xbb\x45", 0x14)
sub_141f7a080(&arg1[0x5a])
sub_141f7a080(&arg1[0x6b])
float zmm0 = *(arg1 + 0x214)
*(arg1 + 0x42c) = zmm0
zmm0 = zmm0 f+ *(arg1 + 0x224)
arg1[0x7c].d = 0x469c4000
*(arg1 + 0x3e4) = 0x469c4000
*(arg1 + 0x3ec) = 0
arg1[0x7e].d = 0x41f00000
arg1[0x86].d = zmm0
__builtin_memcpy(arg1 + 0x3f4, 
    "\x00\x00\x70\x42\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x40\x9c\x46\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\x9a"
"99\x99\x3e", 
    0x34)
__builtin_strncpy(&arg1[0x85], "33s?", 4)
*(arg1 + 0x434) = 0
sub_141f7a080(&arg1[0x87])
arg1[0x98] = 0
arg1[0x99] = 0
zmm0 = *(arg1 + 0x214)
arg1[0x9b].d = zmm0
zmm0 = zmm0 f+ *(arg1 + 0x224)
arg1[0x9a].d = 0x3f800000
*(arg1 + 0x4d4) = 0x3f800000
arg1[0x9c].d = 0x3f800000
*(arg1 + 0x4dc) = zmm0
sub_141f7a080(&arg1[0x9d])
__builtin_memset(&arg1[0xae], 0, 0x30)
void* rcx_5 = &arg1[0xb7]
arg1[0xb5] = 0
arg1[0xb6] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax = *(rcx_5 + 0x10)

if (rax != 0)
    rcx_5 = rax

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0xbb].d = 0xffffffff
*(arg1 + 0x5dc) = 0
arg1[0xbd] = 0
arg1[0xbe].d = 0
__builtin_memset(&arg1[0xc2], 0, 0x40)
__builtin_memset(&arg1[0xcc], 0, 0x20)
arg1[0xd0] = 2
int64_t* rax_1 = j_sub_140a82f30(0x50)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0
    rax_1[2] = 0
    rax_1[4] = 0

arg1[0xd7] = rax_1
arg1[0xd6] = rax_1
int64_t* rax_2 = j_sub_140a82f30(0x10)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0

arg1[0xd9] = rax_2
arg1[0xd8] = rax_2
*(arg1 + 0x89) &= 0x6f
*(arg1 + 0x89) |= 0x10
arg1[0x3e].b |= 2
*(arg1 + 0x14d) |= 0x10
arg1[0xca].b &= 0xfe
arg1[0xca].b |= 4
arg1[0xd4].w = 0
arg1[0xd2] = 0
arg1[0xbf] = data_143f59388
*(arg1 + 0x68c) = 0x400
return arg1
