// 函数: sub_1406103f0
// 地址: 0x1406103f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (arg2 s<= rdi.d)
    return 

int32_t rsi_2 = arg2 - rdi.d
arg1[1].d = arg2

if (arg2 s> *(arg1 + 0xc))
    sub_1405c4d20(arg1)

int32_t rdx_1 = arg2 - 1
int64_t r9_1 = sx.q(rdx_1)
uint64_t rax

if (r9_1 s>= rdi)
    rax = zx.q(*(arg1 + 0x34))
    int64_t r8_2 = r9_1 * 0x14
    int64_t i_1 = r9_1 - rdi + 1
    int64_t i
    
    do
        if (rax.d != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x14) = rdx_1
        
        *(r8_2 + *arg1) = 0xffffffff
        int32_t rcx_1
        
        if (*(arg1 + 0x34) s<= 0)
            rcx_1 = -1
        else
            rcx_1 = arg1[6].d
        
        *(*arg1 + r8_2 + 4) = rcx_1
        r8_2 -= 0x14
        *(arg1 + 0x34) += 1
        rax = zx.q(*(arg1 + 0x34))
        arg1[6].d = rdx_1
        rdx_1 -= 1
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t rdi_1 = &arg1[2]

if (rsi_2 == arg2)
    uint32_t rbx_2 = (rsi_2 + 0x1f) u>> 5
    uint32_t rcx_4 = (*(rdi_1 + 0x1c) + 0x1f) u>> 5
    int32_t* r14_1 = rdi_1 + 0x18
    *r14_1 = rsi_2
    
    if (rbx_2 u<= rcx_4)
        rax = *(rdi_1 + 0x10)
        
        if (rax != 0)
            rdi_1 = rax
        
        if (rcx_4 u> 8)
            memset(rdi_1, 0, zx.q(rcx_4) << 2)
        else if (rcx_4 != 0)
            memset(rdi_1, 0, zx.q(rcx_4) << 2)
    else
        sub_1405a4a00(rdi_1, 0, rbx_2, 4)
        *(rdi_1 + 0x1c) = rbx_2 << 5
        uint64_t rax_7 = *(rdi_1 + 0x10)
        
        if (rax_7 != 0)
            rdi_1 = rax_7
        
        if (rbx_2 u> 8)
            memset(rdi_1, 0, zx.q(rbx_2) << 2)
        else if (rbx_2 != 0)
            memset(rdi_1, 0, zx.q(rbx_2) << 2)
        
        int32_t* rdx_2 = rdi_1 + (zx.q(rbx_2 - 1) << 2)
        *rdx_2 &= 0xffffffff u>> ((neg.d(*r14_1)).b & 0x1f)
else if (rsi_2 s> 0)
    int32_t rbx_3 = *(rdi_1 + 0x18)
    int32_t rbp_1 = rbx_3 + rsi_2
    sub_1405a4980(rdi_1, rbp_1)
    *(rdi_1 + 0x18) += rsi_2
    
    while (rbx_3 != rbp_1)
        uint64_t rax_9 = *(rdi_1 + 0x10)
        uint64_t rcx_13 = rdi_1
        
        if (rax_9 != 0)
            rcx_13 = rax_9
        
        int32_t rax_10 = rbx_3
        
        if (rbx_3 s< 0)
            rax_10 = rbx_3 + 0x1f
        
        uint64_t r8_11 = rcx_13 + (sx.q(rax_10 s>> 5) << 2)
        char rcx_15 = rbx_3.b & 0x1f
        rbx_3 += 1
        *r8_11 &= not.d(1 << rcx_15)
