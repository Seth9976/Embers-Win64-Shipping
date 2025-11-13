// 函数: sub_141f509d0
// 地址: 0x141f509d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04530(arg1, arg2)
int64_t* rcx = &arg1[0x9a]
*arg1 = &data_14327c478
arg1[5] = &data_14327cdf0
arg1[0x3e] = &data_14327ce20
arg1[0x87].d = 0xffffffff
__builtin_memset(arg1 + 0x43c, 0, 0x54)
__builtin_memset(&arg1[0x94], 0, 0x30)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x9e].d = 0xffffffff
*(arg1 + 0x4f4) = 0
arg1[0xa0] = 0
arg1[0xa1].d = 0
arg1[0xa2] = 0
arg1[0xa3] = 0
__builtin_memset(&arg1[0xa5], 0, 0x20)
__builtin_memset(&arg1[0xae], 0, 0x30)
arg1[0xb7] = 0
arg1[0xc4] = 0
arg1[0xc5].d = 0
*(arg1 + 0x89) |= 0x80
*(arg1 + 0x3a) |= 2
arg1[0xc6] = 0
arg1[7].b = 0
*(arg1 + 0x5a4) = 0
sub_1422ac390(arg1, data_143f3a590, 1)
char rax_1 = arg1[0xb5].b
*(arg1 + 0x5a7) &= 0x26
*(arg1 + 0x8a) &= 0xf7
*(arg1 + 0x5a7) |= 9
*(arg1 + 0x5a9) &= 0xc2
arg1[0xb5].b = (rax_1 & 0xaf) | 0x20
arg1[0xac] = 0x3f800000
*(arg1 + 0x211) = 2
*(arg1 + 0x5ac) = 0x3dcccccd
arg1[0x92].d = 0
*(arg1 + 0x494) = 1
*(arg1 + 0x49c) = 0
arg1[0xad].d = 0
*(arg1 + 0x5a5) = 1
int64_t arg_8 = 0
arg1[0xb7] = 0
return arg1
