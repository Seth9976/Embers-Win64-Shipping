// 函数: sub_141f62620
// 地址: 0x141f62620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* rbx = arg6
int32_t var_f8

if ((*(arg4 + 0x64) & 0x100) != 0)
    void* r9_1 = *(arg4 + 0x20)
    int64_t rax_2
    
    if (*(arg3 + 0xa1) != 0 && arg2 s> 1)
        rax_2 = sx.q(data_143f0f1a0)
    
    if (*(arg3 + 0xa1) == 0 || arg2 s<= 1 || (((rax_2.d u<= 0x18 && test_bit(0x100a040, rax_2.d))
            || *(&data_143f025f0 + rax_2 * 0x14) == data_143f025b8) && (rax_2 - 0x19).d u> 1
            && *(&data_143f025f0 + rax_2 * 0x14) != data_143f025d0)
            || (rax_2.d u<= 0x1e && test_bit(0x6562c800, rax_2.d))
            || (*(rax_2 * 0x14 + &data_143f025fc) & 1) != 0)
        int64_t rdi_1 = sx.q(*(rbx + 0x38))
        var_f8 = *(arg3 + 0x208) & 0xf
        int32_t var_f4
        var_f4.q = *(r9_1 + 0x10)
        int32_t rax_7 = (rdi_1 + 1).d
        *(rbx + 0x38) = rax_7
        
        if (rax_7 s> *(rbx + 0x3c))
            sub_1419d6df0(rbx, rdi_1.d)
        
        void* rax_8 = *(rbx + 0x30)
        int64_t rcx_4 = rdi_1 * 3
        
        if (rax_8 != 0)
            rbx = rax_8
        
        *(rbx + (rcx_4 << 2)) = var_f8.q
        int32_t var_f0
        *(rbx + (rcx_4 << 2) + 8) = var_f0

void* rcx_5 = *(arg4 + 0x18)
int64_t zmm0 = *(rcx_5 + 0x644)
int32_t zmm1 = *(rcx_5 + 0x648)
uint128_t zmm2 = *(rcx_5 + 0x660)
float zmm3[0x4] = *(rcx_5 + 0x640)
float zmm4[0x4] = *(rcx_5 + 0x64c)
uint32_t rax_10 = zx.d(*(rcx_5 + 0x6a4))
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm0.d
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
zmm0 = *(rcx_5 + 0x650)
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm0.d
zmm0 = *(rcx_5 + 0x65c)
temp0_2[0] = zmm1
zmm1 = *(rcx_5 + 0x654)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_3[0] = zmm2.d
float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
zmm2 = *(rcx_5 + 0x68c)
temp0_4[0] = zmm1
zmm1 = *(rcx_5 + 0x664)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
float var_108[0x4] = temp0_5
float var_e8[0x4] = temp0_5
zmm3 = *(rcx_5 + 0x658)
float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_6[0] = zmm0.d
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
zmm0 = *(rcx_5 + 0x670)
temp0_7[0] = zmm2.d
zmm2 = *(rcx_5 + 0x668)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
temp0_8[0] = zmm1
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
zmm1 = *(rcx_5 + 0x674)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_10[0] = zmm2.d
float var_108_1[0x4] = temp0_9
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
float var_108_2[0x4] = temp0_11
float var_c8[0x4] = temp0_11
zmm3 = *(rcx_5 + 0x680)
float temp0_12[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float var_d8[0x4] = temp0_9
zmm4 = *(rcx_5 + 0x66c)
float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
temp0_13[0] = zmm0.d
temp0_12[0] = (*(rcx_5 + 0x684)).d
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
zmm0 = *(rcx_5 + 0x67c)
temp0_14[0] = zmm1
zmm1 = *(rcx_5 + 0x688)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc6)
temp0_15[0] = zmm1
float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
zmm1 = *(rcx_5 + 0x690)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x27)
temp0_16[0] = _mm_cvtepi32_ps(zx.o(rax_10)).d
temp0_17[0] = (*(rcx_5 + 0x6ac)).d
float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
zmm2 = *(rcx_5 + 0x694)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x39)
float var_a8[0x4] = temp0_20
float var_108_3[0x4] = temp0_19
float var_108_4[0x4] = temp0_20
zmm3 = *(rcx_5 + 0x678)
float temp0_21[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_21[0] = zmm0.d
float var_b8[0x4] = temp0_19
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc6)
temp0_22[0] = zmm1
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x27)
temp0_23[0] = zmm2.d
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x39)
float var_108_5[0x4] = temp0_24
float var_98[0x4] = temp0_24
zmm0 = *(rcx_5 + 0x69c)
zmm1 = *(rcx_5 + 0x6a0)
zmm2 = *(rcx_5 + 0x6b0)
int64_t r8_2 = sx.q(*(rcx_5 + 0x6a8))
zmm4 = *(rcx_5 + 0x698)
int128_t zmm7 = data_143dbb1f8
int128_t zmm6 = data_143dbb1fc
int32_t zmm5 = data_143dbb200
float temp0_26[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
temp0_26[0] = zmm0.d
var_f8 = zmm7.d
float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc6)
temp0_27[0] = zmm1
int32_t var_f4_1 = zmm6.d
float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x27)
temp0_28[0] = zmm2.d
float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x39)
(&var_f8)[r8_2] = 0x3f800000
zmm1 = var_f8
float var_88[0x4] = temp0_29
var_f8 = zmm7.d
int32_t var_f4_2 = zmm6.d
(&var_f8)[sx.q((r8_2 + 1).d s% 3)] = 0x3f800000
zmm0 = var_f8
var_f8 = zmm7.d
temp0_29[3] = 0
temp0_29[0] = zmm1
float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xe1)
temp0_30[0] = var_f4_1.d
int32_t var_f4_3 = zmm6.d
float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc6)
temp0_31[0] = zmm5[0]
float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc9)
temp0_32[3] = 0
temp0_32[0] = zmm0.d
float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xe1)
temp0_33[0] = var_f4_2
float var_78[0x4] = temp0_32
float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc6)
temp0_34[0] = zmm5.d
(&var_f8)[sx.q((r8_2 + 2).d s% 3)] = 0x3f800000
zmm0 = var_f8
float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
float var_68[0x4] = temp0_35
temp0_35[3] = 0
temp0_35[0] = zmm0.d
float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xe1)
temp0_36[0] = var_f4_3
int32_t rax_19 = *(arg1 + 4)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc6)
temp0_37[0] = zmm5.d
var_f8 = rax_19
int16_t rax_20 = *(arg1 + 8)
float var_58[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
var_f4_3.w = rax_20
int64_t result = sub_141f4f3d0(arg5, &var_f8, &var_e8)
__security_check_cookie(rax_1 ^ &var_128)
return result
