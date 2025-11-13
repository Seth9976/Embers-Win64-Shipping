// 函数: sub_140cb8a90
// 地址: 0x140cb8a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(*arg1 + 0x110))(arg1, arg4)

if (result == 0)
    return result

int64_t rsi_1 = sx.q(*(arg2 + 0x1f0))
int32_t rdi_4 = (*(arg1 + 0x4c) + arg3) << 0xd | 0xa00
int32_t rax_1 = (rsi_1 + 1).d
*(arg2 + 0x1f0) = rax_1

if (rax_1 s> *(arg2 + 0x1f4))
    sub_1405a4cf0(arg2 + 0x1e8)

*(*(arg2 + 0x1e8) + (rsi_1 << 2)) = rdi_4
return sub_140cb83d0(arg2 + 0x1e8, arg1)
