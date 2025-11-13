// 函数: sub_141bd9110
// 地址: 0x141bd9110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)

if (rsi.d != 0)
    int32_t rax_1 = arg1[3].d
    int32_t rdx = rax_1 + rsi.d
    
    if (rdx s> *(arg1 + 0x1c))
        sub_140638c50(&arg1[2], rdx)
        rax_1 = arg1[3].d
    
    memcpy(arg1[2] + (sx.q(rax_1) << 3), *arg1, (rsi << 3).d)
    arg1[3].d += rsi.d

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140638c50(arg1, 0)

if (arg2 != 0)
    sub_141bdc410(&arg1[6])
