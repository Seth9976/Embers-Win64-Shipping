// 函数: sub_14067bd00
// 地址: 0x14067bd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* _String

if (*(arg1 + 0x18) == 0)
    _String = &data_142d40450
else
    _String = *(arg1 + 0x10)

*arg2 = _wcstoui64(_String, nullptr, 0)
uintmax_t result
result.b = 1
return result
