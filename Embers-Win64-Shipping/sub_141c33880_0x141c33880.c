// 函数: sub_141c33880
// 地址: 0x141c33880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)
int32_t rcx = *(arg1 + 0x30)

if (arg2 s>= rcx)
    rdi = zx.q(rcx)

*(arg1 + 0x38) += rdi.d
int32_t rdx = *(arg1 + 0x38)

if (rdx s> rcx)
    *(arg1 + 0x38) = rcx
    rdi = zx.q(rdi.d + rcx - rdx)

int32_t rax_4 = *(arg1 + 0x3c)
uint64_t rcx_1 = zx.q(rcx - rax_4)
int32_t rsi_1 = rcx_1.d - rdi.d

if (rsi_1 s> 0)
    if (rdi.d s> 0)
        memset(*(arg1 + 0x28), 0, sx.q((rdi << 2).d))
        rax_4 = *(arg1 + 0x3c)
    
    *(arg1 + 0x3c) = rax_4 + rdi.d
    int64_t rax_7 = sx.q(rdi.d) << 2
    *(arg1 + 0x28) += rax_7
    return rax_7

if (rcx_1.d s> 0)
    memset(*(arg1 + 0x28), 0, sx.q((rcx_1 << 2).d))

int64_t rcx_4 = *(arg1 + 0x10)
uint64_t rax_10 = zx.q(neg.d(rsi_1))
*(arg1 + 0x28) = rcx_4
*(arg1 + 0x3c) = rax_10.d

if (rax_10.d s> 0)
    memset(rcx_4, 0, sx.q((rax_10 << 2).d))
    rcx_4 = *(arg1 + 0x28)

int64_t rax_13 = sx.q(rsi_1) << 2
*(arg1 + 0x28) = rcx_4 - rax_13
return rax_13
