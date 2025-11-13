// 函数: sub_141ae4170
// 地址: 0x141ae4170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0x7fffffff
*(arg1 + 0xc) = 0xffffffff
*(arg1 + 0x1c) = 1
uint128_t zmm6 = data_14399f69c
uint128_t zmm7 = data_14399f698
uint128_t zmm2
zmm2.d = zmm6.d f* zmm6.d
uint128_t zmm0
zmm0.d = zmm7.d f* zmm7.d
int128_t zmm8 = data_14399f6a0
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
int32_t var_48
int32_t var_40

if (zmm2.d f!= 1f)
    float zmm1
    
    if (zmm2.d f>= 9.99999994e-09f)
        float zmm3 = zmm2.d
        uint128_t zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3)
        zmm3 = zmm3 * 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm2.d = 0.5f - zmm3 f* zmm0.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm0.d = zmm5.d f* (0.5f - zmm3 * zmm5.d f* zmm5.d)
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1 = zmm5.d
        zmm0.d = zmm5.d f* zmm7.d
        zmm5.d = zmm5.d f* zmm8.d
        var_48 = zmm0.d
        zmm1 = zmm1 f* zmm6.d
        var_40 = zmm5.d
    else
        zmm1 = data_143dbb1fc
        var_48 = data_143dbb1f8.d
        var_40 = data_143dbb200.d
    
    float var_44_1 = zmm1
else
    var_48 = zmm7.d
    int32_t var_44 = zmm6.d
    var_40 = zmm8.d

arg1[2] = var_48.q
arg1[3].d = var_40
return arg1
