// 函数: sub_1423878c0
// 地址: 0x1423878c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x54) != 0)
    return 

int64_t rbp_1 = *arg2

if (rbp_1 == 0)
    return 

int64_t** r14_1 = arg2[1]

if (r14_1 == 0)
    return 

int64_t rbx_1 = sx.q(*(arg1 + 8))

if (rbx_1.d s>= *(arg1 + 0x100))
    return 

int64_t rsi_1 = rbx_1 << 3

do
    sub_142388090((sx.q(rbx_1.d) + 3) * 0x58 + arg1, rbp_1, *(*r14_1 + rsi_1))
    rbx_1 = zx.q(rbx_1.d + 1)
    rsi_1 += 8
while (rbx_1.d s< *(arg1 + 0x100))
