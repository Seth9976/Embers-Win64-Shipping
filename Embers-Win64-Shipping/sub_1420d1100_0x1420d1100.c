// 函数: sub_1420d1100
// 地址: 0x1420d1100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *arg4
uint128_t zmm7 = *(arg4 + 4)
uint128_t zmm3
zmm3.d = zmm6.d f* zmm6.d
int128_t zmm8 = *(arg4 + 8)
uint128_t zmm0
zmm0.d = zmm7.d f* zmm7.d
zmm3.d = zmm3.d f+ zmm0.d
uint128_t zmm9 = arg3
zmm3.d = zmm3.d f+ zmm8.d f* zmm8.d
uint64_t var_58

if (not(zmm3.d f!= 1f))
    int32_t rax_1 = *(arg4 + 8)
    var_58 = *arg4
    int32_t var_50 = rax_1
else if (zmm3.d f>= 9.99999994e-09f)
    uint128_t zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    arg3.d = 0.5f - zmm3.d f* zmm0.d
    zmm0.d = zmm5.d f* arg3.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm3.d = zmm3.d f* zmm5.d f* zmm5.d
    zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
    zmm5.d = zmm5.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm5.d
    zmm8.d = zmm8.d f* zmm5.d
    var_58.d = zmm6.d
    var_58:4.d = zmm7.d
    int32_t var_50_2 = zmm8.d
else
    var_58.d = data_143dbb1f8.d
    int32_t var_50_1 = data_143dbb200.d
    var_58:4.d = data_143dbb1fc

sub_140adf070(arg2, arg1, zmm9, &var_58)
return arg1
