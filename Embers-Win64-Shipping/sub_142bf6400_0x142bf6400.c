// 函数: sub_142bf6400
// 地址: 0x142bf6400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg2)
void* rbp = arg2->__offset(0x28).q
int32_t rbx_1

if (sub_142b92f00(rbp, arg3, arg2->__offset(0x30).d, arg5) == 0)
    int32_t rdx_1 = *(*(rbp + 0x78) + 0x38)
    *arg4 = rdx_1
    arg4[1] = *(*(rbp + 0x78) + 0x3c)
    int32_t r8_1 = *(*(rbp + 0x78) + 0x30)
    arg4[2] = r8_1
    int32_t rcx_4 = neg.d(*(*(rbp + 0x78) + 0x34))
    arg4[3] = rcx_4
    
    if (*(arg1 + 0x20) s< 0)
        *arg4 = neg.d(rdx_1)
        arg4[2] = neg.d(r8_1)
    
    if (*(arg1 + 0x24) s< 0)
        arg4[1] = neg.d(arg4[1])
        arg4[3] = neg.d(rcx_4)
    
    rbx_1 = 1
else
    rbx_1 = 0

LeaveCriticalSection(arg2)
return zx.q(rbx_1)
