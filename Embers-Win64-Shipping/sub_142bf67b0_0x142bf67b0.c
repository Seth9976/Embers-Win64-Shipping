// 函数: sub_142bf67b0
// 地址: 0x142bf67b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg2)
int32_t rbx_1
rbx_1.b = sub_142b92050(arg2->__offset(0x28).q, arg3, arg4, arg5) == 0

if (rbx_1 != 0 && arg5 != 0 && *arg4 == 0)
    rbx_1 = 0

LeaveCriticalSection(arg2)
return zx.q(rbx_1)
