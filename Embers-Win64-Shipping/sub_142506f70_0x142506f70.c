// 函数: sub_142506f70
// 地址: 0x142506f70
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
uint128_t zmm8 = arg_10
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t var_58

if (zmm8.d f>= 9.99999975e-05f)
    int32_t var_44
    uint128_t zmm6 = var_44
    uint128_t zmm7 = var_48
    uint128_t zmm1
    zmm1.d = zmm6.d f* zmm6.d
    uint128_t zmm0_1
    zmm0_1.d = zmm7.d f* zmm7.d
    zmm1.d = zmm1.d f+ zmm0_1.d
    zmm0_1.d = zmm8.d f* zmm8.d
    
    if (not(zmm1.d f<= zmm0_1.d))
        uint128_t zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
        uint128_t zmm3
        zmm3.d = zmm1.d f* 0.5f
        zmm0_1.d = zmm5_1.d f* zmm5_1.d
        zmm1.d = zmm3.d f* zmm0_1.d
        zmm0_1.d = zmm5_1.d f* (0.5f f- zmm1.d)
        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
        zmm1.d = zmm5_1.d f* zmm5_1.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3.d)
        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
        zmm5_1.d = zmm5_1.d f* zmm8.d
        zmm7.d = zmm7.d f* zmm5_1.d
        zmm6.d = zmm6.d f* zmm5_1.d
    
    var_58:4.d = zmm6.d
    var_58.d = zmm7.d
else
    var_58 = 0

int32_t var_40
int32_t result = var_40.d
*arg3 = var_58
arg3[1].d = result
return result
