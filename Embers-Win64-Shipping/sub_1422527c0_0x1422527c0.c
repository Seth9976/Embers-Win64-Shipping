// 函数: sub_1422527c0
// 地址: 0x1422527c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = __security_cookie ^ &var_18
void** result = *(arg1 + 0x10)
void** result_2 = nullptr
void** result_1 = nullptr

if (*(result + 0xc) u>= 1)
    result_1 = result

if (result_1 != 0)
    if (*(result_1 + 0xc) u>= 2)
        result_2 = result_1
    
    if (result_2 != 0)
        result = *result_2
    
    if (result_2 == 0 || *(sx.q(result_2[1].d) + result[0x73]) == 2)
        result = *result_1
        int128_t zmm1 = arg2[1]
        int128_t zmm0 = arg2[2]
        int128_t* rcx_3 = (sx.q(result_1[1].d) << 6) + result[0x3d]
        *rcx_3 = *arg2
        rcx_3[1] = zmm1
        rcx_3[2] = zmm0
        rcx_3[3].d = 2

__security_check_cookie(var_18 ^ &var_18)
return result
