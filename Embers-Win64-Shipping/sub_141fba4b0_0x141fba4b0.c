// 函数: sub_141fba4b0
// 地址: 0x141fba4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_14216a870(arg1, arg2)

if (result == 0)
    return result

int32_t rax = *(result + 0xc)

if (rax s>= data_143e1d9b4)
    *8 &= 0xfbffffff
    return result

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int64_t rdx_2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
int64_t rcx_3 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
*(rcx_3 + (rdx_2 << 3) + 8) &= 0xfbffffff
return result
