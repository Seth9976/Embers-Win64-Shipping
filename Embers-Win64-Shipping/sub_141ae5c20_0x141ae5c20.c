// 函数: sub_141ae5c20
// 地址: 0x141ae5c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141adb020(arg1, arg2)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xe9) = *(arg2 + 0xe9)
*(arg1 + 0xec) = *(arg2 + 0xec)
sub_140780b40(arg1 + 0xf0, arg2 + 0xf0)
*(arg1 + 0x100) = *(arg2 + 0x100)
*(arg1 + 0x104) = *(arg2 + 0x104)
*(arg1 + 0x108) = *(arg2 + 0x108)
*(arg1 + 0x110) = *(arg2 + 0x110)
*(arg1 + 0x120) = *(arg2 + 0x120)
*(arg1 + 0x130) = *(arg2 + 0x130)
*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x144) = *(arg2 + 0x144)
sub_141ae6680(arg1 + 0x148, arg2 + 0x148)

if (arg1 + 0x1b0 != arg2 + 0x1b0)
    int64_t rbp_1 = sx.q(*(arg2 + 0x1b8))
    int64_t r14_1 = *(arg2 + 0x1b0)
    int32_t r8_1 = *(arg1 + 0x1bc)
    *(arg1 + 0x1b8) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(arg1 + 0x1b0, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x1b0), r14_1, (rbp_1 << 4).d)
    else
        *(arg1 + 0x1bc) = rbp_1.d

sub_141ae6680(arg1 + 0x1c0, arg2 + 0x1c0)
*(arg1 + 0x228) = *(arg2 + 0x228)

if (arg1 + 0x230 != arg2 + 0x230)
    int64_t rbp_2 = sx.q(*(arg2 + 0x238))
    int64_t r14_2 = *(arg2 + 0x230)
    int32_t r8_4 = *(arg1 + 0x23c)
    *(arg1 + 0x238) = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1405c4bc0(arg1 + 0x230, rbp_2.d, r8_4)
        memcpy(*(arg1 + 0x230), r14_2, (rbp_2 * 0x14).d)
    else
        *(arg1 + 0x23c) = rbp_2.d

sub_140627690(arg1 + 0x240, arg2 + 0x240)

if (arg1 + 0x250 != arg2 + 0x250)
    int64_t rsi_2 = sx.q(*(arg2 + 0x258))
    int64_t rbp_3 = *(arg2 + 0x250)
    int32_t r8_8 = *(arg1 + 0x25c)
    *(arg1 + 0x258) = rsi_2.d
    
    if (rsi_2.d != 0 || r8_8 != 0)
        sub_1405a4be0(arg1 + 0x250, rsi_2.d, r8_8)
        memcpy(*(arg1 + 0x250), rbp_3, (rsi_2 << 4).d)
    else
        *(arg1 + 0x25c) = rsi_2.d

return arg1
