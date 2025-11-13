// 函数: sub_141902a20
// 地址: 0x141902a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x128)
sub_1418fe410(arg1, 0)
int64_t rbp = sx.q(*(arg1 + 0x158))
uint64_t var_10 = zx.q(data_14399fa54)
int32_t rax_1 = (rbp + 1).d
*(arg1 + 0x158) = rax_1

if (rax_1 s> *(arg1 + 0x15c))
    sub_1405a4f90(arg1 + 0x150)

*(*(arg1 + 0x150) + rbp * 0x10) = arg2.o
int32_t result = *(arg1 + 0x160)
int32_t result_1 = *(arg1 + 0x158)

if (result u>= result_1)
    result_1 = result

*(arg1 + 0x160) = result_1

if (arg1 == -0x128)
    return result

return LeaveCriticalSection(arg1 + 0x128)
