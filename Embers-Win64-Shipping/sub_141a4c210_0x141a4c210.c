// 函数: sub_141a4c210
// 地址: 0x141a4c210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x50)
void* r9_2 = sx.q(*(arg1 + 0x58)) * 0x90 + result

if (result != r9_2)
    void* r8_1 = result + 0x4c
    
    do
        if (((*(r8_1 - 8) ^ *arg2) | (*(r8_1 - 4) ^ arg2[1]) | (*(r8_1 + 4) ^ arg2[3])
                | (*r8_1 ^ arg2[2])) == 0)
            return result
        
        result += 0x90
        r8_1 += 0x90
    while (result != r9_2)

return nullptr
