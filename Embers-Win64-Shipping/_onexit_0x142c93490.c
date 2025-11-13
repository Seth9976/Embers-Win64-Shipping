// 函数: _onexit
// 地址: 0x142c93490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

_onexit_t_1 _Function = arg1
int32_t rax

if (data_14401b128 != -1)
    rax = _register_onexit_function(&data_14401b128, _Function)
else
    rax = _crt_atexit(arg1)

if (rax == 0)
    return _Function

return nullptr
