// 函数: sub_140cbb8b0
// 地址: 0x140cbb8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x18)
int32_t rdx = *((sx.q(arg3) << 7) + r9 + 0xc)

if (rdx s>= 0)
    if (rdx == 0)
        sub_140b63580(&data_143de5770, arg2)
        return arg2
    
    *arg2 = *(*(arg1 + 0xa0) + 0x18)
    return arg2

int64_t r8 = *(arg1 + 8)
int64_t rax_3 = sx.q(*(sx.q(not.d(rdx)) * 0x38 + r8 + 8))

if (rax_3.d s>= 0)
    *arg2 = *(r9 - 0x80 + (rax_3 << 7))
    return arg2

*arg2 = *(sx.q(0xffffffff - rax_3.d) * 0x38 + r8)
return arg2
