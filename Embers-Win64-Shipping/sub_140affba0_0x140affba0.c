// 函数: sub_140affba0
// 地址: 0x140affba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u> *(arg1 + 0x20))
    return 

EnterCriticalSection(arg1 + 0x28)
int64_t rsi_1 = sx.q(*(arg1 + 0x18))
int32_t rax_1 = (rsi_1 + 1).d
*(arg1 + 0x18) = rax_1

if (rax_1 s> *(arg1 + 0x1c))
    sub_1405c4ec0(arg1 + 0x10)

int64_t* rcx_3 = &(*(arg1 + 0x10))[rsi_1 * 5]

if (rcx_3 != 0)
    sub_140b0a190(rcx_3, arg2, arg4, arg3, -0x4010000000000000, nullptr)

if (arg1 != -0x28)
    LeaveCriticalSection(arg1 + 0x28)
