// 函数: sub_141f51ba0
// 地址: 0x141f51ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0xc)
    int64_t rbp_1 = *arg2
    int64_t rsi_1 = sx.q(arg2[1].d)
    arg1[1].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_140808ed0(arg1, rsi_1.d, r8_1)
        memcpy(*arg1, rbp_1, (rsi_1 * 0x50).d)
    else
        *(arg1 + 0xc) = rsi_1.d

arg1[2].b = arg2[2].b
*(arg1 + 0x14) = *(arg2 + 0x14)
return arg1
