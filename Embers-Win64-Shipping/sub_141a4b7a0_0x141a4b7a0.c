// 函数: sub_141a4b7a0
// 地址: 0x141a4b7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x60)
void* r9 = result + sx.q(*(arg1 + 0x68)) * 0x48

if (result != r9)
    void* r8_1 = result + 0x18
    
    do
        if (((*(r8_1 - 8) ^ *arg2) | (*(r8_1 - 4) ^ arg2[1]) | (*(r8_1 + 4) ^ arg2[3])
                | (*r8_1 ^ arg2[2])) == 0)
            return result
        
        result += 0x48
        r8_1 += 0x48
    while (result != r9)

return nullptr
