// 函数: sub_140af3c80
// 地址: 0x140af3c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t _String_1 = 0
int32_t var_10 = 0
int32_t* rbx

if (sub_140af5d90(arg1, arg2, arg3, &_String_1) == 0)
    rbx.b = 0
else
    int16_t* const _String = &data_142d40450
    
    if (var_10 != 0)
        _String = _String_1
    
    *arg4 = _wtoi(_String)
    rbx.b = 1

if (_String_1 != 0)
    sub_140a74f90(_String_1)

return zx.q(rbx.b)
