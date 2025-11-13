// 函数: sub_141dd1570
// 地址: 0x141dd1570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_9 = *(arg1 + 0xc)
void* const rax_6

if (rax_9 s>= data_143e1d9b4)
    rax_6 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_9)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_1 = temp1_1 + rdx_2
    rax_6 = *(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(zx.d(rax_1.w) - rdx_2) * 0x18

uint8_t result = (*(rax_6 + 8) u>> 0x1d).b

if ((result & 1) != 0)
    return result

*(arg1 + 0x5b) |= 0x20
return sub_141ddaf30(arg1) __tailcall
