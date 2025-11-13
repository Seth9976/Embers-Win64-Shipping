// 函数: sub_141cda210
// 地址: 0x141cda210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x110))
    return 

void* r9_1 = arg1 + 0x118
void* rax_1 = *(r9_1 + 0x10)

if (rax_1 != 0)
    r9_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(arg2)

if (test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), arg2 & 0x1f))
    return sub_141cd95d0(arg1 + 0x28, arg2) __tailcall
