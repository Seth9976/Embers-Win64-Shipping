// 函数: sub_1426e71c0
// 地址: 0x1426e71c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t rax = *(arg1 + 0xc)

if (rax s>= data_143e1d9b4)
    *8 |= 0x20000000
    return 0

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int64_t rdx_2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
int64_t result = data_143e1d9a0
int64_t rcx_3 = *(result + (sx.q(rax_2 s>> 0x10) << 3))
*(rcx_3 + (rdx_2 << 3) + 8) |= 0x20000000
return result
