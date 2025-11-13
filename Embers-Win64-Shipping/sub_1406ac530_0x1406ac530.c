// 函数: sub_1406ac530
// 地址: 0x1406ac530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*(arg1 + 0x48) + 0xe8) = GetCurrentThreadId()
EnumWindows(sub_1406b03c0, *(arg1 + 0x48))
_Cnd_broadcast(*(arg1 + 0x48) + 0x50)
int64_t* rcx_2 = *(arg1 + 0x40)
int64_t arg_8 = *(arg1 + 0x48) + 0x28

if (rcx_2 == 0)
    std::_Xbad_function_call()
    noreturn

(*(*rcx_2 + 0x10))(rcx_2, arg2, &arg_8)
return arg2
