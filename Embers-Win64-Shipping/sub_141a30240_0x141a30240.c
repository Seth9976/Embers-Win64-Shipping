// 函数: sub_141a30240
// 地址: 0x141a30240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1 + 0x20
__builtin_memset(arg1, 0, 0x20)
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
*(arg1 + 0x40) = 0xffffffff
*(arg1 + 0x44) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
sub_141a2ef10(arg1 + 0x60)
__builtin_memset(arg1 + 0x110, 0, 0x14)
*(arg1 + 0x124) = data_1439d284c
*(arg1 + 0x128) = -1
*(arg1 + 0x130) = 0
int32_t arg_c = 0
int64_t rax_2 = 0.q
int64_t var_34 = rax_2
int32_t arg_14 = 1
int64_t var_20 = 0xea60.q
char var_2c = 1
int32_t var_14 = 0x80000000
*(arg1 + 0x138) = 1.o
*(arg1 + 0x148) = rax_2.o
*(arg1 + 0x158) = 0.q
*(arg1 + 0x160) = 0x3f800000
*(arg1 + 0x168) = 0
__builtin_memset(arg1 + 0x170, 0, 0x14)
*(arg1 + 0x184) = 0x80000000
*(arg1 + 0x18c) &= 0xc0
*(arg1 + 0x188) = 0
return arg1
