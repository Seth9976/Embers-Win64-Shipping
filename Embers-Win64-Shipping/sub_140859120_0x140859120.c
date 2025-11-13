// 函数: sub_140859120
// 地址: 0x140859120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s<= rbx.d)
    return 

int32_t rbp_2 = arg2 - rbx.d
arg1[1].d = arg2

if (arg2 s> *(arg1 + 0xc))
    sub_140638a00(arg1)

int32_t rdx_1 = arg2 - 1
int64_t r9_1 = sx.q(rdx_1)
uint64_t rax

if (r9_1 s>= rbx)
    rax = zx.q(*(arg1 + 0x34))
    int64_t r8_2 = r9_1 * 0xc
    int64_t i_1 = r9_1 - rbx + 1
    int64_t i
    
    do
        if (rax.d != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0xc) = rdx_1
        
        *(r8_2 + *arg1) = 0xffffffff
        int32_t rcx_1
        
        if (*(arg1 + 0x34) s<= 0)
            rcx_1 = -1
        else
            rcx_1 = arg1[6].d
        
        *(*arg1 + r8_2 + 4) = rcx_1
        r8_2 -= 0xc
        *(arg1 + 0x34) += 1
        rax = zx.q(*(arg1 + 0x34))
        arg1[6].d = rdx_1
        rdx_1 -= 1
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t rsi_1 = &arg1[2]

if (rbp_2 == arg2)
    uint32_t rbx_2 = (rbp_2 + 0x1f) u>> 5
    uint64_t rcx_4 = zx.q((*(rsi_1 + 0x1c) + 0x1f) u>> 5)
    int32_t* r14_1 = rsi_1 + 0x18
    *r14_1 = rbp_2
    
    if (rbx_2 u<= rcx_4.d)
        rax = *(rsi_1 + 0x10)
        
        if (rax != 0)
            rsi_1 = rax
        
        if (rcx_4.d u> 8)
            memset(rsi_1, 0, zx.q(rcx_4.d) << 2)
        else if (rcx_4.d != 0)
            __builtin_memset(rsi_1, 0, rcx_4 << 2)
    else
        sub_1405a4a00(rsi_1, 0, rbx_2, 4)
        *(rsi_1 + 0x1c) = rbx_2 << 5
        uint64_t rax_7 = *(rsi_1 + 0x10)
        
        if (rax_7 != 0)
            rsi_1 = rax_7
        
        if (rbx_2 u> 8)
            memset(rsi_1, 0, zx.q(rbx_2) << 2)
        else if (rbx_2 != 0)
            __builtin_memset(rsi_1, 0, zx.q(rbx_2) << 2)
        
        int32_t* rdx_2 = rsi_1 + (zx.q(rbx_2 - 1) << 2)
        *rdx_2 &= 0xffffffff u>> ((neg.d(*r14_1)).b & 0x1f)
else if (rbp_2 s> 0)
    int32_t rbx_3 = *(rsi_1 + 0x18)
    int32_t r14_2 = rbx_3 + rbp_2
    sub_1405a4980(rsi_1, r14_2)
    *(rsi_1 + 0x18) += rbp_2
    
    while (rbx_3 != r14_2)
        uint64_t rax_9 = *(rsi_1 + 0x10)
        uint64_t rcx_13 = rsi_1
        
        if (rax_9 != 0)
            rcx_13 = rax_9
        
        int32_t rax_10 = rbx_3
        
        if (rbx_3 s< 0)
            rax_10 = rbx_3 + 0x1f
        
        uint64_t rdi_3 = rcx_13 + (sx.q(rax_10 s>> 5) << 2)
        char rcx_15 = rbx_3.b & 0x1f
        rbx_3 += 1
        *rdi_3 &= not.d(1 << rcx_15)
