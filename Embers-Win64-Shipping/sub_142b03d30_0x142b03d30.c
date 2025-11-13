// 函数: sub_142b03d30
// 地址: 0x142b03d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
void* result

if (arg2 s<= 1)
    result = nullptr
    *(r8 + 0x5c) = 0
    *(r8 + 0x60) = 0
    *(r8 + 0x68) = 0
    *(r8 + 0x70) = 0

if (arg2 s> 1 || arg2 != 1)
    result = nullptr
    *(r8 + 0x62) = 0
    *(r8 + 0x66) = 0

if (*(r8 + 0x8f) == 0x6b)
    if (arg2 s<= 1 && *(r8 + 0x6c) == 1)
        result = *(r8 + 0x50)
        *(result + 0x48) = 0
        *(result + 0x40) = 0
    
    if (arg2 s> 1 || arg2 != 1)
        if (*(arg1 + 0x5b) == 0)
            *(arg1 + 0x5b) = 4
            *(arg1 + 0x68) = 0x4329241b
        
        if (*(r8 + 0x6c) == 1)
            result = *(r8 + 0x50)
            *(result + 0x50) = 1

return result
