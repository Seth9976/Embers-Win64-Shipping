// 函数: sub_14281f074
// 地址: 0x14281f074
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xb8)

if (*(arg1 + 0xb0) != result)
    void* rcx = *(result - 8)
    *(rcx + 0x10) += 1
    result = *(arg1 + 0xb8)
    void* rcx_1 = *(result - 8)
    
    if ((*(rcx_1 + 0x10) & 1) == 0)
        *(rcx_1 + 0x18) = 0
else
    *(arg1 + 0xd8) += 1

*(arg1 + 0xd0) = 0
return result
