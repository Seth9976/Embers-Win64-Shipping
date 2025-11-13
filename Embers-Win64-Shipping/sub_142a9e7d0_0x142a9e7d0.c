// 函数: sub_142a9e7d0
// 地址: 0x142a9e7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg2

if (arg2 s< 0)
    rsi = 0
else if (rsi s> 0x10ffff)
    rsi = 0x10ffff

int32_t* r8 = *(arg1 + 0x10)
int32_t rdi

if (rsi s>= *r8)
    int32_t rdx = 0
    rdi = *(arg1 + 0x1c) - 1
    
    if (rdi s> 0 && rsi s< r8[sx.q(rdi - 1)])
        int32_t rcx_2 = rdi s>> 1
        
        if (rcx_2 != 0)
            do
                if (rsi s>= r8[sx.q(rcx_2)])
                    rdx = rcx_2
                else
                    rdi = rcx_2
                
                rcx_2 = (rdi + rdx) s>> 1
            while (rcx_2 != rdx)
else
    rdi = 0

if ((rdi.b & 1) != 0 || *(arg1 + 0x28) != 0 || *(arg1 + 0x58) != 0 || (*(arg1 + 0x20) & 1) != 0)
    return arg1

int64_t r14_1 = sx.q(rdi) << 2

if (rsi != r8[sx.q(rdi)] - 1)
    int32_t rax_12
    int64_t rcx_9
    
    if (rdi s> 0)
        rcx_9 = sx.q(rdi - 1)
        rax_12 = r8[rcx_9]
    
    if (rdi s<= 0 || rsi != rax_12)
        if (sub_142a9f6f0(arg1, *(arg1 + 0x1c) + 2) != 0)
            int64_t rdx_7 = *(arg1 + 0x10) + r14_1
            memmove(rdx_7 + 8, rdx_7, (*(arg1 + 0x1c) - rdi) << 2)
            *(r14_1 + *(arg1 + 0x10)) = rsi
            *(*(arg1 + 0x10) + (sx.q(rdi + 1) << 2)) = rsi + 1
            *(arg1 + 0x1c) += 2
            goto label_142a9e990
    else
        r8[rcx_9] = rax_12 + 1
    label_142a9e990:
        int64_t rcx_13 = *(arg1 + 0x40)
        
        if (rcx_13 != 0)
            sub_142a7dcd0(rcx_13)
            *(arg1 + 0x40) = 0
            *(arg1 + 0x48) = 0
else
    r8[sx.q(rdi)] = rsi
    
    if (rsi != 0x10ffff)
        goto label_142a9e8c0
    
    if (sub_142a9f6f0(arg1, *(arg1 + 0x1c) + 1) != 0)
        *(*(arg1 + 0x10) + (sx.q(*(arg1 + 0x1c)) << 2)) = 0x110000
        *(arg1 + 0x1c) += 1
    label_142a9e8c0:
        
        if (rdi s<= 0)
            goto label_142a9e990
        
        void* r9_1 = *(arg1 + 0x10)
        
        if (rsi == *(r9_1 + (sx.q(rdi - 1) << 2)))
            void* r8_2 = r9_1 - 4 + r14_1
            void* rcx_8 = r9_1 + (sx.q(*(arg1 + 0x1c)) << 2)
            int64_t r9_2 = 0
            void* rdx_3 = r8_2 + 8
            uint64_t r10_4 = (rcx_8 - rdx_3 + 3) u>> 2
            
            if (rdx_3 u> rcx_8)
                r10_4 = 0
            
            if (r10_4 != 0)
                do
                    r9_2 += 1
                    *r8_2 = *rdx_3
                    r8_2 += 4
                    rdx_3 += 4
                while (r9_2 u< r10_4)
            
            *(arg1 + 0x1c) -= 2
        
        goto label_142a9e990

return arg1
