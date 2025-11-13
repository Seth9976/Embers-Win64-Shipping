// 函数: sub_1429d4190
// 地址: 0x1429d4190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int32_t i = 0

if (*(result + 8) s> 0)
    result = nullptr
    
    do
        if ((*(result + *(arg1 + 0x1c8)) & 1) != 0)
            *(*(arg1 + 0xf0) + (result << 2)) = 2
        
        i += 1
        result += 1
    while (i s< *(*(arg1 + 8) + 8))

return result
