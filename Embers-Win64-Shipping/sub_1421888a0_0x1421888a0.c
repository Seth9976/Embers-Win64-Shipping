// 函数: sub_1421888a0
// 地址: 0x1421888a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x431) & 0x20) == 0 || arg3 == 0 || sub_14243ade0(arg3) == 0)
    return 

if ((*(arg1 + 0x433) & 2) != 0)
    int32_t rax_1 = *(arg1 + 0x56c)
    int64_t var_18 = *(arg1 + 0x564)
    int32_t var_10_1 = rax_1
    sub_141f48c60(arg1, &var_18)
    int32_t rax_2 = arg1[0xaf].d
    var_18 = arg1[0xae]
    int32_t var_10_2 = rax_2
    sub_141f48ec0(arg1, &var_18)
    int32_t rax_3 = *(arg1 + 0x584)
    var_18 = *(arg1 + 0x57c)
    int32_t var_10_3 = rax_3
    sub_141f49070(arg1, &var_18)
    *(arg1 + 0x433) &= 0xfd

if (arg2 != 0)
    (*(*arg1 + 0x400))(arg1, &data_143a2de50)
