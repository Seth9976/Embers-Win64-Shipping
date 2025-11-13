// 函数: sub_141ed3220
// 地址: 0x141ed3220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_14325ebb0
arg1[5] = &data_14325f0f8
arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x43] = 0
sub_141e4f3c0(&arg1[0x4d])
*(arg1 + 0x319) &= 0xf0
arg1[0x4d] = &data_143209430
arg1[0x63].b = 0x83
*(arg1 + 0x31a) = 0
*(arg1 + 0x31c) = 0
__builtin_memcpy(&arg1[0x64], 
    "\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x48\x43\x00\x80\x3b\x45\x00\x80\xbb\x45", 0x14)
sub_141f7a080(&arg1[0x67])
sub_141f7a080(&arg1[0x78])
float zmm0 = *(arg1 + 0x27c)
*(arg1 + 0x494) = zmm0
zmm0 = zmm0 f+ *(arg1 + 0x28c)
arg1[0x89].d = 0x469c4000
*(arg1 + 0x44c) = 0x469c4000
*(arg1 + 0x454) = 0
arg1[0x8b].d = 0x41f00000
arg1[0x93].d = zmm0
__builtin_memcpy(arg1 + 0x45c, 
    "\x00\x00\x70\x42\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x40\x9c\x46\x00\x00\x80\x3f\xcd\xcc\xcc\x3d\x9a"
"99\x99\x3e", 
    0x34)
__builtin_strncpy(&arg1[0x92], "33s?", 4)
*(arg1 + 0x49c) = 0
sub_141f7a080(&arg1[0x94])
arg1[0xa5] = 0
arg1[0xa6] = 0
zmm0 = *(arg1 + 0x27c)
arg1[0xa8].d = zmm0
zmm0 = zmm0 f+ *(arg1 + 0x28c)
arg1[0xa7].d = 0x3f800000
*(arg1 + 0x53c) = 0x3f800000
arg1[0xa9].d = 0x3f800000
*(arg1 + 0x544) = zmm0
sub_141f7a080(&arg1[0xaa])
__builtin_memset(&arg1[0xbb], 0, 0x30)
void* rcx_5 = &arg1[0xc4]
arg1[0xc2] = 0
arg1[0xc3] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax = *(rcx_5 + 0x10)

if (rax != 0)
    rcx_5 = rax

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0xc8].d = 0xffffffff
*(arg1 + 0x644) = 0
arg1[0xca] = 0
arg1[0xcb].d = 0
__builtin_memset(&arg1[0xce], 0, 0x20)
arg1[0xd2] = 2
__builtin_memset(&arg1[0xd3], 0, 0x20)
arg1[0xd7] = 2
__builtin_memset(&arg1[0xd8], 0, 0x20)
arg1[0xdc] = 2
__builtin_memset(&arg1[0xdd], 0, 0x20)
arg1[0xe1] = 2
arg1[0xe2] = 0
arg1[0xe3] = 0
sub_140d3a3a0(&arg1[0xe4], nullptr)
arg1[0xe5] = 0
void* rcx_7 = &arg1[0xf1]
arg1[0xe6].d = 0xffffffff
*(arg1 + 0x734) = 0
*(arg1 + 0x73c) = 0
arg1[0xef] = 0
arg1[0xf0] = 0
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_1 = *(rcx_7 + 0x10)

if (rax_1 != 0)
    rcx_7 = rax_1

*rcx_7 = 0
*(rcx_7 + 8) = 0
arg1[0xf5].d = 0xffffffff
*(arg1 + 0x7ac) = 0
arg1[0xf7] = 0
arg1[0xf8].d = 0
arg1[0xf9] = 0
char rax_2 = arg1[0x42].b
*(arg1 + 0x89) |= 0xd0
*(arg1 + 0x14d) |= 0x50
*(arg1 + 0x211) &= 0xfe
*(arg1 + 0x212) &= 0xf4
arg1[0x46].d = 0x3f800000
arg1[0x42].b = (rax_2 & 0x54) | 0xa
*(arg1 + 0x23c) = 0x3f800000
arg1[0x48].d = 0x461c4000
arg1[0x4a].d = 0x3f800000
arg1[0x45].d = 0x3f800000
*(arg1 + 0x22c) = 0x3f800000
arg1[0x44].d = 0x3f800000
*(arg1 + 0x224) = 0x3f800000
*(arg1 + 0x254) = 0x469c4000
arg1[0xcc].d = 0x3dcccccd
*(arg1 + 0x234) = 0xa
arg1[0x47].d = 0x64
*(arg1 + 0x214) = 0xffffffff
int64_t rax_3 = data_143f3a910
data_143f3a910 += 1
arg1[0xe8] = rax_3 + 1
int64_t rdx

if (data_143dbb3b4 == 0)
    int64_t arg_8 = 0
    rdx = 0
else
    rdx = arg1[3]

sub_141ee72c0(&arg1[0xf9], rdx)
EnterCriticalSection(&data_143f3a990)
void*** arg_18 = arg1
sub_141ed0280(&data_143a2d6f0, &arg1[0xe8], &arg_18)
LeaveCriticalSection(&data_143f3a990)
return arg1
