// 函数: sub_141ee0600
// 地址: 0x141ee0600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rax_1 = (arg1[1].d u>> 0xf).b

if ((rax_1 & 1) != 0)
    *(arg1 + 0x8b) &= 0xfe
    return rax_1

int32_t rax_2 = *(arg1 + 0xc)
void* const rax_9

if (rax_2 s>= data_143e1d9b4)
    rax_9 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_2)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_4 = temp1_1 + rdx_1
    rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18

uint8_t rax_11 = (*(rax_9 + 8) u>> 0x1c).b

if ((rax_11 & 1) == 0)
    int32_t rcx_4 = *(arg1[2] + 0xcc)
    rax_11 = (rcx_4 u>> 0x12).b
    
    if ((rax_11 & 1) != 0 || ((rcx_4 u>> 7).b & 1) == 0)
        rax_11 = sub_142459ef0(arg1, arg2)

*(arg1 + 0x8b) &= 0xfe
return rax_11
