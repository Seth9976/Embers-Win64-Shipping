// 函数: sub_14037821c
// 地址: 0x14037821c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x28) = 0
int64_t pv = *(arg1 + 0x18)

if (pv != 0)
    CoTaskMemFree(pv)
    *(arg1 + 0x18) = 0

*(arg1 + 0x10) = 0
*(arg1 + 0x20) = 7
*(arg1 + 0x24) = 1
