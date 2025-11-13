// 函数: sub_140db8fd0
// 地址: 0x140db8fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xe8)
void* rsi = arg2[1]
int64_t r14 = *arg2

if (rsi != 0)
    *(rsi + 0xc) += 1

int64_t rbp_1 = sx.q(*(arg1 + 0x18))
int32_t rax = (rbp_1 + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405a4f90(arg1 + 0x10)

int64_t* result = (rbp_1 << 4) + *(arg1 + 0x10)
*result = r14
result[1] = rsi

if (arg1 == -0xe8)
    return result

return LeaveCriticalSection(arg1 + 0xe8)
