// 函数: sub_1420a6b70
// 地址: 0x1420a6b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) != 0)
    sub_1405c5570(arg1 + 0x28, 0)

bool cond:0 = *(arg1 + 0x44) == 0
*(arg1 + 0x40) = 0

if (not(cond:0))
    sub_140638cc0(arg1 + 0x38, 0)

bool cond:1 = *(arg1 + 0x54) == 0
*(arg1 + 0x50) = 0

if (cond:1)
    return 

return sub_1405a5130(arg1 + 0x48, 0) __tailcall
