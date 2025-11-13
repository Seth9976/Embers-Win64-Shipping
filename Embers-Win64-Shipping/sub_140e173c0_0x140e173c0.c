// 函数: sub_140e173c0
// 地址: 0x140e173c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].b = 0

if (*(arg1 + 0x8f0) != 0)
    *arg2 = *(arg1 + 0x8ec)
    arg2[1].b = 1

arg2[3].b = 0

if (*(arg1 + 0x8f8) != 0)
    arg2[2] = *(arg1 + 0x8f4)
    arg2[3].b = 1

arg2[5].b = 0

if (*(arg1 + 0x900) != 0)
    arg2[4] = *(arg1 + 0x8fc)
    arg2[5].b = 1

arg2[7].b = 0

if (*(arg1 + 0x908) != 0)
    arg2[6] = *(arg1 + 0x904)
    arg2[7].b = 1

return arg2
