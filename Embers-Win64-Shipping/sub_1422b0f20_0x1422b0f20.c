// 函数: sub_1422b0f20
// 地址: 0x1422b0f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[2] = *arg3
arg1[3] = arg3[1]
arg1[4] = arg3[2]
void* rdx = &arg1[0xa]
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_4 = *(rdx + 0x10)

if (rax_4 != 0)
    rdx = rax_4

*rdx = 0
*(rdx + 8) = 0
arg1[0x12] = 0xffffffff
arg1[0x13] = 0
*(arg1 + 0x58) = 0
arg1[0x18] = 0
sub_140780cc0(&arg1[6], &arg3[4])
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
void* rdx_2 = &arg1[0x1e]
*(rdx_2 + 0x1c) = 0x80
void* rax_5 = *(rdx_2 + 0x10)

if (rax_5 != 0)
    rdx_2 = rax_5

__builtin_memset(rdx_2, 0, 0x1c)
arg1[0x26] = 0xffffffff
arg1[0x27] = 0
*(arg1 + 0xa8) = 0
arg1[0x2c] = 0
sub_140780cc0(&arg1[0x1a], &arg3[0x18])
*(arg1 + 0xb8) = 0
uint32_t count = arg3[0x2e]
int64_t rbp = *(arg3 + 0xb0)
arg1[0x30] = count

if (count != 0)
    sub_1405da9e0(&arg1[0x2e], count, 0)
    memcpy(*(arg1 + 0xb8), rbp, count)
else
    arg1[0x31] = 0

*(arg1 + 0xc8) = *(arg3 + 0xc0)
return arg1
