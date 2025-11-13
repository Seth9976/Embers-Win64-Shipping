// 函数: sub_141fc1c70
// 地址: 0x141fc1c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 0x48) != 0)
    if ((*(arg1 + 8) & 1) == 0)
        result.b = 0
        return result
    
    void* rcx = *(arg1 + 0x30)
    
    if (rcx != 0)
        char* rcx_1 = *(rcx + 8)
        
        if (rcx_1 != 0)
            if (*(rcx_1 + 4) != *(rcx_1 + 8) || *(rcx_1 + 0xc) s> 0 || *rcx_1 == 0
                    || *(rcx_1 + 0x448) s> 0)
                result.b = 0
                return result
            
            result = *(rcx_1 + 0x430)
            int64_t rdx_3 = (sx.q(*(rcx_1 + 0x438)) << 5) + result
            
            if (result != rdx_3)
                while (*result == 0)
                    result += 0x20
                    
                    if (result == rdx_3)
                        goto label_141fc1cd4
                
                result.b = 0
                return result

label_141fc1cd4:
result.b = 1
return result
