// 函数: sub_141cdf900
// 地址: 0x141cdf900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9_1 = sx.q(arg2)

if (arg2 s< 0 || r9_1.d s>= *(arg1 + 0x30))
    return 

void* rax_1 = *(arg1 + 0x48)
void* r10_1 = arg1 + 0x38

if (rax_1 != 0)
    r10_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(r9_1.d)

if (test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r9_1.d & 0x1f))
    return sub_14086c240(arg3, (r9_1 << 5) + *(arg1 + 0x28)) __tailcall
