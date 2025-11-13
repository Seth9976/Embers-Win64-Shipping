// 函数: sub_1421b8600
// 地址: 0x1421b8600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x23].d s> 0 && (arg1[0x1c].b & 1) != 0)
    void*** result_1 = j_sub_140a82f30(0x100)
    void*** result = result_1
    
    if (result_1 == 0)
        result = result_1
    else
        sub_1421a88d0(result_1)
        *result = &data_1432e4328
        __builtin_memset(&result[0x1a], 0, 0x11)
        *(result + 0xe4) = 0
        *(result + 0xec) = 0
        result[0x1e] = 0x3f800000
        result[0x1f].d = 0
    
    if ((*(*arg1 + 0x218))(arg1, result) != 0)
        return result
    
    if (result != 0)
        (**result)(result, 1)

return 0
