// 函数: sub_141c910f0
// 地址: 0x141c910f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
arg1[1].d = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(arg1, rsi.d, 0)
    memcpy(*arg1, rbp, (rsi << 3).d)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int64_t rbp_1 = sx.q(arg2[3].d)
int64_t r14 = arg2[2]
arg1[3].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1405c4a00(&arg1[2], rbp_1.d, 0)
    memcpy(arg1[2], r14, (rbp_1 << 3).d)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int64_t rbp_2 = sx.q(arg2[5].d)
int64_t r14_1 = arg2[4]
arg1[5].d = rbp_2.d

if (rbp_2.d != 0)
    sub_1405c4a00(&arg1[4], rbp_2.d, 0)
    memcpy(arg1[4], r14_1, (rbp_2 << 3).d)
else
    *(arg1 + 0x2c) = 0

arg1[6] = 0
int64_t rbp_3 = sx.q(arg2[7].d)
int64_t r14_2 = arg2[6]
arg1[7].d = rbp_3.d

if (rbp_3.d != 0)
    sub_1405c4a00(&arg1[6], rbp_3.d, 0)
    memcpy(arg1[6], r14_2, (rbp_3 << 3).d)
else
    __builtin_memset(arg1 + 0x3c, 0, 0x14)

void* rdx_8 = &arg1[0xa]
*(rdx_8 + 0x1c) = 0x80
void* rax = *(rdx_8 + 0x10)

if (rax != 0)
    rdx_8 = rax

__builtin_memset(rdx_8, 0, 0x1c)
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
sub_141c94f00(&arg1[8], &arg2[8])
arg1[0x12] = 0
void* rdx_10 = &arg1[0x14]
arg1[0x13] = 0
*(rdx_10 + 0x10) = 0
*(rdx_10 + 0x18) = 0
*(rdx_10 + 0x1c) = 0x80
void* rax_1 = *(rdx_10 + 0x10)

if (rax_1 != 0)
    rdx_10 = rax_1

*rdx_10 = 0
*(rdx_10 + 8) = 0
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
sub_1417d6d70(&arg1[0x12], &arg2[0x12])
arg1[0x1c].b = arg2[0x1c].b
*(arg1 + 0xe1) = *(arg2 + 0xe1)
*(arg1 + 0xe2) = *(arg2 + 0xe2)
return arg1
