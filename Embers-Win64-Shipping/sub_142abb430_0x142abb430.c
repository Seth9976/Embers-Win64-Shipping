// 函数: sub_142abb430
// 地址: 0x142abb430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *(arg1 + 0x10)

if (*(r11 + 8) != arg2 || (*(arg1 + 0x18) != 0 && *(arg1 + 0x19) != 0))
    return 

*(arg1 + 0x19) = 1
*(r11 + 0xc) = *(arg1 + 8) + arg3
*(*(arg1 + 0x10) + 0x10) = *(arg1 + 8) + arg4
