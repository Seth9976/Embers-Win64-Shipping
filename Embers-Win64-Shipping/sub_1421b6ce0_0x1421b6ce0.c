// 函数: sub_1421b6ce0
// 地址: 0x1421b6ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x118))(arg3, arg1[5]) != 0 && (arg1[0x1c].b & 1) != 0)
    void*** result_1 = sub_1421ab380(0x1a0)
    void*** result = result_1
    
    if (result_1 == 0)
        result = nullptr
    else
        *(result_1 + 0xc) &= 0xfffffffe
        result_1[5].d &= 0xfffffffe
        result_1[2].d = 0xffffffff
        result_1[3] = 0
        result_1[4] = 0
        *result = &data_1432e42a8
        sub_1421a88d0(&result[6])
        result[6] = &data_1432e4298
        result[0x20] = 0
        result[0x21].d = 0
        *(result + 0x10c) = 0x3f800000
        *(result + 0x114) = 0
        *(result + 0x11c) = 0x3f800000
        *(result + 0x124) = 0
        *(result + 0x12c) = 0x3f800000
        *(result + 0x134) = 0
        *(result + 0x13c) = 0x3f800000
        *(result + 0x144) = 0
        *(result + 0x14c) = 0x3f800000
        *(result + 0x154) = 0
        *(result + 0x15c) = 0x3f800000
        result[0x2e] = 0
        result[0x2f].d = 0
        *(result + 0x17c) = 0x3f800000
    
    if ((*(*arg1 + 0x218))(arg1, &result[6]) != 0)
        sub_1421f5ef0(result, arg2)
        return result
    
    if (result != 0)
        (**result)(result, 1)

return 0
