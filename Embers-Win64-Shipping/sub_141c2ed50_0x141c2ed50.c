// 函数: sub_141c2ed50
// 地址: 0x141c2ed50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0xbf800000
__builtin_memset(&arg1[1], 0, 0x28)
int32_t rsi = 0
arg1[0xc] = 0
arg1[0xd] = 1
int32_t rcx = arg1[7]

if (rcx != 1)
    sub_1405dadb0(&arg1[4], 1)
    rcx = arg1[7]
    rsi = arg1[6]

arg1[6] = rsi + 1

if (rsi + 1 s> rcx)
    sub_1406105e0(&arg1[4])

int32_t* rdx_2 = *(arg1 + 0x10) + (sx.q(rsi) << 2)

if (rdx_2 != 0)
    *rdx_2 = 0

*(arg1 + 4) = 0
arg1[3] = 0
arg1[0xa] = 0
arg1[6] = 0

if (arg1[7] s<= 0xffffffff)
    sub_1405dadb0(&arg1[4], 0)

int64_t rbp = sx.q(arg1[0xd])
int64_t rsi_1 = sx.q(arg1[6])
int32_t rax_2 = (rsi_1 + rbp).d
arg1[6] = rax_2

if (rax_2 s> arg1[7])
    sub_1406105e0(&arg1[4])

memset(*(arg1 + 0x10) + (rsi_1 << 2), 0, rbp << 2)
int64_t rax_4 = *(arg1 + 0x10)
arg1[0xe] |= 1
*(arg1 + 0x20) = rax_4
return arg1
