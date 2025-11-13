// 函数: sub_140a22710
// 地址: 0x140a22710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t _MaxCount_2 = arg1[1].d
int32_t _MaxCount_3 = arg2[1].d
int32_t _MaxCount_1 = _MaxCount_3
wchar16* _String2 = *arg2
wchar16* _String1 = *arg1

if (_MaxCount_2 s<= _MaxCount_3)
    _MaxCount_1 = _MaxCount_2

int64_t _MaxCount = sx.q(_MaxCount_1)
int32_t result

if (arg3 != 0)
    result = sub_140a546e0(_String1, _String2, _MaxCount)
else
    result = wcsncmp(_String1, _String2, _MaxCount)

if (result == 0 && _MaxCount_2 != _MaxCount_3)
    result = 1
    
    if (_MaxCount_2 s< _MaxCount_3)
        return -1

return result
