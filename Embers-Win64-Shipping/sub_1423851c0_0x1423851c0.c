// 函数: sub_1423851c0
// 地址: 0x1423851c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
EnterCriticalSection(arg1 + 0x580)
int64_t rsi = sx.q(*(arg1 + 0x260))
int32_t rax = (rsi + 1).d
*(arg1 + 0x260) = rax

if (rax s> *(arg1 + 0x264))
    sub_1405a4d70(arg1 + 0x258)

*(*(arg1 + 0x258) + (rsi << 3)) = arg2
*(arg2 + 0x34) = rsi.d
int64_t rsi_1 = sx.q(*(arg1 + 0x270))
int32_t rax_2 = (rsi_1 + 1).d
*(arg1 + 0x270) = rax_2

if (rax_2 s> *(arg1 + 0x274))
    sub_1405daba0(arg1 + 0x268)

char rcx_3 = 0
*(rsi_1 + *(arg1 + 0x268)) = arg3

if (*(arg1 + 0x380) == 0)
    rcx_3 = 0x10

*(arg2 + 0x3d) = rcx_3 | (*(arg2 + 0x3d) & 0xef)
void arg_18
int32_t* result = sub_140946410(arg1 + 0x20, &arg_18, &arg_10, nullptr)

if (arg1 == -0x580)
    return result

return LeaveCriticalSection(arg1 + 0x580)
