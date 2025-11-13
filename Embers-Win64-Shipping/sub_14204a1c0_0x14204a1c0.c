// 函数: sub_14204a1c0
// 地址: 0x14204a1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0x44)
    int64_t rdi_1 = sx.q(*(arg2 + 0x40))
    *(arg1 + 0x40) = rdi_1.d
    
    if (rdi_1.d == 0 && r8_1 == 0)
        *(arg1 + 0x44) = 4
        return arg1
    
    sub_14088f7d0(arg1, rdi_1.d, r8_1)
    memcpy(arg1, arg2, (rdi_1 << 4).d)

return arg1
