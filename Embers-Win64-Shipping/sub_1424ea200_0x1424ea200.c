// 函数: sub_1424ea200
// 地址: 0x1424ea200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
int32_t rax_4 = arg_10
*(arg2 + 0x20) = rdi + rax_3
float var_28
float result

if (rax_4 != 0)
    float zmm1 = var_18
    float zmm2 = 1f f/ _mm_cvtepi32_ps(zx.o(rax_4)).d
    int32_t var_14
    uint128_t zmm0
    zmm0.d = var_14.d f* zmm2
    var_28 = zmm1 * zmm2
    int32_t var_24_1 = zmm0.d
    float var_10
    result = var_10 * zmm2
else
    sub_1420d0d30()
    var_28 = data_143dbb1f8.d
    result = data_143dbb200.d
    int32_t var_24 = data_143dbb1fc

*arg3 = var_28.q
arg3[1].d = result
return result
