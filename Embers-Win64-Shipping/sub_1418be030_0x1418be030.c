// 函数: sub_1418be030
// 地址: 0x1418be030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(*arg1 + 0x1558)
EnterCriticalSection(rdi + 0x18)
int64_t r12 = *(rdi + 0x40)
int64_t r13 = *(rdi + 0x48)

if (rdi != -0x18)
    LeaveCriticalSection(rdi + 0x18)

int32_t rbp = data_143efb2fc
EnterCriticalSection(&arg1[1])
int64_t rsi_1 = sx.q(arg1[7].d)
int32_t rax_1 = (rsi_1 + 1).d
arg1[7].d = rax_1

if (rax_1 s> *(arg1 + 0x3c))
    sub_1407c3b60(&arg1[6])

int32_t* rcx_5 = rsi_1 * 0x38 + arg1[6]
*rcx_5 = arg2
rcx_5[1] = rbp
*(rcx_5 + 8) = r13
*(rcx_5 + 0x10) = r12
*(rcx_5 + 0x18) = arg3
__builtin_memset(&rcx_5[8], 0, 0x18)

if (arg1 == -8)
    return 0

return LeaveCriticalSection(&arg1[1])
