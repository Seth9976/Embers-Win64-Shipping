// 函数: sub_142ba9ef0
// 地址: 0x142ba9ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 != 0)
    return 

int32_t r9_1 = *(arg1 + 0x214)
int32_t r8_1 = 1

while (true)
    *(arg1 + 0x210) += *(arg1 + 0x21c)
    uint64_t rax = sx.q(*(arg1 + 0x210))
    
    if (rax.d s< r9_1)
        int64_t r11_1 = *(arg1 + 0x208)
        uint64_t rdx = zx.q(*(rax + r11_1))
        *(arg1 + 0x218) = rdx.b
        int32_t r10_1 = sx.d(*(rdx + &data_143684290))
        *(arg1 + 0x21c) = r10_1
        
        if (r10_1 s>= 0)
            goto label_142ba9f90
        
        rax = zx.q(*(arg1 + 0x210) + 1)
        
        if (rax.d s< r9_1)
            *(arg1 + 0x21c) = 2 - zx.d(*(sx.q(rax.d) + r11_1)) * r10_1
        label_142ba9f90:
            
            if (*(arg1 + 0x21c) + *(arg1 + 0x210) s<= r9_1)
                uint32_t rdx_3 = zx.d(*(arg1 + 0x218))
                bool cond:0_1
                
                if (rdx_3 == 0x1b)
                    cond:0_1 = r8_1 == 1
                else if (rdx_3 == 0x58)
                    r8_1 += 1
                    continue
                else if (rdx_3 != 0x59)
                    continue
                else
                    int32_t temp2_1 = r8_1
                    r8_1 -= rdx_3 - 0x58
                    cond:0_1 = temp2_1 == rdx_3 - 0x58
                
                rax.b = cond:0_1
                
                if (rax.b != 0)
                    return 
                
                continue
    
    *(arg1 + 0x18) = 0x83
    break
