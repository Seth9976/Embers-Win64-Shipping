// 函数: sub_140ca8fe0
// 地址: 0x140ca8fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg2 + 0x28)

if ((result & 3) != 0 && (result & 0x10) == 0)
    result = (*(arg1 + 0xb0)).b & 0x20
    
    if (result == 0)
        return result

return 1
