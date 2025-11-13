// 函数: sub_141baf330
// 地址: 0x141baf330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x470)

if (result == 0)
    result = *(arg1 + 0xa8)
    
    if (result != 0)
        return sub_142029870(*(result + 0x188)) __tailcall
    
    result = sub_141ee69e0(arg1)
    
    if (result != 0)
        return sub_142029870(*(result + 0x188)) __tailcall

return result
