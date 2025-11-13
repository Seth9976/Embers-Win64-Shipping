// 函数: sub_141c33790
// 地址: 0x141c33790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t rdi_1 = zx.q(arg3)
int32_t rsi_1 = *(arg1 + 0x30)

if (arg3 s>= rsi_1)
    rdi_1 = zx.q(rsi_1)

*(arg1 + 0x38) += rdi_1.d
int32_t rcx = *(arg1 + 0x38)

if (rcx s> rsi_1)
    *(arg1 + 0x38) = rsi_1
    rdi_1 = zx.q(rdi_1.d + rsi_1 - rcx)

int32_t rax_4 = *(arg1 + 0x3c)
uint64_t rsi_2 = zx.q(rsi_1 - rax_4)
int32_t rbp_2 = rsi_2.d - rdi_1.d

if (rbp_2 s> 0)
    if (rdi_1.d s> 0)
        memcpy(*(arg1 + 0x28), arg2, (rdi_1 << 2).d)
        rax_4 = *(arg1 + 0x3c)
    
    *(arg1 + 0x3c) = rax_4 + rdi_1.d
    *(arg1 + 0x28) += sx.q(rdi_1.d) << 2
    return 

if (rsi_2.d s> 0)
    memcpy(*(arg1 + 0x28), arg2, (rsi_2 << 2).d)

int64_t rcx_3 = *(arg1 + 0x10)
uint64_t rax_9 = zx.q(neg.d(rbp_2))
*(arg1 + 0x28) = rcx_3
*(arg1 + 0x3c) = rax_9.d

if (rax_9.d s> 0)
    memcpy(rcx_3, arg2 + (sx.q(rsi_2.d) << 2), (rax_9 << 2).d)
    rcx_3 = *(arg1 + 0x28)

*(arg1 + 0x28) = rcx_3 - (sx.q(rbp_2) << 2)
