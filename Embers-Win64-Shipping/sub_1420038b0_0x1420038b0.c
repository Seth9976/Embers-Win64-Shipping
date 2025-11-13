// 函数: sub_1420038b0
// 地址: 0x1420038b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = *(arg1 + 0x30)
*arg4 = *rax
arg4[1] = rax[1]
arg4[2] = rax[2]
arg4[3] = rax[3]
arg4[4] = rax[4]
arg4[5] = rax[5]
arg4[6] = rax[6]
arg4[7] = rax[7]
arg4[8].q = rax[8].q
uint128_t zmm6
zmm6.d = (*(arg4 + 0x1c)).d f- *(arg1 + 0x24)
uint128_t zmm7
zmm7.d = arg4[2].d.d f- *(arg1 + 0x28)
uint128_t zmm8
zmm8.d = (*(arg4 + 0x24)).d f- *(arg1 + 0x2c)
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
uint128_t zmm1
zmm1.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d

if (zmm2.d f== 1f)
    goto label_142003a04

int32_t var_48
int32_t result

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
    zmm6.d = zmm6.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm5.d
    zmm8.d = zmm8.d f* zmm5.d
label_142003a04:
    result = zmm8.d
    int32_t var_44_1 = zmm7.d
    var_48 = zmm6.d
else
    var_48 = data_143dbb1f8.d
    result = data_143dbb200.d
    int32_t var_44 = data_143dbb1fc.d

*arg5 = var_48.q
arg5[1].d = result
return result
