// 函数: sub_14244e5d0
// 地址: 0x14244e5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x40))
int32_t r10 = 0

if (result.d s> 0)
    int64_t* rsi_1 = *(arg1 + 0x38)
    int64_t result_1 = result
    int64_t* r9_1 = rsi_1
    int64_t r11_1 = 0
    
    while (true)
        if (*r9_1 != arg2)
            result = r9_1[1]
            int64_t r8_1 = result + (sx.q(r9_1[2].d) << 3)
            
            if (result == r8_1)
            label_14244e624:
                r10 += 1
                r11_1 += 1
                r9_1 = &r9_1[0x16]
                
                if (r11_1 s>= result_1)
                    break
                
                continue
            else
                while (*result != arg2)
                    result += 8
                    
                    if (result == r8_1)
                        goto label_14244e624
        
        if (r10 == 0xffffffff)
            break
        
        int64_t rcx_1 = sx.q(r10)
        
        if (rsi_1[rcx_1 * 0x16 + 0xe].b == 0
                || (*(*(*(arg1 + 0x48) + (rcx_1 << 3)) + 0xbb) & 2) != 0)
            break
        
        result.b = 1
        return result

result.b = 0
return result
