// 函数: sub_141cdb690
// 地址: 0x141cdb690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x148))
    return 

void* r8_1 = arg1 + 0x150
void* rax_1 = *(r8_1 + 0x10)

if (rax_1 != 0)
    r8_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(arg2)

if (test_bit(*(r8_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg2 & 0x1f))
    sub_1409d8440(arg1 + 0x140, arg2, 1)
    sub_1409d8140(arg1 + 0x330, arg2)
