// 函数: sub_14074c820
// 地址: 0x14074c820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x54c) & 4) == 0)
    return 

if ((*(arg1 + 0x57c) & 4) != 0)
    int32_t rax_1 = arg1[0xb1].d
    int64_t var_18 = arg1[0xb0]
    int32_t var_10_1 = rax_1
    sub_141f48c60(arg1, &var_18)
    int32_t rax_2 = *(arg1 + 0x594)
    var_18 = *(arg1 + 0x58c)
    int32_t var_10_2 = rax_2
    sub_141f48ec0(arg1, &var_18)
    int32_t rax_3 = arg1[0xb4].d
    var_18 = arg1[0xb3]
    int32_t var_10_3 = rax_3
    sub_141f49070(arg1, &var_18)
    *(arg1 + 0x57c) &= 0xfffffffb

if (arg2 != 0)
    (*(*arg1 + 0x400))(arg1, &data_143a2de50)
