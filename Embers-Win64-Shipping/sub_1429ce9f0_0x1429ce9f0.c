// 函数: sub_1429ce9f0
// 地址: 0x1429ce9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1429cebd0(arg1 + 0x58, (*(arg1 + 0x30) - *(arg1 + 0x28)) s>> 3)
*(*(arg1 + 0x58) + 8) = 0
**(arg1 + 0x58) = **(arg1 + 0x28)
void* result = *(arg1 + 0x58)
*(result + 0x10) = 0
int32_t r10_2 = ((*(arg1 + 0x48) - *(arg1 + 0x40)) s>> 3).d

if (r10_2 != 0)
    int64_t r8_1 = 1
    int64_t r9_1 = sx.q(r10_2)
    *(*(arg1 + 0x58) + 0x10) = **(arg1 + 0x40)
    
    if (1 s< r9_1)
        int64_t rdx_3 = 0x18
        
        do
            rdx_3 += 0x18
            *(rdx_3 + *(arg1 + 0x58) - 0x10) = *(*(arg1 + 0x40) + (r8_1 << 3) - 8)
            *(rdx_3 + *(arg1 + 0x58) - 0x18) = *(*(arg1 + 0x28) + (r8_1 << 3))
            int64_t rax_10 = *(*(arg1 + 0x40) + (r8_1 << 3))
            r8_1 += 1
            *(rdx_3 + *(arg1 + 0x58) - 8) = rax_10
        while (r8_1 s< r9_1)
    
    int64_t r8_2 = r9_1 * 0x18
    *(r8_2 + *(arg1 + 0x58) + 8) = *(*(arg1 + 0x40) + (sx.q(r10_2 - 1) << 3))
    *(r8_2 + *(arg1 + 0x58)) = *(*(arg1 + 0x28) + (r9_1 << 3))
    result = *(arg1 + 0x58)
    *(r8_2 + result + 0x10) = 0

return result
