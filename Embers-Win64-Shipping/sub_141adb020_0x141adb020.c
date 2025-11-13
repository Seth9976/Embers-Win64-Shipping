// 函数: sub_141adb020
// 地址: 0x141adb020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x29) = *(arg2 + 0x29)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0xa8) = *(arg2 + 0xa8)

if (arg1 + 0xb8 != arg2 + 0xb8)
    int32_t r8_1 = *(arg1 + 0xc4)
    int64_t rbp_1 = *(arg2 + 0xb8)
    int64_t rsi_1 = sx.q(*(arg2 + 0xc0))
    *(arg1 + 0xc0) = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1407c35c0(arg1 + 0xb8, rsi_1.d, r8_1)
        memcpy(*(arg1 + 0xb8), rbp_1, (rsi_1 << 6).d)
    else
        *(arg1 + 0xc4) = rsi_1.d

return arg1
