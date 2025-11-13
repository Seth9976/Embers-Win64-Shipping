// 函数: sub_140b34a80
// 地址: 0x140b34a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wint_t _C = *arg2

if (iswspace(_C) != 0 || _C == 0x7d)
    return 2

if (iswalnum(_C) == 0 && _C != 0x5f)
    return 3

return 0
