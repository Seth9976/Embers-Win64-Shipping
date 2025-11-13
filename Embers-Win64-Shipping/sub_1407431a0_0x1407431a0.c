// 函数: sub_1407431a0
// 地址: 0x1407431a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d4c350
arg1[1].b = *(arg2 + 8)
*(arg1 + 9) = *(arg2 + 9)
arg1[2] = 0
int64_t rbp = sx.q(*(arg2 + 0x18))
int64_t r14 = *(arg2 + 0x10)
arg1[3].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[2], rbp.d, 0)
    memcpy(arg1[2], r14, (rbp << 2).d)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int32_t rbp_1 = *(arg2 + 0x28)
int64_t r14_1 = *(arg2 + 0x20)
arg1[5].d = rbp_1

if (rbp_1 != 0)
    sub_1405c4b20(&arg1[4], rbp_1, 0)
    memcpy(arg1[4], r14_1, rbp_1 * 0x1c)
else
    *(arg1 + 0x2c) = 0

void* rcx_4 = &arg1[0xb]
arg1[6].d = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
__builtin_memset(&arg1[7], 0, 0x20)
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_4 = *(rcx_4 + 0x10)

if (rax_4 != 0)
    rcx_4 = rax_4

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
arg1[0x13] = *(arg2 + 0x98)
return arg1
