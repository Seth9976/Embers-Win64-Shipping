// 函数: sub_141cdd9f0
// 地址: 0x141cdd9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)

if (arg2 s>= 0 && r8.d s< *(arg1 + 0x110))
    void* r9_1 = arg1 + 0x118
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8.d)
    
    if (test_bit(*(r9_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r8.d & 0x1f))
        return zx.q(*(*(arg1 + 0x108) + r8 * 0x28 + 8))

return 0
