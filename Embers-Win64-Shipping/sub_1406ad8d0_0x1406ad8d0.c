// 函数: sub_1406ad8d0
// 地址: 0x1406ad8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x170) = arg2
int32_t code = _Mtx_lock(arg1 + 0x20)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

if (*(arg1 + 8) == 4)
    return _Mtx_unlock(arg1 + 0x20) __tailcall

*(arg1 + 8) = 3
_Mtx_unlock(arg1 + 0x20)
int32_t code_1 = _Mtx_lock(arg1 + 0xd0)

if (code_1 != 0)
    std::_Throw_C_error(code_1)
    noreturn

if (*(arg1 + 0x138) s< 2)
    *(arg1 + 0x138) = 2

_Cnd_broadcast(arg1 + 0x88)
_Mtx_unlock(arg1 + 0xd0)
return sub_1406af060(arg1) __tailcall
