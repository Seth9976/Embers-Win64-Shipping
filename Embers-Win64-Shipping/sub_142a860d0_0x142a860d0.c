// 函数: sub_142a860d0
// 地址: 0x142a860d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* mtx = arg1

if (arg1 == 0)
    mtx = sub_142a85ce0()

int32_t result = _Mtx_unlock(mtx)

if (result == 0)
    return result

noreturn std::_Throw_C_error(result) __tailcall
