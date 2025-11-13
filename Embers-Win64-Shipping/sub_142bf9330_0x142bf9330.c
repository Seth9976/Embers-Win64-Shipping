// 函数: sub_142bf9330
// 地址: 0x142bf9330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = arg2 - (zx.d(*(arg1 + 6)) << 8) - zx.d(*(arg1 + 7))
void* rax_3

if (rdx_1 u< (zx.d(*(arg1 + 8)) << 8) + zx.d(*(arg1 + 9)))
    rax_3 = arg1 + 8 + ((zx.q(rdx_1) + 1) << 1)
else
    rax_3 = &data_14369a5d0

uint32_t result = zx.d(*(rax_3 + 1))
uint32_t rcx_4 = zx.d(*rax_3) << 8

if (rcx_4 == neg.d(result))
    result.b = 0
    return result

*arg3 = rcx_4 + result
result.b = 1
return result
