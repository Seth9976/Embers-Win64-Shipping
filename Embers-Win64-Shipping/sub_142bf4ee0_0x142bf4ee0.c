// 函数: sub_142bf4ee0
// 地址: 0x142bf4ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = zx.q(*(arg1 + 0x5c))
int64_t r8 = *(arg1 + 0x70)
int32_t r11 = *(arg1 + 0x60)
uint64_t result = rdx * 5
int32_t r9 = *(r8 + (result << 2) + 8)
uint64_t r10 = zx.q((rdx + 1).d)
void* rdi = r8 + (result << 2)

if (r10.d u>= r11 || r9 != *(r8 + r10 * 0x14 + 8))
    uint64_t r8_1 = zx.q(*(arg1 + 0x64))
    
    if (r8_1.d != 0)
        result = *(arg1 + 0x78)
        int32_t r10_1 = *(result + zx.q((r8_1 - 1).d) * 0x14 + 8)
        
        if (r9 u< r10_1)
            char rdx_2 = (*(rdi + 4)).b
            
            while (true)
                result = *(arg1 + 0x78)
                r8_1 = zx.q(r8_1.d - 1)
                uint64_t rcx_1 = r8_1 * 5
                
                if (*(result + (rcx_1 << 2) + 8) != r10_1)
                    break
                
                if (*(result + (rcx_1 << 2) + 8) != r9)
                    if ((rdx_2 & 1) == 0)
                        *(result + (rcx_1 << 2) + 4) &= 0xfffffffe
                    else
                        *(result + (rcx_1 << 2) + 4) |= 1
                
                *(result + (rcx_1 << 2) + 8) = r9
                
                if (r8_1.d == 0)
                    *(arg1 + 0x5c) += 1
                    return result
    else if (r10.d u< r11)
        int32_t r8_2 = (rdx + 2).d
        result = zx.q(r8_2 - rdx.d)
        
        if (result.d u>= 2)
            result = sub_142bf5140(arg1, rdx.d, r8_2)

*(arg1 + 0x5c) += 1
return result
