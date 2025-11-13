// 函数: sub_141ec9690
// 地址: 0x141ec9690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[0x202])

if (arg2 s<= rbx.d)
    return 

int32_t rbp_2 = arg2 - rbx.d
arg1[0x202] = arg2

if (arg2 s> arg1[0x203])
    sub_141eca120(arg1, rbx.d)

int32_t r8_1 = arg2 - 1
int64_t r10_1 = sx.q(r8_1)
uint64_t rax

if (r10_1 s>= rbx)
    rax = zx.q(arg1[0x20b])
    int64_t r9_2 = r10_1 << 5
    int64_t i_1 = r10_1 - rbx + 1
    int64_t i
    
    do
        if (rax.d != 0)
            int32_t* rax_1 = *(arg1 + 0x800)
            int32_t* rcx = arg1
            
            if (rax_1 != 0)
                rcx = rax_1
            
            rcx[sx.q(arg1[0x20a]) * 8] = r8_1
        
        int32_t* rax_4 = *(arg1 + 0x800)
        int32_t* rcx_1 = arg1
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        *(rcx_1 + r9_2) = 0xffffffff
        int32_t rdx_1
        
        if (arg1[0x20b] s<= 0)
            rdx_1 = -1
        else
            rdx_1 = arg1[0x20a]
        
        int32_t* rax_5 = *(arg1 + 0x800)
        int32_t* rcx_2 = arg1
        
        if (rax_5 != 0)
            rcx_2 = rax_5
        
        *(rcx_2 + r9_2 + 4) = rdx_1
        r9_2 -= 0x20
        arg1[0x20b] += 1
        rax = zx.q(arg1[0x20b])
        arg1[0x20a] = r8_1
        r8_1 -= 1
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t rsi_1 = &arg1[0x204]

if (rbp_2 == arg2)
    uint32_t rbx_2 = (rbp_2 + 0x1f) u>> 5
    uint64_t rcx_5 = zx.q((*(rsi_1 + 0x14) + 0x1f) u>> 5)
    int32_t* r14_1 = rsi_1 + 0x10
    *r14_1 = rbp_2
    
    if (rbx_2 u<= rcx_5.d)
        rax = *(rsi_1 + 8)
        
        if (rax != 0)
            rsi_1 = rax
        
        if (rcx_5.d u> 8)
            memset(rsi_1, 0, zx.q(rcx_5.d) << 2)
        else if (rcx_5.d != 0)
            __builtin_memset(rsi_1, 0, rcx_5 << 2)
    else
        sub_140bced70(rsi_1, 0, rbx_2, 4)
        *(rsi_1 + 0x14) = rbx_2 << 5
        uint64_t rax_8 = *(rsi_1 + 8)
        
        if (rax_8 != 0)
            rsi_1 = rax_8
        
        if (rbx_2 u> 8)
            memset(rsi_1, 0, zx.q(rbx_2) << 2)
        else if (rbx_2 != 0)
            __builtin_memset(rsi_1, 0, zx.q(rbx_2) << 2)
        
        int32_t* rdx_2 = rsi_1 + (zx.q(rbx_2 - 1) << 2)
        *rdx_2 &= 0xffffffff u>> ((neg.d(*r14_1)).b & 0x1f)
else if (rbp_2 s> 0)
    int32_t rbx_3 = *(rsi_1 + 0x10)
    int32_t r14_2 = rbx_3 + rbp_2
    sub_141ec9600(rsi_1, r14_2)
    *(rsi_1 + 0x10) += rbp_2
    
    while (rbx_3 != r14_2)
        uint64_t rax_10 = *(rsi_1 + 8)
        uint64_t rcx_14 = rsi_1
        
        if (rax_10 != 0)
            rcx_14 = rax_10
        
        int32_t rax_11 = rbx_3
        
        if (rbx_3 s< 0)
            rax_11 = rbx_3 + 0x1f
        
        uint64_t rdi_3 = rcx_14 + (sx.q(rax_11 s>> 5) << 2)
        char rcx_16 = rbx_3.b & 0x1f
        rbx_3 += 1
        *rdi_3 &= not.d(1 << rcx_16)
