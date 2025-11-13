// 函数: sub_142be88c0
// 地址: 0x142be88c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = *(arg1 + 0x2c)

if (result u< 0xffffffff)
    uint64_t r11_1 = zx.q(*(arg1 + 0x34))
    result += 1
    int32_t i = arg1[7].d
    
    if (r11_1.d u< i)
        uint32_t rbx_2 = (r11_1 * 3).d << 2
        
        do
            void* rdx_2 = zx.q(rbx_2) + arg1[3]
            uint32_t result_2 = ((zx.d(*(rdx_2 + 0x10)) << 8 | zx.d(*(rdx_2 + 0x11))) << 8
                | zx.d(*(rdx_2 + 0x12))) << 8 | zx.d(*(rdx_2 + 0x13))
            uint32_t r10_7 = ((zx.d(*(rdx_2 + 0x14)) << 8 | zx.d(*(rdx_2 + 0x15))) << 8
                | zx.d(*(rdx_2 + 0x16))) << 8 | zx.d(*(rdx_2 + 0x17))
            uint32_t j = ((zx.d(*(rdx_2 + 0x18)) << 8 | zx.d(*(rdx_2 + 0x19))) << 8
                | zx.d(*(rdx_2 + 0x1a))) << 8 | zx.d(*(rdx_2 + 0x1b))
            uint32_t result_1 = result_2
            
            if (result u>= result_2)
                result_1 = result
            
            result = result_1
            
            if (result_1 u<= r10_7)
                while (j u<= result_2 - result - 1)
                    uint32_t rcx_13 = j - result_2
                    uint32_t rcx_14 = rcx_13 + result
                    
                    if (rcx_13 != neg.d(result))
                        if (rcx_14 u>= *(*arg1 + 0x10))
                            break
                        
                        *(arg1 + 0x2c) = result
                        arg1[6].d = rcx_14
                        *(arg1 + 0x34) = r11_1.d
                        return result
                    
                    if (result u>= 0xffffffff)
                        goto label_142be89d8
                    
                    result += 1
                    
                    if (result u> r10_7)
                        break
            
            r11_1 = zx.q(r11_1.d + 1)
            rbx_2 += 0xc
        while (r11_1.d u< i)

label_142be89d8:
arg1[5].b = 0
return result
