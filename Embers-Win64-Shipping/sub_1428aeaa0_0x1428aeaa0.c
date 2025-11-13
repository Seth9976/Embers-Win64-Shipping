// 函数: sub_1428aeaa0
// 地址: 0x1428aeaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0xd0)
int32_t r8_1 = rdx & 2

if (r8_1 == 0 || (*(arg1 + 0xd4) & 4) != 0)
    if ((rdx.b & 1) == 0)
        if ((rdx & 0x2040) == 0x2040)
            return 3
        
        if (r8_1 != 0)
            return 4
        
        if ((rdx.b & 8) != 0 && (*(arg1 + 0xdc) & 7) != 0)
            return 5
    else if ((rdx.b & 0x10) != 0)
        return 1

return 0
