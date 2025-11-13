// 函数: sub_141d95cb0
// 地址: 0x141d95cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
sub_140597df0(&arg1[4], &arg2[4])
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x28) = *(arg2 + 0x28)
arg1[0xc].b = arg2[0xc].b
*(arg1 + 0x31) = *(arg2 + 0x31)
*(arg1 + 0x32) = *(arg2 + 0x32)
*(arg1 + 0x33) = *(arg2 + 0x33)
sub_14081d8c0(&arg1[0xe], &arg2[0xe])
arg1[0x12] = arg2[0x12]

if (&arg1[0x14] != &arg2[0x14])
    int64_t rbp_1 = sx.q(arg2[0x16])
    int32_t r8_1 = arg1[0x17]
    int64_t r14_1 = *(arg2 + 0x50)
    arg1[0x16] = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_140808f70(&arg1[0x14], rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x50), r14_1, (rbp_1 * 0x18).d)
    else
        arg1[0x17] = rbp_1.d

sub_141d95ba0(&arg1[0x18], &arg2[0x18])
sub_141d95ba0(&arg1[0x1c], &arg2[0x1c])

if (&arg1[0x20] != &arg2[0x20])
    int64_t rsi_1 = sx.q(arg2[0x22])
    int64_t rbp_2 = *(arg2 + 0x80)
    int32_t r8_5 = arg1[0x23]
    arg1[0x22] = rsi_1.d
    
    if (rsi_1.d != 0 || r8_5 != 0)
        sub_1407751d0(&arg1[0x20], rsi_1.d, r8_5)
        memcpy(*(arg1 + 0x80), rbp_2, (rsi_1 * 0x28).d)
    else
        arg1[0x23] = rsi_1.d

return arg1
