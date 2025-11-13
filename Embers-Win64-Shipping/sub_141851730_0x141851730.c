// 函数: sub_141851730
// 地址: 0x141851730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_2 = zx.d(*arg1)

if (rdx_2 == 0)
    return u"Success"

if (rdx_2 == 1)
    return u"FileCreateFail"

if (rdx_2 == 2)
    return u"BadArchive"

if (rdx_2 == 3)
    return u"SerializationError"

return u"Unknown"
