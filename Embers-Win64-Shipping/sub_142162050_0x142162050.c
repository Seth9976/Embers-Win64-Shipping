// 函数: sub_142162050
// 地址: 0x142162050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x59) = 0
int64_t result = sub_142165cf0(arg1 + 0x60, 0)
bool cond:0 = *(arg1 + 0x44) == 0
*(arg1 + 0x40) = 0

if (not(cond:0))
    result = sub_1405c5570(arg1 + 0x38, 0)

bool cond:1 = *(arg1 + 0x54) == 0
*(arg1 + 0x50) = 0

if (cond:1)
    return result

return sub_1405c5570(arg1 + 0x48, 0) __tailcall
