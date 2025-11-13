// 函数: sub_140a478c0
// 地址: 0x140a478c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_4 = *(arg1 + 0x48)
uint64_t r8_1 = zx.q(rax_4) u>> 3
char rdx = 1 << (rax_4.b & 7)
char rcx_1 = *(*(arg1 + 0x40) + r8_1) & rdx

if ((*(r8_1 + *(arg1 + 0x38)) & rdx) == 0 && rcx_1 == 0)
    return 2

int64_t result
result.b = rcx_1 != 0
return result
