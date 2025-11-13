// 函数: sub_142234a50
// 地址: 0x142234a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (not((*arg2).d f!= *(arg1 + 0x17c)) && not((*(arg2 + 4)).d f!= *(arg1 + 0x180)))
    result = arg2[1].d

if ((*arg2).d f!= *(arg1 + 0x17c) || (*(arg2 + 4)).d f!= *(arg1 + 0x180)
        || not(result.d f== *(arg1 + 0x184)))
    *(arg1 + 0x17c) = *arg2
    *(arg1 + 0x184) = arg2[1].d
    int32_t rax_2 = arg2[1].d
    result.d = (*arg2).d f* 2f
    result.d = result.d f* 3.14159274f
    float zmm1 = *(arg2 + 4) * 2f * 3.14159274f
    int32_t var_28 = result.d
    result.d = rax_2.d f* 2f
    float var_24_1 = zmm1
    result.d = result.d f* 3.14159274f
    int32_t var_20_1 = result.d
    sub_142278910(arg1 + 8, &var_28)

return result
