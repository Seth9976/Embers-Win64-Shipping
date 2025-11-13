// 函数: sub_1408359e0
// 地址: 0x1408359e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char result = sub_14074a210(*(arg1 + 0x14))

if (result != 0)
    int128_t var_c8
    int128_t var_b8
    int128_t var_a8
    int128_t var_98
    int128_t var_88
    int128_t var_78
    int128_t var_68
    int128_t var_58
    int128_t var_48
    int128_t var_38
    int128_t var_28
    
    if (arg3 == 0)
        memset(&var_c8, 0, 0xb0)
    else
        int128_t zmm1 = arg3[1]
        var_c8 = *arg3
        var_b8 = zmm1
        var_a8 = arg3[2]
        var_98 = arg3[3]
        var_88 = arg3[4]
        var_78 = arg3[5]
        var_68 = arg3[6]
        var_58 = arg3[7]
        var_48 = arg3[8]
        var_38 = arg3[9]
        var_28 = arg3[0xa]
    
    int32_t r8 = *(arg1 + 0x10)
    *(arg1 + 0x220) = var_c8
    *(arg1 + 0x230) = var_b8
    *(arg1 + 0x240) = var_a8
    *(arg1 + 0x250) = var_98
    *(arg1 + 0x260) = var_88
    *(arg1 + 0x270) = var_78
    *(arg1 + 0x280) = var_68
    *(arg1 + 0x290) = var_58
    *(arg1 + 0x2a0) = var_48
    *(arg1 + 0x2b0) = var_38
    *(arg1 + 0x2c0) = var_28
    result = sub_140840240(arg1 + 0x30, arg2, r8)

__security_check_cookie(rax_1 ^ &var_e8)
return result
