// 函数: sub_1418c0cc0
// 地址: 0x1418c0cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x104)
int64_t result = 0
int32_t r8 = 0

if (r11 != 0)
    void* r9_1 = arg1 + 0x110
    
    do
        if ((*r9_1 & 1) == arg2)
            result += *(*(arg1 + 0x228) + sx.q(r8) * 0x28)
        
        r8 += 1
        r9_1 += 0x10
    while (r8 u< r11)

return result
