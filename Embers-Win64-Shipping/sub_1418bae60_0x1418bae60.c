// 函数: sub_1418bae60
// 地址: 0x1418bae60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x30)
int64_t rdi_1 = sx.q(*(arg1 + 0x88))
int32_t r8
int32_t var_10 = r8
int32_t rax = (rdi_1 + 1).d
*(arg1 + 0x88) = rax

if (rax s> *(arg1 + 0x8c))
    sub_1405a4f90(arg1 + 0x80)

int64_t result = *(arg1 + 0x80)
*(result + rdi_1 * 0x10) = arg2.o

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(arg1 + 0x30)
