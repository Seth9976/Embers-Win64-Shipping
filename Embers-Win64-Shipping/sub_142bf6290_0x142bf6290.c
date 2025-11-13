// 函数: sub_142bf6290
// 地址: 0x142bf6290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg2)
void* rbx = arg2->__offset(0x28).q
*arg3 = sub_142b93e80(sx.d(*(rbx + 0x6a)), *(*(rbx + 0x80) + 0x20))
int32_t rax_3 = sub_142b93e80(sx.d(*(rbx + 0x6c)), *(*(rbx + 0x80) + 0x20))
int32_t r14 = *arg3
arg3[1] = rax_3
int32_t rax_5 = sub_142b93e80(sx.d(*(rbx + 0x6e)), *(*(rbx + 0x80) + 0x20)) + rax_3 - r14
arg3[2] = rax_5

if (*(arg1 + 0x24) s< 0)
    *arg3 = neg.d(r14)
    arg3[2] = neg.d(rax_5)
    arg3[1] = neg.d(rax_3)

LeaveCriticalSection(arg2)
return 1
