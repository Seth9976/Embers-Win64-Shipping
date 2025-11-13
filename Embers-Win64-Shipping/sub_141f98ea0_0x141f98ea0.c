// 函数: sub_141f98ea0
// 地址: 0x141f98ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x84) == 0
*(arg1 + 0x80) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0x78, 0)

void* result = sub_141453140(arg1 + 8, 0)
bool cond:1 = *(arg1 + 0x64) == 0
*(arg1 + 0x60) = 0

if (cond:1)
    return result

return sub_1405dadb0(arg1 + 0x58, 0) __tailcall
