// 函数: sub_1426b0430
// 地址: 0x1426b0430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_2 = sub_1426b06a0(arg1, arg2)
void* i_1 = i_2

if (i_2 != 0)
    int64_t r8_1 = sx.q(*(arg1 + 0x118))
    
    if (r8_1.d != 0)
        uint64_t r9_1 = zx.q(*(arg1 + 0x260))
        int64_t* rcx = *(arg1 + 0x110)
        
        if (rcx[r9_1 * 0xb + 1] == i_1)
            return zx.q(r9_1.d)
        
        for (void* i = *(i_1 + 0x48); i != 0; i = *(i + 0x48))
            i_1 = i
        
        int32_t result = 0
        
        if (r8_1.d s> 0)
            int64_t r8_2 = 0
            
            do
                if (*rcx == i_1)
                    return result
                
                result += 1
                r8_2 += 1
                rcx = &rcx[0xb]
            while (r8_2 s< r8_1)

return -1
