// 函数: sub_141ef4210
// 地址: 0x141ef4210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
void var_3c8
sub_141f2db80(&var_3c8, arg1[0x16], zx.d(*(arg1 + 0x1f1)) & 1, 1)
int64_t rdx_1 = *arg1
int32_t var_3e0 = 0x40400000
int64_t zmm0 = *arg3
int32_t var_3d0 = 0x40400000
int32_t rax_2 = arg3[1].d
int64_t var_3d8 = _mm_unpacklo_ps(0x3f800000, 0x40000000)
int64_t var_3e8 = zmm0
(*(rdx_1 + 0x9f0))(arg1, rdx_1, &var_3e8, &var_3d8, arg4, arg10, arg5, arg12, arg13, arg14, 
    var_3e8, rax_2, var_3d8, var_3d0)
int32_t rax_4 = arg8[1].d
int64_t rdx_2 = *arg1
int32_t rax_5 = arg7[1].d
var_3e8 = *arg8
var_3d8 = *arg7
(*(rdx_2 + 0x9f0))(arg1, arg6, &var_3d8, &var_3e8, arg9, arg10, arg11, arg12, arg13, arg14, 
    var_3e8, rax_4, var_3d8, rax_5)
int64_t result = sub_141f2f2c0(&var_3c8)
__security_check_cookie(rax_1 ^ &var_438)
return result
