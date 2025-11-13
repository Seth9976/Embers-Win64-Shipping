// 函数: sub_140af3b80
// 地址: 0x140af3b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t _String_1 = 0
int32_t var_10 = 0
char rax
double zmm0
rax, zmm0 = sub_140af5d90(arg1, arg2, arg3, &_String_1)
int32_t* rbx

if (rax == 0)
    rbx.b = 0
else
    int16_t* const _String = &data_142d40450
    
    if (var_10 != 0)
        _String = _String_1
    
    _wtof(_String)
    *arg4 = fconvert.s(zmm0)
    rbx.b = 1

if (_String_1 != 0)
    sub_140a74f90(_String_1)

return zx.q(rbx.b)
