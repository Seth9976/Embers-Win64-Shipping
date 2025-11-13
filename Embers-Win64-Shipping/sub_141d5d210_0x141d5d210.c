// 函数: sub_141d5d210
// 地址: 0x141d5d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x32) == 0 && sub_140d3e110(arg1 + 0x1c) != 0)
    char rax_2 = sub_140d3e090(arg1 + 0x1c, 1, 0)
    
    if (rax_2 == 0 && *(arg1 + 0x30) == rax_2
            && sub_141d4ecc0(*(sub_140d3c6e0(arg1 + 0x1c) + 0x110)) == 0
            && sub_141d4ed50(*(sub_140d3c6e0(arg1 + 0x1c) + 0x110)) == 0)
        int64_t result = sub_141d4ee90(*(sub_140d3c6e0(arg1 + 0x1c) + 0x110))
        
        if (result.b != 0)
        label_141d5d350:
            float zmm1 = *(arg1 + 0x24) f- *(arg2 + 0x64)
            *(arg1 + 0x24) = zmm1
            
            if (zmm1 > 0f)
                return result
        else
            result = sub_141d4eed0(*(sub_140d3c6e0(arg1 + 0x1c) + 0x110))
            
            if (result.b == 0 || *(arg1 + 0x31) == 0)
                goto label_141d5d350
            
            int64_t rcx_10 = *(arg1 + 0x58)
            
            if (rcx_10 == 0 || *(arg1 + 0x33) != 0)
                **(arg1 + 0x28) = 1
                int64_t var_18 = *(arg1 + 0x14)
                return sub_141d57900(arg2, 1, *(arg1 + 8), zx.q(*(arg1 + 0x10)))
            
            if (rcx_10 s>= int.q(0.0))
                int64_t result_1
                sub_141d4dc40(*(sub_140d3c6e0(arg1 + 0x1c) + 0x110), &result_1)
                result = result_1
                
                if (*(arg1 + 0x58) s<= result)
                    goto label_141d5d350

return sub_141d57880(arg1, arg2)
