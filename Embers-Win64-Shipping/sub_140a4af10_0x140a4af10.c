// 函数: sub_140a4af10
// 地址: 0x140a4af10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_4 = zx.d(arg1)

if (rdx_4 == 1)
    return u"Debug"

if (rdx_4 == 2)
    return u"DebugGame"

if (rdx_4 == 3)
    return u"Development"

if (rdx_4 == 4)
    return u"Shipping"

if (rdx_4 == 5)
    return u"Test"

return u"Unknown"
