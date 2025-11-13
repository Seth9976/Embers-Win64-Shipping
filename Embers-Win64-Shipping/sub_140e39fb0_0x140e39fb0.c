// 函数: sub_140e39fb0
// 地址: 0x140e39fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
sub_140e31250(arg1 + 0xcc)
int64_t result = sub_140e40f40(arg1, rdi.d)

if (*(arg1 + 0x34b4) != 1)
    return sub_140e3a0f0(arg1, rdi.d)

if (rdi.d s< 3)
    int32_t r8_1 = *(arg1 + (rdi << 2) + 0x2c90)
    void* const r9_1 = 0x2090
    
    if (rdi.d == 0)
        r9_1 = 0x1c90
    
    void* const r10_1 = 0x2890
    void* r9_2 = r9_1 + arg1
    
    if (rdi.d == 0)
        r10_1 = 0x2490
    
    int32_t rcx_2 = sx.d(*(arg1 + 0x1cc))
    void* r10_2 = r10_1 + arg1
    *(arg1 + (rdi << 2) + 0x2c90) = rcx_2
    int32_t i_2 = rcx_2 - r8_1
    int32_t i = r8_1 - rcx_2
    
    if (i_2 s>= 0)
        i = i_2
    
    int32_t result_1 = 0
    
    for (; i != 0; i s>>= 1)
        result_1 += 1
    
    result = sx.q(result_1)
    *(r9_2 + (result << 2)) += 1
    void* r9_3 = arg1 + 0x1ce
    int32_t rdx_2 = 0
    int64_t i_3 = 0x3f
    int64_t i_1
    
    do
        int32_t r8_2 = sx.d(*r9_3)
        
        if (r8_2.w != 0)
            if (rdx_2 s>= 0x10)
                uint32_t rcx_4 = rdx_2 u>> 4
                rdx_2 -= rdx_2 & 0xfffffff0
                *(r10_2 + 0x3c0) += rcx_4
            
            int32_t rcx_5 = 1
            int32_t rax_3 = neg.d(r8_2)
            
            if (r8_2.w s>= 0)
                rax_3 = r8_2
            
            for (int32_t j = rax_3 s>> 1; j != 0; j s>>= 1)
                rcx_5 += 1
            
            result = sx.q(rcx_5 + (rdx_2 << 4))
            *(r10_2 + (result << 2)) += 1
            rdx_2 = 0
        else
            rdx_2 += 1
        
        r9_3 += 2
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    
    if (rdx_2 != 0)
        *r10_2 += 1

return result
