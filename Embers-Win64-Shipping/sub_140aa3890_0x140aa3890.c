// 函数: sub_140aa3890
// 地址: 0x140aa3890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wint_t _C = *arg2

if (_C == 0x28)
    return 2

if (iswalnum(_C) == 0 && _C != 0x5f)
    return 3

return 0
