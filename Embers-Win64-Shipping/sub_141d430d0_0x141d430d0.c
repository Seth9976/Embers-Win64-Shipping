// 函数: sub_141d430d0
// 地址: 0x141d430d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int64_t* r14 = arg2
int32_t rbx = arg1[1].d
int64_t r15 = sx.q(arg1[3].d)

if (rdi.d != 0)
    int32_t rdx = rbx + rdi.d
    int32_t rcx = rbx
    
    if (rdx s> *(arg1 + 0xc))
        sub_1405c55e0(arg1, rdx)
        rcx = arg1[1].d
    
    memcpy(*arg1 + sx.q(rcx) * 0x14, *r14, (rdi * 0x14).d)
    arg1[1].d += rdi.d

int64_t rsi = sx.q(r14[3].d)

if (rsi.d != 0)
    int32_t rax_3 = arg1[3].d
    int32_t rdx_2 = rax_3 + rsi.d
    
    if (rdx_2 s> *(arg1 + 0x1c))
        sub_1405c5570(&arg1[2], rdx_2)
        rax_3 = arg1[3].d
    
    memcpy(arg1[2] + (sx.q(rax_3) << 3), r14[2], (rsi << 3).d)
    arg1[3].d += rsi.d

if (rbx s> 0)
    int64_t rdx_4 = sx.q(arg1[3].d)
    int64_t rcx_7 = r15
    
    if (r15 s< rdx_4)
        do
            uint64_t rax = arg1[2]
            *(rax + (rcx_7 << 3)) += rbx
            *(rax + (rcx_7 << 3) + 4) += rbx
            rcx_7 += 1
        while (rcx_7 s< rdx_4)

int32_t i_2 = r14[5].d

if (i_2 != 0)
    int32_t rax_5 = arg1[5].d
    int32_t rdx_5 = rax_5 + i_2
    
    if (rdx_5 s> *(arg1 + 0x2c))
        sub_1405c5660(&arg1[4], rdx_5)
        rax_5 = arg1[5].d
    
    void* rdi_1 = r14[4]
    int32_t i_1 = i_2
    int64_t* r14_1 = arg1[4] + sx.q(rax_5) * 0x28
    void* rbx_1 = r14_1 + 0x1c
    int32_t i
    
    do
        *r14_1 = 0
        int64_t rsi_1 = sx.q(*(rdi_1 + 8))
        int64_t r15_1 = *rdi_1
        *(rbx_1 - 0x14) = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1405a4be0(r14_1, rsi_1.d, 0)
            memcpy(*r14_1, r15_1, (rsi_1 << 4).d)
        else
            *(rbx_1 - 0x10) = 0
        
        *(rbx_1 - 0xc) = 0
        int64_t rsi_2 = sx.q(*(rdi_1 + 0x18))
        int64_t rax_8 = *(rdi_1 + 0x10)
        *(rbx_1 - 4) = rsi_2.d
        
        if (rsi_2.d != 0)
            sub_1407c3650(rbx_1 - 0xc, rsi_2.d, 0)
            memcpy(*(rbx_1 - 0xc), rax_8, (rsi_2 * 0xc).d)
        else
            *rbx_1 = 0
        
        r14_1 = &r14_1[5]
        *(rbx_1 + 4) = *(rdi_1 + 0x20)
        rdi_1 += 0x28
        rbx_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)
    arg1[5].d += i_2
    r14 = arg2

int64_t rdi_2 = sx.q(r14[7].d)

if (rdi_2.d == 0)
    return 

int32_t rcx_15 = arg1[7].d
int32_t rdx_10 = rcx_15 + rdi_2.d

if (rdx_10 s> *(arg1 + 0x3c))
    sub_1405a5220(&arg1[6], rdx_10)
    rcx_15 = arg1[7].d

memcpy(sx.q(rcx_15) * 0x30 + arg1[6], r14[6], (rdi_2 * 0x30).d)
arg1[7].d += rdi_2.d
