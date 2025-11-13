// 函数: sub_142586920
// 地址: 0x142586920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_2 = *(arg2 + 0x20)
int64_t r9
r9.b = rax_2 != 0
*(arg2 + 0x20) = r9 + rax_2
int32_t rax_1 = *(arg1 + 0x38) + 6

if (rax_1 s< 6)
    *arg3 = 0x40
    return 0x40

char rcx = 0xa

if (rax_1 s< 0xa)
    rcx = rax_1.b

int32_t result = 1 << rcx
*arg3 = result
return result
