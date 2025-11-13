// 函数: sub_1406afd90
// 地址: 0x1406afd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t code = _Mtx_lock(&arg1[1])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

while (arg1->__offset(0xb0).d s< 2)
    _Cnd_wait(arg1, &arg1[1])

return _Mtx_unlock(&arg1[1]) __tailcall
