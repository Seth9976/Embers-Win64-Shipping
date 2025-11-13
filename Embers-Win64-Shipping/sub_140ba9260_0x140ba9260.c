// 函数: sub_140ba9260
// 地址: 0x140ba9260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x50)
*(arg1 + 0x340) = -1
*(arg1 + 0x348) = -1

if (*(result + 0x295) != 0)
    return result

if (*(result + 0x2a2) == 0)
    return sub_140ba9200(nullptr) __tailcall

return sub_140ba9200(*(result + 0x2d8)) __tailcall
