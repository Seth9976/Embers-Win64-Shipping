// 函数: sub_141bed150
// 地址: 0x141bed150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_1 = *(arg1 + 0x28)

if (r8_1 == 0)
    return 

int32_t rax_1 = *(r8_1 + 0xc)
void* const rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_2
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18

if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
    return sub_141bf60b0(r8_1) __tailcall
