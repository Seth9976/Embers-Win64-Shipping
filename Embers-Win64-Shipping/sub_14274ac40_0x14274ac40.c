// 函数: sub_14274ac40
// 地址: 0x14274ac40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int16_t rcx = *rax
*(arg1 + 0x10) = &rax[1]
int32_t* r11 = *(arg1 + 0x20)
uint32_t rdx = zx.d(rax[1])
int64_t rbx = *(arg1 + 0x50)
int64_t rcx_1 = zx.q(rcx) * 0x70
int32_t rax_2 = 0
*(arg1 + 0x10) = &rax[2]
int32_t r10_1 = *r11
uint64_t result

if (*(arg1 + 0xa0) == 0)
    if (rdx s>= r10_1)
        int64_t r8_3 = 0
        
        do
            rdx -= r10_1
            r8_3 += 1
            r10_1 = r11[r8_3]
            rax_2 += 1
        while (rdx s>= r10_1)
    
    result = *(*(arg1 + 0x18) + (sx.q(rax_2) << 3))
    
    if (*(sx.q(rdx) + result) != 0)
        int32_t r8_5 = *(arg1 + 0x40)
        
        if (r8_5 != 0)
            int32_t rdx_4 = *(rcx_1 + rbx + 0x10)
            *(rcx_1 + rbx + 0x10) = rdx_4 + r8_5
            *(arg1 + 0xa4) = rdx_4 + 1
        
        *(arg1 + 0xa8) = r8_5
        
        if (r8_5 != 0 && *(arg1 + 0x40) != r8_5)
            result.b = 0
            *(arg1 + 0xac) = 0
            return result
        
        result.b = 1
        *(arg1 + 0xac) = 1
else
    if (rdx s>= r10_1)
        int64_t r8_1 = 0
        
        do
            rdx -= r10_1
            r8_1 += 1
            r10_1 = r11[r8_1]
            rax_2 += 1
        while (rdx s>= r10_1)
    
    result = *(*(arg1 + 0x18) + (sx.q(rax_2) << 3))
    
    if (*(sx.q(rdx) + result) != 0)
        int32_t rdx_2 = *(arg1 + 0x40)
        
        if (rdx_2 != 0)
            int32_t rax_5 = *(rcx_1 + rbx + 0x10)
            *(rcx_1 + rbx + 0x10) += rdx_2
            *(arg1 + 0xa4) = rax_5 + 1
        
        *(arg1 + 0xa8) = rdx_2
        
        if (rdx_2 != 0 && *(arg1 + 0x40) != rdx_2)
            result.b = 0
            *(arg1 + 0xac) = 0
            return result
        
        result.b = 1
        *(arg1 + 0xac) = 1

return result
