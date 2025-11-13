// 函数: sub_140b550b0
// 地址: 0x140b550b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x29) &= 0xfe
int64_t rax = *arg1
int32_t rsi = 0
arg1[0x15] = 0
arg1[0x14] = arg3
(*(rax + 0xf8))(arg4, zx.q(*(arg2 + 0x54)))
(*(*arg1 + 0x100))(arg1, zx.q(arg2[0xb].d))
arg1[0x13].d = 0

if (*(arg1 + 0x9c) != 0)
    sub_1405c5510(&arg1[0x12], 0)
    rsi = arg1[0x13].d

int32_t rcx_4 = ((arg3 + 7) s>> 3).d + rsi
arg1[0x13].d = rcx_4

if (rcx_4 s> *(arg1 + 0x9c))
    sub_1405daba0(&arg1[0x12])

arg1[0x12]
jump(*(*arg2 + 0x158))
