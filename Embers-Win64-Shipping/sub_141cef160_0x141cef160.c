// 函数: sub_141cef160
// 地址: 0x141cef160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)
int64_t r9 = sx.q(arg2)

if (arg2 s>= 0 && r9.d s< *(r10 + 0xe8))
    void* r8_1 = r10 + 0xf0
    void* rax_1 = *(r8_1 + 0x10)
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9.d)
    
    if (test_bit(*(r8_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r9.d & 0x1f))
        return zx.q(*(*(r10 + 0xe0) + r9 * 0x28 + 8))

return 0
