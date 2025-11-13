// 函数: sub_1419eb450
// 地址: 0x1419eb450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
sub_140d15db0(arg1, arg2)
int32_t rdi = 0
*arg1 = &data_143018b30
arg1[5] = 0
arg1[7].d = 0x3f000000

if (sub_140d23dc0(arg1, 0x30) == 0)
    int16_t* var_38
    sub_140d21e10(arg1, &var_38, 0)
    int32_t var_30
    int16_t* const rcx_2
    
    if (var_30 == 0)
        rcx_2 = &data_142d40450
    else
        rcx_2 = var_38
        rdi = var_30 - 1
    
    char var_28
    sub_140b3f690(rcx_2, sx.q(rdi) * 2, &var_28)
    int16_t* rcx_3 = var_38
    uint128_t zmm4_1
    zmm4_1.d = _mm_cvtepi32_ps(zx.o(var_28)).d f* 0.00392156886f
    char var_27
    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(var_27))
    _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
    zmm1_1.d = zmm1_1.d f* 0.00392156886f
    char var_26
    uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(var_26))
    zmm4_1.d = zmm1_1.d
    _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc6)
    zmm2_1.d = zmm2_1.d f* 0.00392156886f
    zmm4_1.d = zmm2_1.d
    _mm_shuffle_ps(zmm4_1, zmm4_1, 0x27)
    zmm4_1.d = 0x3f800000
    *(arg1 + 0x3c) = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x39)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

__security_check_cookie(rax_1 ^ &var_68)
return arg1
