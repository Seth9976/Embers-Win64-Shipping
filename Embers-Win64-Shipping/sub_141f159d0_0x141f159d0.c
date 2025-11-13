// 函数: sub_141f159d0
// 地址: 0x141f159d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = *(arg1 + 0x184)
uint128_t zmm2 = *(arg1 + 0x180)
float zmm1 = *(arg1 + 0x188)
zmm2.d = zmm2.d f* zmm2.d
zmm0.d = zmm0.d f* zmm0.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1 * zmm1
int32_t var_18
float var_10

if (zmm2.d f<= 0f)
    var_18 = (*(arg1 + 0x40)).d
    var_10 = (*(arg1 + 0x60)).d
    float var_14_1 = *(arg1 + 0x50)
else
    var_18.q = *(arg1 + 0x180)
    var_10 = *(arg1 + 0x188)

uint128_t zmm3 = zx.o(var_18.q)
zmm0 = *arg3
zmm2.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f* 2097152f
zmm0.d = zmm0.d f- zmm3.d * 2097152f
*arg2 = zmm0.d
zmm0.d = (*(arg3 + 4)).d f- zmm2.d
arg2[1] = zmm0.d
zmm0.d = arg3[1].d.d f- var_10 * 2097152f
arg2[2] = zmm0.d
return arg2
