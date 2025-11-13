// 函数: sub_1426c2270
// 地址: 0x1426c2270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x118)
uint64_t result

if (rdi == 0)
    result = 0
else
    result.b = *(sx.q(rdi) * 0x58 + *(arg1 + 0x110) - 0x17) == 2

*(arg1 + 0x263) &= 0xfb
int32_t r10 = 0
result.b <<= 2
*(arg1 + 0x263) |= result.b

if (rdi s> 0)
    int64_t r11_1 = 0
    
    do
        char r8_1 = *(arg1 + 0x263)
        
        if ((r8_1 & 4) != 0)
            break
        
        int64_t rbx_1 = *(arg1 + 0x110)
        int32_t rax_1 = *(rbx_1 + r11_1 + 0x28)
        result = zx.q(rax_1 - 1)
        
        if (rax_1 - 1 s>= 0)
            int64_t rdx_2 = sx.q(result.d)
            result = *(rbx_1 + r11_1 + 0x20) + (rdx_2 << 4) + 8
            int64_t temp1_1
            
            do
                if (*result == 1)
                    *(arg1 + 0x263) = r8_1 | 4
                    break
                
                result -= 0x10
                temp1_1 = rdx_2
                rdx_2 -= 1
            while (temp1_1 - 1 s>= 0)
        
        r10 += 1
        r11_1 += 0x58
    while (r10 s< rdi)

return result
