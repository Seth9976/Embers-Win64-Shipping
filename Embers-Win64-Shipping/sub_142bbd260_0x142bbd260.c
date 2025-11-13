// 函数: sub_142bbd260
// 地址: 0x142bbd260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8 = *(arg1 + 8)
uint64_t r11 = zx.q(arg2)

if (r8 != 0)
    char rax = *arg1
    
    if (rax == 0)
        return zx.q(r8[r11])
    
    if (rax == 3)
        if (r11.d - *(arg1 + 0x14) u< *(arg1 + 0x18))
            return zx.q(arg1[0x1c])
        
        void* r8_1 = &r8[2]
        uint32_t r9_2 = zx.d(*r8) << 8 | zx.d(r8[1])
        uint32_t result
        uint32_t rdx_2
        
        while (true)
            if (r11.d u>= r9_2)
                result = zx.d(*r8_1)
                r8_1 += 3
                rdx_2 = zx.d(*(r8_1 - 2)) << 8 | zx.d(*(r8_1 - 1))
                
                if (r11.d u< rdx_2)
                    break
                
                r9_2 = rdx_2
                
                if (r8_1 u< &r8[zx.q(*(arg1 + 0x10))])
                    continue
            
            result.b = 0
            return result
        
        *(arg1 + 0x18) = rdx_2 - r9_2
        *(arg1 + 0x14) = r9_2
        arg1[0x1c] = result.b
        return result

return 0
