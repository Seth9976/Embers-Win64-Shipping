// 函数: sub_1420cc170
// 地址: 0x1420cc170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
uint128_t zmm6 = arg3[1].d
uint128_t zmm7 = *arg3
uint64_t var_48 = *arg2
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
uint128_t zmm8 = *(arg3 + 4)
uint128_t zmm1
zmm1.d = zmm6.d f* zmm6.d
uint128_t zmm0
zmm0.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
uint64_t var_58
int32_t var_50

if (zmm2.d f!= 1f)
    if (zmm2.d f>= 9.99999994e-09f)
        uint128_t zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
        uint128_t zmm3
        zmm3.d = zmm2.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
        zmm5.d = zmm5.d f+ zmm0.d
        zmm8.d = zmm8.d f* zmm5.d
        zmm7.d = zmm7.d f* zmm5.d
        zmm1 = zmm8
        zmm6.d = zmm6.d f* zmm5.d
    else
        zmm7 = data_143dbb1f8
        zmm1 = data_143dbb1fc
        zmm6 = data_143dbb200
    
    var_50 = zmm6.d
    var_58:4.d = zmm1.d
    var_58.d = zmm7.d
else
    zmm0 = zx.o(*arg3)
    var_50 = arg3[1].d
    zmm6 = var_50
    var_58 = zmm0.q
    zmm7 = var_58.d
    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

zmm2.d = var_48:4.d.d f* zmm1.d
*arg1 = var_58
zmm0.d = var_48.d.d f* zmm7.d
arg1[1].d = var_50
zmm1.d = rax.d f* zmm6.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
*(arg1 + 0xc) = zmm2.d
return arg1
