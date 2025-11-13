// 函数: sub_142b8cec0
// 地址: 0x142b8cec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3) s>> 5
*(arg1 + (rax << 2) + 0x23330) += 1
void* r9 = arg1 + (sx.q(arg2) << 2)
int64_t r10 = sx.q(*(r9 + 0x880))
int64_t result = r10 s>> 5
int32_t temp0 = *(arg1 + (result << 2) + 0x23330)
*(arg1 + (result << 2) + 0x23330) -= 1

if (temp0 == 1)
    result = zx.q(neg.d(*(arg1 + 0x2331c)))
    *(arg1 + (r10 s>> 5 << 2) + 0x23330) = result.d
    *(arg1 + 0x2331c) = r10.d

*(r9 + 0x880) = arg3
return result
