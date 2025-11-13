// 函数: sub_142bf68a0
// 地址: 0x142bf68a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg2)
void* r14 = arg2->__offset(0x28).q
int32_t rbx_1

if (sub_142b92f00(r14, arg3, arg2->__offset(0x30).d, arg5) == 0)
    void* rax_1 = *(r14 + 0x78)
    *arg4 = *(rax_1 + 0x38) - *(rax_1 + 0x44)
    void* rax_2 = *(r14 + 0x78)
    *arg6 = *(rax_2 + 0x48) + *(rax_2 + 0x3c)
    
    if (*(arg1 + 0x20) s< 0)
        *arg4 = neg.d(*arg4)
    
    if (*(arg1 + 0x24) s< 0)
        *arg6 = neg.d(*arg6)
    
    rbx_1 = 1
else
    rbx_1 = 0

LeaveCriticalSection(arg2)
return zx.q(rbx_1)
