// 函数: sub_1408fb010
// 地址: 0x1408fb010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0x578 == arg2)
    *(arg1 + 0x570) = 1
    return 

int32_t r8 = *(arg1 + 0x584)
int64_t rbp = *arg2
int64_t rsi = sx.q(arg2[1].d)
*(arg1 + 0x580) = rsi.d

if (rsi.d != 0 || r8 != 0)
    sub_14083a1f0(arg1 + 0x578, rsi.d, r8)
    memcpy(*(arg1 + 0x578), rbp, (rsi << 5).d)
    *(arg1 + 0x570) = 1
else
    *(arg1 + 0x584) = rsi.d
    *(arg1 + 0x570) = 1
