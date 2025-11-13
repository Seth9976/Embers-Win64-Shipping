// 函数: sub_142465940
// 地址: 0x142465940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t rsi_1 = arg2[1].d
    int64_t rbp_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = rsi_1
    
    if (rsi_1 != 0 || r8_1 != 0)
        sub_14174fdd0(arg1, rsi_1, r8_1)
        memcpy(*arg1, rbp_1, rsi_1 * 0x3c)
    else
        *(arg1 + 0xc) = rsi_1

if (&arg1[2] != &arg2[2])
    int64_t rbp_2 = sx.q(arg2[3].d)
    int32_t r8_3 = *(arg1 + 0x1c)
    int64_t r14_1 = arg2[2]
    arg1[3].d = rbp_2.d
    
    if (rbp_2.d != 0 || r8_3 != 0)
        sub_1405c4a00(&arg1[2], rbp_2.d, r8_3)
        memcpy(arg1[2], r14_1, (rbp_2 << 3).d)
    else
        *(arg1 + 0x1c) = rbp_2.d

arg1[4].b = arg2[4].b
return arg1
