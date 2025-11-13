// 函数: sub_142bf6a60
// 地址: 0x142bf6a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg2)
int32_t rax = sub_142b91c90(arg2->__offset(0x28).q, zx.q(arg3), zx.q(arg4))
int32_t rbx_1

if (rax != 0)
    rbx_1 = 1
    *arg5 = rax
else
    rbx_1 = 0

LeaveCriticalSection(arg2)
return zx.q(rbx_1)
