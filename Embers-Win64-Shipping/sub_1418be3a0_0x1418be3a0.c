// 函数: sub_1418be3a0
// 地址: 0x1418be3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[1].d)

if (result.d s<= 0)
label_1418be421:
    result.b = 0
else
    int64_t rbx_1 = 0
    int64_t* r11_2 = *arg1 + 0x208
    int64_t result_1 = result
    
    while (true)
        int32_t r10_1 = r11_2[1].d
        int32_t r9_1 = 0
        
        if (r10_1 s> 0)
            while (true)
                result = sx.q(r9_1) * 0x104 + *r11_2
                int64_t r8_2 = arg2 - result
                uint32_t i
                uint32_t rdx
                
                do
                    rdx = zx.d(*result)
                    i = zx.d(*(result + r8_2))
                    
                    if (rdx != i)
                        break
                    
                    result += 1
                while (i != 0)
                
                if (rdx - i == 0)
                    result.b = 1
                    break
                
                r9_1 += 1
                
                if (r9_1 s>= r10_1)
                    goto label_1418be412
            
            break
        
    label_1418be412:
        rbx_1 += 1
        r11_2 = &r11_2[0x43]
        
        if (rbx_1 s>= result_1)
            goto label_1418be421

return result
