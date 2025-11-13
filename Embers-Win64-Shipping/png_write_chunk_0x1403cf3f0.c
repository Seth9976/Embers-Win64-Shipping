// 函数: png_write_chunk
// 地址: 0x1403cf3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t result = __security_cookie ^ &var_58
int64_t result_1 = result

if (arg1 != 0)
    *(arg1 + 0x4a8) = 0x22
    uint8_t var_30 = (arg4.d u>> 0x18).b
    uint8_t var_2f_1 = (arg4.d u>> 0x10).b
    char var_2e_1 = arg4:1.b
    char var_2d_1 = arg4.b
    int32_t var_2c_1 = *arg2
    sub_1403cc370(arg1, &var_30, 8)
    *(arg1 + 0x254) = *arg2
    sub_1403be750(arg1)
    sub_1403be770(arg1, arg2, 4)
    *(arg1 + 0x4a8) = 0x42
    
    if (arg3 != 0 && arg4 != 0)
        sub_1403cc370(arg1, arg3, arg4)
        sub_1403be770(arg1, arg3, arg4.d)
    
    *(arg1 + 0x4a8) = 0x82
    int32_t rax_7 = *(arg1 + 0x244)
    var_30 = (rax_7 u>> 0x18).b
    uint8_t var_2f_2 = (rax_7 u>> 0x10).b
    char var_2e_2 = rax_7:1.b
    char var_2d_2 = rax_7.b
    result = sub_1403cc370(arg1, &var_30, 4)

__security_check_cookie(result_1 ^ &var_58)
return result
