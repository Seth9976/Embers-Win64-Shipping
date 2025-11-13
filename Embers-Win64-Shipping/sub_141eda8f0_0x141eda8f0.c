// 函数: sub_141eda8f0
// 地址: 0x141eda8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x212) & 8) == 0 || arg3 == 0 || sub_14243ade0(arg3) == 0)
    return 

if ((*(arg1 + 0x212) & 0x10) != 0)
    int32_t rax_1 = arg1[0xeb].d
    int64_t var_18 = arg1[0xea]
    int32_t var_10_1 = rax_1
    sub_141f48c60(arg1, &var_18)
    int32_t rax_2 = *(arg1 + 0x764)
    var_18 = *(arg1 + 0x75c)
    int32_t var_10_2 = rax_2
    sub_141f48ec0(arg1, &var_18)
    int32_t rax_3 = arg1[0xee].d
    var_18 = arg1[0xed]
    int32_t var_10_3 = rax_3
    sub_141f49070(arg1, &var_18)
    *(arg1 + 0x212) &= 0xef

if (arg2 != 0)
    (*(*arg1 + 0x400))(arg1, &data_143a2de50)
