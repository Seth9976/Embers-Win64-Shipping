// 函数: sub_142508650
// 地址: 0x142508650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int32_t var_44
uint128_t zmm6 = var_44
uint128_t zmm7 = var_48
int64_t rcx_2
rcx_2.b = rax_3 != 0
uint128_t zmm1
zmm1.d = zmm6.d f* zmm6.d
*(arg2 + 0x20) = rcx_2 + rax_3
uint128_t zmm0
zmm0.d = zmm7.d f* zmm7.d
zmm1.d = zmm1.d f+ zmm0.d
int32_t result

if (not(zmm1.d f!= 1f))
    int32_t var_40
    zmm0 = var_40
    var_48 = zmm7.d
    int32_t var_44_1 = zmm6.d
    
    if (zmm0.d f!= 0f)
        result = 0
    else
        result = zmm0.d
else if (zmm1.d f>= arg_10)
    uint128_t zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
    uint128_t zmm3
    zmm3.d = zmm1.d f* 0.5f
    zmm0.d = zmm5_1.d f* zmm5_1.d
    zmm1.d = zmm3.d f* zmm0.d
    zmm0.d = zmm5_1.d f* (0.5f f- zmm1.d)
    zmm5_1.d = zmm5_1.d f+ zmm0.d
    zmm1.d = zmm5_1.d f* zmm5_1.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
    zmm5_1.d = zmm5_1.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5_1.d
    zmm0.d = zmm5_1.d f* zmm7.d
    int32_t var_44_3 = zmm6.d
    var_48 = zmm0.d
    result = 0
else
    zmm1 = data_143dbb1fc
    var_48 = data_143dbb1f8.d
    result = data_143dbb200.d
    int32_t var_44_2 = zmm1.d

*arg3 = var_48.q
arg3[1].d = result
return result
