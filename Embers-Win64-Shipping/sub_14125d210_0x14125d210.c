// 函数: sub_14125d210
// 地址: 0x14125d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*arg1 == *arg2 && arg1[1] == arg2[1] && arg1[4] == arg2[4] && arg1[6].d == arg2[6].d
        && *(arg1 + 0x3c) == *(arg2 + 0x3c) && arg1[5] == arg2[5] && arg1[8].d == arg2[8].d
        && arg1[3] == arg2[3] && arg1[2] == arg2[2] && arg1[7].d == arg2[7].d
        && *(arg1 + 0x34) == *(arg2 + 0x34) && arg1[9] == arg2[9] && arg1[0xa] == arg2[0xa]
        && arg1[0xb] == arg2[0xb])
    int32_t r9_1 = 0
    void* r8_1 = &arg1[0xc]
    
    while (*r8_1 == *(arg2 - arg1 + r8_1))
        r9_1 += 1
        r8_1 += 8
        
        if (r9_1 u>= 2)
            if (arg1[0xe].b != arg2[0xe].b || *(arg1 + 0x71) != *(arg2 + 0x71)
                    || *(arg1 + 0x72) != *(arg2 + 0x72) || *(arg1 + 0x74) != *(arg2 + 0x74))
                break
            
            result.b = 1
            return result

result.b = 0
return result
