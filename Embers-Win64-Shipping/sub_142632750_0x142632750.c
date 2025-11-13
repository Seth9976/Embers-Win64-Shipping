// 函数: sub_142632750
// 地址: 0x142632750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg4[1])
uint64_t j_2 = zx.q(*arg4)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    int32_t* r14_1 = nullptr
    uint64_t i
    
    do
        if (j_2.d s> 0)
            int32_t* rdi_1 = r14_1
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                int32_t rcx = *(rdi_1 + *(arg4 + 0x40))
                result = zx.q(rcx) & 0xffffff
                uint64_t r11_1 = zx.q(result.d + (rcx u>> 0x18))
                
                if (result u< r11_1)
                    uint64_t r8_1 = result * 0xc
                    
                    do
                        int64_t r9 = *(arg4 + 0x58)
                        
                        if (*(r9 + result) == 0x3f && zx.d(*(*(arg4 + 0x48) + r8_1 + 8)) u< arg2)
                            *(r9 + result) = arg3
                        
                        result += 1
                        r8_1 += 0xc
                    while (result s< r11_1)
                
                rdi_1 = &rdi_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        r14_1 = &r14_1[sx.q(j_2.d)]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
