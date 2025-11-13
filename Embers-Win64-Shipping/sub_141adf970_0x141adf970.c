// 函数: sub_141adf970
// 地址: 0x141adf970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0xc)
    int64_t rbp_1 = *arg2
    int32_t rsi_1 = arg2[1].d
    arg1[1].d = rsi_1
    
    if (rsi_1 != 0 || r8_1 != 0)
        sub_14174fdd0(arg1, rsi_1, r8_1)
        memcpy(*arg1, rbp_1, rsi_1 * 0x3c)
    else
        *(arg1 + 0xc) = rsi_1

arg1[2].d = arg2[2].d
arg1[3] = arg2[3]
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5] = arg2[5]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x35) = *(arg2 + 0x35)
return arg1
