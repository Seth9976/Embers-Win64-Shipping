// 函数: sub_141cdb780
// 地址: 0x141cdb780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x30))
    return 

void* rax_1 = *(arg1 + 0x48)
void* r9_1 = arg1 + 0x38

if (rax_1 != 0)
    r9_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(arg2)

if (test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg2 & 0x1f))
    sub_1409d8530(arg1 + 0x28, arg2, 1)
    sub_1409d8140(arg1 + 0x178, arg2)
