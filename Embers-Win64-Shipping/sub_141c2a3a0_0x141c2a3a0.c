// 函数: sub_141c2a3a0
// 地址: 0x141c2a3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)

if (*(arg1 + 0x40) s>= 0)
    return 0

int64_t rdx = sx.q(*(arg1 + 0x38))
int32_t r8 = *(arg1 + 0x44)
int32_t rcx_1
int32_t rdi

if (rdx.d != 0)
    rdi = *(arg1 + 0x3c)
    
    if (*(arg1 + 4) + rdi + rsi.d s>= r8)
        rdi = rdi - rdx.d + rsi.d
        memmove(arg1 + 0x848, arg1 + ((rdx - rsi + 0x212) << 2), rdi << 2)
        r8 = *(arg1 + 0x44)
        *(arg1 + 0x38) = rsi.d
        rcx_1 = r8 - (rsi * 2).d
        *(arg1 + 0x3c) = rdi
        
        if (rcx_1 s<= 0)
            rcx_1 = 0
    else
        rcx_1 = r8 - rdx.d - rsi.d
        
        if (rcx_1 s<= 0)
            rcx_1 = 0
else
    *(arg1 + 0x3c) = rsi.d
    *(arg1 + 0x38) = rsi.d
    rcx_1 = r8 - (rsi * 2).d
    rdi = rsi.d

int64_t r9 = sx.q(*(arg1 + 0xc))
int32_t rbp_1 = *(arg1 + 8) - r9.d

if (rbp_1 s>= rcx_1)
    rbp_1 = rcx_1

*(arg1 + 4)
int32_t temp1 = mods.dp.d(sx.q(rbp_1), *(arg1 + 4))
int32_t rbp_2 = rbp_1 - temp1

if (rbp_1 - temp1 s< 0 || rdi + rbp_2 s> r8)
    return 0x15

memcpy(arg1 + ((sx.q(rdi) + 0x212) << 2), *arg2 + (r9 << 2), rbp_2 << 2)
int32_t r14_1 = *(arg1 + 0x3c)
*(arg1 + 0xc) += rbp_2
int32_t r14_2 = r14_1 + rbp_2
int32_t rax_13 = *(arg1 + 0xc)
*(arg1 + 0x3c) = r14_2

if (rax_13 == *(arg1 + 8))
    int64_t rdx_5 = sx.q(*(arg1 + 0x38))
    int32_t rcx_11 = r14_2 - rdx_5.d
    
    if (rcx_11 s< (rsi * 2).d && arg2[4].d != 0)
        int32_t rdi_2 = (rsi + 5).d
        
        if (*(arg1 + 0x44) - r14_2 s< rdi_2)
            r14_2 = rcx_11 + rsi.d
            memmove(arg1 + 0x848, arg1 + ((rdx_5 - rsi + 0x212) << 2), r14_2 << 2)
            *(arg1 + 0x38) = rsi.d
            *(arg1 + 0x3c) = r14_2
        
        int32_t rcx_16 = *(arg1 + 0x44)
        *(arg1 + 0x40) = r14_2
        
        if (rdi_2 s< 0 || r14_2 + rdi_2 s> rcx_16)
            rdi_2 = rcx_16 - r14_2
        
        memset(arg1 + ((sx.q(r14_2) + 0x212) << 2), 0, sx.q(rdi_2) << 2)
        *(arg1 + 0x3c) += rdi_2

return 0
