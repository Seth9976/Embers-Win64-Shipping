// 函数: sub_14105a750
// 地址: 0x14105a750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x50)

if (result != *arg2)
    *(arg1 + 0x50) = *arg2
    *(arg1 + 0x37) = 1
else
    result = *(arg1 + 0x58)
    
    if (result != arg2[1])
        *(arg1 + 0x50) = *arg2
        *(arg1 + 0x37) = 1

return result
