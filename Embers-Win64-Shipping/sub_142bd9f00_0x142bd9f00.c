// 函数: sub_142bd9f00
// 地址: 0x142bd9f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = 0
uint32_t rdx_1 = (arg2 + 7) u>> 3
uint32_t r8_2 = (*(arg1 + 4) + 7) u>> 3

if (rdx_1 u<= r8_2)
    return 0

uint64_t rdi_1 = zx.q(rdx_1 + 7) & 0xfffffff8
*(arg1 + 8) = sub_142b99a90(arg3, 1, r8_2, rdi_1.d, *(arg1 + 8), &result_1)
int32_t result = result_1

if (result == 0)
    *(arg1 + 4) = (rdi_1 << 3).d

return result
