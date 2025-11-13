// 函数: sub_1429d4270
// 地址: 0x1429d4270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)
int32_t i = 0

if (*(arg1 + 0x24) == 0)
    if (*(rax + 4) s> 0)
        int32_t rsi_1 = 0
        int64_t rdi_1 = 0
        
        do
            int32_t* r10_1 = *(arg1 + 0xc0) + (sx.q(rsi_1) << 2)
            char r11_1 = not.b((*(arg1 + 0x1b0))[rdi_1]) & 1
            
            if (r11_1 != 0)
                int64_t rdx_6 = sx.q(*r10_1)
                
                if (rdx_6.d != 0xffffffff)
                    *(rdx_6 + *(arg1 + 0x168)) = arg2[zx.q(r11_1) << 2]
                    *(*(arg1 + 0x120) + (sx.q(*r10_1) << 2)) = i
                
                int64_t rdx_9 = sx.q(r10_1[1])
                
                if (rdx_9.d != 0xffffffff)
                    *(rdx_9 + *(arg1 + 0x168)) = arg2[(zx.q(r11_1) << 2) + 1]
                    *(*(arg1 + 0x120) + (sx.q(r10_1[1]) << 2)) = i
            else
                *(sx.q(*r10_1) + *(arg1 + 0x168)) = *arg2
                *(sx.q(r10_1[1]) + *(arg1 + 0x168)) = arg2[1]
                *(*(arg1 + 0x120) + (sx.q(*r10_1) << 2)) = i
                *(*(arg1 + 0x120) + (sx.q(r10_1[1]) << 2)) = i
            
            rax = *(arg1 + 8)
            i += 1
            rsi_1 += 2
            rdi_1 += 1
        while (i s< *(rax + 4))
else if (*(rax + 4) s> 0)
    int64_t r8_1 = sx.q(*(arg1 + 0x48))
    void* rax_5
    
    do
        r8_1 += 2
        *(r8_1 + *(arg1 + 0x168) - 2) = *arg2
        *(*(arg1 + 0x168) + r8_1 - 1) = arg2[1]
        *(*(arg1 + 0x120) + (r8_1 << 2) - 8) = i
        *(*(arg1 + 0x120) + (r8_1 << 2) - 4) = i
        i += 1
        rax_5 = *(arg1 + 8)
    while (i s< *(rax_5 + 4))
    
    return rax_5

return rax
