// 函数: _set_new_handler
// 地址: 0x141b543e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419a21e0(0)
EnterCriticalSection(arg1 + 0x68)
uint64_t result = sub_141b545b0(arg1)

if (arg1 == -0x68)
    return result

return LeaveCriticalSection(arg1 + 0x68)
