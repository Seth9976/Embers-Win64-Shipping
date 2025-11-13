// 函数: sub_140991400
// 地址: 0x140991400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (&arg1[0x86] != arg2)
    int32_t r8_1 = *(arg1 + 0x43c)
    int64_t rbp_1 = *arg2
    int64_t rsi_1 = sx.q(arg2[1].d)
    arg1[0x87].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1409912e0(&arg1[0x86], rsi_1.d, r8_1)
        memcpy(arg1[0x86], rbp_1, (rsi_1 * 0x24).d)
    else
        *(arg1 + 0x43c) = rsi_1.d

sub_141ee8490(arg1)
(*(*arg1 + 0x498))(arg1)
int64_t result
result.b = 1
return result
