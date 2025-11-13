// 函数: sub_142aebef0
// 地址: 0x142aebef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1a4)

if (rax s> 0xa || rax s< *(arg1 + 0x1a0))
    rax.b = 0
    return rax

sub_142af0340(arg1, 1)
int32_t rbp = 0
void* r8 = *(*(arg1 + 0x10) + 0x20)
int32_t r10 = *(r8 + 8)
int32_t rdi

if (r10 != *(arg1 + 0x19c))
    int32_t r9_1
    
    if (r10 - 1 s< 0 || r10 - 1 s>= r10)
        r9_1 = 0
    else
        r9_1 = *(*(r8 + 0x18) + (sx.q(r10 - 1) << 3))
    
    rdi = r10 - 2
    
    if ((r9_1 & 0xff000000) != 0x5000000)
        rdi = r10 - 1
else
    rdi = *(arg1 + 0x198)

int32_t rdx_2 = *(arg1 + 0x1a4)

if (rdx_2 == 0)
    sub_142aeb430(r8, rdi)
    
    if (*(arg1 + 0x198) s>= rdi)
        *(arg1 + 0x198) = 0xffffffff
    
    if (*(arg1 + 0x19c) s>= rdi)
        *(arg1 + 0x19c) = 0xffffffff
    
    int64_t rax_3
    rax_3.b = 1
    return rax_3

if (rdi != r10 - 1 && rdx_2 != 1)
    int32_t rax_4
    rax_4.b = 0
    return rax_4

int32_t r14

if (rdi s< 0 || rdi s>= r10)
    r14 = 0
else
    r14 = *(*(r8 + 0x18) + (sx.q(rdi) << 3))

int32_t r8_1 = *(arg1 + 0x1a0)
int32_t rcx_6 = rdx_2 * 2 - r8_1 - 1 + r10

if (**(arg1 + 8) s<= 0)
    if (rcx_6 s> 0xffffff)
        abort()
        noreturn
    
    if (rcx_6 s< 0)
        abort()
        noreturn
    
    rbp = rcx_6 | 0x6000000

if (r8_1 == 0)
    sub_142af0ee0(arg1, rdi)
    sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rbp), rdi)

int32_t i = 1

if (*(arg1 + 0x1a4) s> 1)
    do
        if (i s>= *(arg1 + 0x1a0))
            int32_t* r8_3 = *(arg1 + 8)
            
            if (*r8_3 s<= 0)
                void* rdi_1 = *(*(arg1 + 0x10) + 0x20)
                int32_t rdx_6 = *(rdi_1 + 8)
                char rax_8
                
                if (rdx_6 + 1 s< 0 || *(rdi_1 + 0xc) s< rdx_6 + 1)
                    rax_8 = sub_142aeb240(rdi_1, rdx_6 + 1, r8_3)
                
                if ((rdx_6 + 1 s>= 0 && *(rdi_1 + 0xc) s>= rdx_6 + 1) || rax_8 != 0)
                    *(*(rdi_1 + 0x18) + (sx.q(*(rdi_1 + 8)) << 3)) = sx.q(rbp)
                    *(rdi_1 + 8) += 1
                
                if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                    sub_142af0120(arg1, 0x10314)
        
        int32_t* r8_4 = *(arg1 + 8)
        
        if (*r8_4 s<= 0)
            void* rdi_2 = *(*(arg1 + 0x10) + 0x20)
            int32_t rdx_9 = *(rdi_2 + 8)
            char rax_11
            
            if (rdx_9 + 1 s< 0 || *(rdi_2 + 0xc) s< rdx_9 + 1)
                rax_11 = sub_142aeb240(rdi_2, rdx_9 + 1, r8_4)
            
            if ((rdx_9 + 1 s>= 0 && *(rdi_2 + 0xc) s>= rdx_9 + 1) || rax_11 != 0)
                *(*(rdi_2 + 0x18) + (sx.q(*(rdi_2 + 8)) << 3)) = sx.q(r14)
                *(rdi_2 + 8) += 1
            
            if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
                sub_142af0120(arg1, 0x10314)
        
        i += 1
    while (i s< *(arg1 + 0x1a4))

int32_t* rax_6
rax_6.b = 1
return rax_6
