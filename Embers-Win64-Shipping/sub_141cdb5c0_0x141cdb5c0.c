// 函数: sub_141cdb5c0
// 地址: 0x141cdb5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0xa0))
    return 

void* r10_1 = arg1 + 0xa8
void* rax_1 = *(r10_1 + 0x10)

if (rax_1 != 0)
    r10_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(arg2)

if (test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg2 & 0x1f))
    return sub_141ccfe20(arg1 + 0x28, arg2, arg3) __tailcall
