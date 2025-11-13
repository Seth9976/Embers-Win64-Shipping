// 函数: sub_142bf6820
// 地址: 0x142bf6820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg2)
int32_t arg_10
int32_t rbx_1

if (sub_142b91d10(arg2->__offset(0x28).q, arg3, arg2->__offset(0x30).d | 0x10, &arg_10, arg4) == 0)
    int32_t rax_1 = arg_10
    
    if (*(arg1 + 0x24) s< 0)
        rax_1 = neg.d(rax_1)
        arg_10 = rax_1
    
    rbx_1 = (0x200 - rax_1) s>> 0xa
else
    rbx_1 = 0

LeaveCriticalSection(arg2)
return zx.q(rbx_1)
