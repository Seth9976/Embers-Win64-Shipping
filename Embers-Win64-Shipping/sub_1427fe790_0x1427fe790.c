// 函数: sub_1427fe790
// 地址: 0x1427fe790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x50)

if ((*(result + 0x7c) & 2) == 0)
    return result

*(result + 0x6c) = tanf(*(result + 0x64) * 0.25f)
*(result + 0x70) = tanf(*(result + 0x68) * 0.25f)
*(result + 0x74) = tanf(*(result + 0x60) * 0.25f)
return *(arg1 + 0x50)
