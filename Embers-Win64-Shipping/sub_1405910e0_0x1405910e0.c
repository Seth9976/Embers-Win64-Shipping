// 函数: sub_1405910e0
// 地址: 0x1405910e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int32_t code = _Mtx_lock(rbx + 0xa0)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

*(arg1 + 0x40) = 1
_Cnd_broadcast(*(arg1 + 8) + 0xf0)
return _Mtx_unlock(rbx + 0xa0)
