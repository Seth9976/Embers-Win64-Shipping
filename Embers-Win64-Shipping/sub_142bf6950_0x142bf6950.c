// 函数: sub_142bf6950
// 地址: 0x142bf6950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg2)
int32_t rax = sub_142b91fc0(arg2->__offset(0x28).q)
int32_t rdi_1

if (rax != 0)
    *arg4 = rax
    rdi_1 = 1
else if (arg2->__offset(0x34).b == rax.b || arg3 u> 0xff)
    rdi_1 = 0
else
    rax = sub_142b91fc0(arg2->__offset(0x28).q)
    
    if (rax != 0)
        *arg4 = rax
        rdi_1 = 1
    else
        rdi_1 = 0

LeaveCriticalSection(arg2)
return zx.q(rdi_1)
