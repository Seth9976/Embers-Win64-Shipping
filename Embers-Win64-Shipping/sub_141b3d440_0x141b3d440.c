// 函数: sub_141b3d440
// 地址: 0x141b3d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)

if (arg1 + 0x20 != arg2 + 0x20)
    int32_t r8_1 = *(arg1 + 0x2c)
    int64_t rbp_1 = sx.q(*(arg2 + 0x28))
    int64_t r14_1 = *(arg2 + 0x20)
    *(arg1 + 0x28) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_140808f70(arg1 + 0x20, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x20), r14_1, (rbp_1 * 0x18).d)
    else
        *(arg1 + 0x2c) = rbp_1.d

*(arg1 + 0x30) ^= (*(arg1 + 0x30) ^ *(arg2 + 0x30)) & 1
*(arg1 + 0x30) ^= (*(arg2 + 0x30) ^ *(arg1 + 0x30)) & 2
return arg1
