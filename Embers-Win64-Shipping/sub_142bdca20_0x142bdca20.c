// 函数: sub_142bdca20
// 地址: 0x142bdca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 8)
int32_t* r11 = result + zx.q(arg2) * 0x28

if (arg2 u< *arg1)
    result = zx.q(r11[4])
    
    if ((result.b & 4) == 0)
        r11[4] = result.d | 4
        int32_t i_1 = arg1[1]
        int64_t* r8_1 = *(arg1 + 0x18)
        *(r11 + 0x18) = 0
        
        if (i_1 != 0)
            int32_t rbx_1 = *r11
            int32_t i
            
            do
                int32_t* r10_1 = *r8_1
                int32_t rcx = *r10_1
                
                if (r11[1] + rbx_1 s>= rcx && rcx + r10_1[1] s>= rbx_1)
                    *(r11 + 0x18) = r10_1
                    break
                
                r8_1 = &r8_1[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        result = zx.q(arg1[1])
        
        if (result.d u< *arg1)
            uint64_t rcx_2 = zx.q(result.d)
            result = *(arg1 + 0x18)
            *(result + (rcx_2 << 3)) = r11
            arg1[1] += 1

return result
