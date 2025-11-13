// 函数: sub_14242f050
// 地址: 0x14242f050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i = *(arg1 + 0x158)

for (void* r8_1 = sx.q(*(arg1 + 0x160)) * 0x78 + i; i != r8_1; i = &i[0x78])
    if (*i == 0)
        *(i + 0x18) = 0
        break

char* result = *(arg1 + 0x158)
void* rdx_1 = sx.q(*(arg1 + 0x160)) * 0x78 + result

if (result != rdx_1)
    while (*result != 2)
        result = &result[0x78]
        
        if (result == rdx_1)
            *(arg1 + 0xf0) = 0
            return result
    
    *(result + 0x18) = 0

*(arg1 + 0xf0) = 0
return result
