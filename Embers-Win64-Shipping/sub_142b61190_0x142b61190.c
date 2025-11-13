// 函数: sub_142b61190
// 地址: 0x142b61190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *(arg1 + 0x280)
int32_t rdi = 0
int32_t r9 = 0

while (true)
    int32_t rax_1 = r9
    
    if (r9 != 0)
        int64_t rdx_1 = sx.q(r9) * 2
        
        if (r8[rdx_1 * 2 + 3] s>= r9)
            rax_1 = r8[rdx_1 * 2 + 3]
    
    int32_t rax_2 = rax_1 + 1
    int64_t rcx_1 = sx.q(rax_2) << 4
    int32_t i = *(r8 + rcx_1)
    
    if (i != 5)
        while (i != 1)
            r8 = *(arg1 + 0x280)
            rcx_1 += 0x10
            rax_2 += 1
            i = *(rcx_1 + r8)
            
            if (i == 5)
                goto label_142b6120b
        
        break
    
label_142b6120b:
    r9 = rax_2
    
    if (rax_2 s< 0)
        break
    
    rdi += 1

*arg2 = 0
int64_t rcx_2 = *(arg1 + 0x2a8)
void* rax_3

if (rcx_2 == 0)
    *(arg1 + 0x2b0) = rdi
    rax_3 = sub_142a7dd00(sx.q(rdi) << 3)
    
    if (rax_3 == 0)
        *(arg1 + 0x2b0) = 0
        return 0
    
    *(arg1 + 0x2a8) = rax_3
else if (rdi s> *(arg1 + 0x2b0))
    rax_3 = sub_142a7dd30(rcx_2, sx.q(rdi) << 3)
    
    if (rax_3 == 0)
        *(arg1 + 0x2b0) = 0
        return 0
    
    *(arg1 + 0x2b0) = rdi
    *(arg1 + 0x2a8) = rax_3
int32_t rsi_1 = 0

while (true)
    int32_t r8_1 = rsi_1
    
    if (rsi_1 != 0)
        int64_t rax_5 = *(arg1 + 0x280)
        int64_t rcx_6 = sx.q(rsi_1) * 2
        
        if (*(rax_5 + (rcx_6 << 3) + 0xc) s>= rsi_1)
            r8_1 = *(rax_5 + (rcx_6 << 3) + 0xc)
    
    int32_t r8_2 = r8_1 + 1
    int64_t rcx_8 = sx.q(r8_2) << 4
    
    for (int32_t i_1 = *(rcx_8 + *(arg1 + 0x280)); i_1 != 5; i_1 = *(rcx_8 + *(arg1 + 0x280)))
        if (i_1 == 1)
            return *(arg1 + 0x2a8)
        
        rcx_8 += 0x10
        r8_2 += 1
    
    rsi_1 = r8_2
    
    if (r8_2 s< 0)
        break
    
    int64_t* rcx_9 = *(arg1 + 0x2e0)
    int64_t inptr_1
    
    if (rcx_9 == 0)
        inptr_1 = 0
    else
        int64_t inptr = sub_142a86d40(rcx_9, r8_2)
        inptr_1 = inptr
        
        if (inptr == 0)
            inptr_1 = 0
        else if (__RTDynamicCast(inptr, 0, &class icu_64::Format `RTTI Type Descriptor', 
                &class icu_64::MessageFormat::DummyFormat `RTTI Type Descriptor', 0) != 0)
            inptr_1 = 0
    
    *(*(arg1 + 0x2a8) + (sx.q(*arg2) << 3)) = inptr_1
    *arg2 += 1

return *(arg1 + 0x2a8)
