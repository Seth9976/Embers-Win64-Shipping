// 函数: sub_141eb6c80
// 地址: 0x141eb6c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eb6a90(arg1, arg2)
arg1[0x18] = arg2[0x18]
arg1[0x19].d = arg2[0x19].d
*(arg1 + 0xcc) = *(arg2 + 0xcc)
*(arg1 + 0xd4) = *(arg2 + 0xd4)
sub_1407473e0(&arg1[0x1b], &arg2[0x1b])

if (&arg1[0x1d] != &arg2[0x1d])
    int32_t r8_1 = *(arg1 + 0xf4)
    int32_t rsi_1 = arg2[0x1e].d
    int64_t r14_1 = arg2[0x1d]
    arg1[0x1e].d = rsi_1
    
    if (rsi_1 != 0 || r8_1 != 0)
        sub_141a73160(&arg1[0x1d], rsi_1, r8_1)
        memcpy(arg1[0x1d], r14_1, rsi_1 * 0x88)
    else
        *(arg1 + 0xf4) = rsi_1

arg1[0x1f].b = arg2[0x1f].b
return arg1
