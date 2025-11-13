// 函数: sub_141f3d580
// 地址: 0x141f3d580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
float var_48[0x4]
(*(*arg1 + 0x408))(arg1, &var_48, arg2, 0)
float var_38[0x4]
float result = _mm_shuffle_ps(var_38, var_38, 0xaa)[0]
*arg3 = (_mm_unpacklo_ps(var_38, _mm_shuffle_ps(var_38, var_38, 0x55)[0].q)).q
arg3[1].d = result
*arg4 = var_48
__security_check_cookie(rax_1 ^ &var_78)
return result
