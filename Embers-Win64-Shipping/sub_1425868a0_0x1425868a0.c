// 函数: sub_1425868a0
// 地址: 0x1425868a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg2 + 0x20)
int64_t rax
rax.b = r9 != 0
*(arg2 + 0x20) = rax + r9
int32_t rdx = *(arg1 + 0x3c)

if (rdx s< 0)
    *arg3 = 0
    return 0

int32_t rax_2 = 4

if (rdx s< 4)
    rax_2 = rdx

int32_t result = rax_2 * 2
*arg3 = result
return result
