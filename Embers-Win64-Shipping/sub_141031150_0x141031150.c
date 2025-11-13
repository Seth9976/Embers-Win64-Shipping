// 函数: sub_141031150
// 地址: 0x141031150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t result = __security_cookie ^ &var_78
int64_t result_1 = result
int128_t zmm7 = arg3
int128_t zmm6 = arg2
arg3.d = arg4.d f- zmm6.d
arg2.d = arg5.d f- zmm7.d
int32_t zmm3
int32_t var_38 = zmm3
int32_t var_48 = zmm6.d
int32_t var_44 = zmm7.d
int32_t var_34 = arg6
int32_t var_40 = arg3.d
int32_t var_3c = arg2.d

if (not(arg3.d f<= 0f) && not(arg2.d f<= 0f))
    sub_14105ae30(arg1 + 0x250, &var_48)
    int32_t var_58 = (int.q(zmm6.d)).d
    int32_t var_54_1 = (int.q(zmm7.d)).d
    int32_t var_50_1 = (int.q(fconvert.t(arg4))).d
    int32_t var_4c_1 = (int.q(fconvert.t(arg5))).d
    result = sub_14105ade0(arg1 + 0x250, &var_58)

__security_check_cookie(result_1 ^ &var_78)
return result
