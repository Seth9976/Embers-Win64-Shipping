// 函数: sub_141ed9ac0
// 地址: 0x141ed9ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(*(*(*arg1 + 8) + (sx.q(*arg2) << 3)) + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_2
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18

uint8_t result = (*(rax_7 + 8) u>> 0x1d).b

if ((result & 1) != 0)
    return result

jump(***arg1[1])
