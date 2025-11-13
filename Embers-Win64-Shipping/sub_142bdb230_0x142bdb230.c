// 函数: sub_142bdb230
// 地址: 0x142bdb230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *arg2
int32_t* result = *(arg2 + 8)

if (i_1 != 0)
    result = &result[7]
    int32_t i
    
    do
        if ((((result[1].b + 2) & 0xfb) == 0 || ((*(result + 5) + 2) & 0xfb) == 0)
                && (*result & 0x10) == 0)
            int32_t j_3 = *arg1
            int32_t rbx_1 = result[5]
            
            if (j_3 != 0)
                void* r9_1 = &arg1[3]
                int32_t j
                
                do
                    int32_t rdx_1 = arg1[0x207]
                    int32_t r11_2 = rbx_1 - *(r9_1 + 4)
                    
                    if (r11_2 s< neg.d(rdx_1))
                        break
                    
                    if (rbx_1 s<= rdx_1 + *r9_1 && (arg1[0x208].b != 0 || r11_2 s<= arg1[0x206]))
                        int32_t rcx_3 = *(r9_1 + 0x10)
                        *result |= 0x30
                        result[7] = rcx_3
                    
                    r9_1 += 0x20
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = arg1[0x81]
            
            if (j_2 != 0)
                void* rdx_4 = &arg1[0x7d + zx.q(j_2) * 8]
                int32_t j_1
                
                do
                    int32_t r11_3 = arg1[0x207]
                    int32_t r10_2 = *(rdx_4 - 4) - rbx_1
                    
                    if (r10_2 s< neg.d(r11_3))
                        break
                    
                    if (rbx_1 s>= *rdx_4 - r11_3 && (arg1[0x208].b != 0 || r10_2 s< arg1[0x206]))
                        int32_t rcx_10 = *(rdx_4 + 0x10)
                        *result |= 0x30
                        result[7] = rcx_10
                    
                    rdx_4 -= 0x20
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
        
        result = &result[0x10]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
