// 函数: sub_1407c8900
// 地址: 0x1407c8900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x348))()
arg1[7].d = 0

if (*(arg1 + 0x3c) != rax_1)
    sub_1405dadb0(&arg1[6], rax_1)

int32_t rax_3 = (*(*arg1 + 0x348))(arg1)
int64_t rsi = sx.q(arg1[7].d)
int64_t rbp = sx.q(rax_3)
int32_t rcx_2 = (rsi + rbp).d
arg1[7].d = rcx_2

if (rcx_2 s> *(arg1 + 0x3c))
    sub_1406105e0(&arg1[6])

int64_t result = memset(arg1[6] + (rsi << 2), 0, rbp << 2)
*(arg1 + 0x4c) = 0
return result
