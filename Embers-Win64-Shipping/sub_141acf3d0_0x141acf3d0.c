// 函数: sub_141acf3d0
// 地址: 0x141acf3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbx = *arg1
*rbx = *arg2
float zmm10[0x4] = 0x3f800000
rbx[1].d = arg2[1].d
uint128_t zmm6 = *rbx
float zmm7[0x4] = *(rbx + 4)
zmm7[0] = zmm7[0] f- *(rbx + 0x7c)
float zmm9[0x4] = rbx[1].d
zmm9[0] = zmm9[0] f- rbx[0x10].d
uint128_t zmm13 = rbx[0xf].d
zmm6.d = zmm6.d f- zmm13.d
void* rdi = *arg1
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7[0]
uint128_t zmm1
zmm1.d = zmm9.d f* zmm9[0]
float zmm8[0x4] = *(rdi + 0x48)
uint128_t zmm3 = *(rdi + 0xc)
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
float arg_18 = zmm8[0]
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
zmm1.d = zmm8.d f+ zmm8[0]
float temp0[0x4] = _mm_sqrt_ss(0, zmm2.d)
zmm1.d = zmm1.d f* temp0[0]
float zmm15[0x4]

if (__andps_xmmxud_memxud(zmm1, data_142d3f770).d f<= 9.99999994e-09f)
    zmm15 = zx.o(0)
    zmm0 = _mm_min_ss(zmm15.d, 0x3f800000)
else
    zmm0 = 0xbf800000
    zmm15 = zmm8
    zmm15[0] = zmm15[0] * zmm8[0]
    zmm3.d = zmm3.d f* zmm3.d
    zmm15[0] = zmm15[0] f+ zmm2.d
    zmm15[0] = zmm15[0] f- zmm3.d
    zmm15[0] = zmm15[0] f/ zmm1.d
    
    if (zmm15[0] >= -1f)
        zmm0 = _mm_min_ss(zmm15.d, 0x3f800000)

float arg_20 = acosf(zmm0.d)[0]
int32_t var_f8
int64_t var_e8
int32_t* rax_1

if (temp0[0] <= 9.99999994e-09f)
    int32_t var_e0_1 = data_143dbb200
    rax_1 = &var_e8
    var_e8 = data_143dbb1f8.q
else
    rax_1 = &var_f8
    zmm1.d = 1f / temp0[0]
    zmm6.d = zmm6.d f* zmm1.d
    zmm7[0] = zmm7[0] f* zmm1.d
    zmm9[0] = zmm9[0] f* zmm1.d
    var_f8 = zmm6.d
    float var_f4_1 = zmm7[0]
    float var_f0_1 = zmm9[0]

float zmm0_1[0x4] = zx.o(*rax_1)
uint128_t zmm14 = *(rbx + 0x3c)
zmm7 = zmm0_1
uint128_t zmm12 = *(rbx + 0x44)
int32_t rax_3 = rax_1[2]
zmm1.d = zmm14.d f- zmm13.d
zmm13 = rbx[8].d
float zmm5[0x4] = rbx[0x10].d
zmm6.d = zmm13.d f- *(rbx + 0x7c)
var_f8.q = zmm0_1.q
zmm3.d = zmm12.d f- zmm5[0]
zmm9 = var_f8
zmm0_1 = zmm1
zmm0_1[0] = zmm0_1[0] * zmm9[0]
float zmm11[0x4] = rax_3
int32_t arg_10 = zmm1.d
zmm1.d = zmm3.d f* zmm11[0]
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
zmm2.d = zmm6.d f* zmm7[0]
int32_t arg_8 = zmm3.d
int64_t var_100 = zmm7.q
zmm2.d = zmm2.d f+ zmm0_1[0]
zmm2.d = zmm2.d f+ zmm1.d
zmm9[0] = zmm9[0] f* zmm2.d
zmm1.d = zmm7.d f* zmm2.d
zmm9[0] = zmm9[0] f+ rbx[0xf].d
zmm1.d = zmm1.d f+ *(rbx + 0x7c)
zmm14.d = zmm14.d f- zmm9[0]
zmm11[0] = zmm11[0] f* zmm2.d
zmm13.d = zmm13.d f- zmm1.d
zmm11[0] = zmm11[0] + zmm5[0]
zmm2.d = zmm13.d f* zmm13.d
zmm12.d = zmm12.d f- zmm11[0]
zmm0_1 = zmm14
zmm0_1[0] = zmm0_1[0] f* zmm14.d
zmm2.d = zmm2.d f+ zmm0_1[0]
zmm1.d = zmm12.d f* zmm12.d
zmm2.d = zmm2.d f+ zmm1.d

if (zmm2.d f== 1f)
    goto label_141acf6e7

int32_t var_e0_2
uint128_t zmm4_1

if (zmm2.d f>= 9.99999975e-05f)
    zmm0_1 = zmm2
    zmm3 = zmm0_1
    float temp0_4[0x4] = _mm_rsqrt_ss(zmm0_1[0], zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    temp0_4[0] = temp0_4[0] * temp0_4[0]
    zmm1.d = zmm3.d f* temp0_4[0]
    zmm2.d = 0.5f f- zmm1.d
    temp0_4[0] = temp0_4[0] f* zmm2.d
    temp0_4[0] = temp0_4[0] + temp0_4[0]
    zmm1.d = temp0_4.d f* temp0_4[0]
    zmm3.d = zmm3.d f* zmm1.d
    zmm4_1.d = 0.5f f- zmm3.d
    zmm3 = arg_8
    temp0_4[0] = temp0_4[0] f* zmm4_1.d
    temp0_4[0] = temp0_4[0] + temp0_4[0]
    zmm14.d = zmm14.d f* temp0_4[0]
    zmm13.d = zmm13.d f* temp0_4[0]
    zmm12.d = zmm12.d f* temp0_4[0]
label_141acf6e7:
    zmm4_1 = data_143dbb1f8
    zmm2 = data_143dbb200
    zmm1 = data_143dbb1fc
    var_e0_2 = zmm12.d
else
    zmm2 = data_143dbb200
    zmm4_1 = data_143dbb1f8
    zmm12 = zmm2
    zmm1 = data_143dbb1fc
    zmm14 = zmm4_1
    var_e0_2 = zmm2.d
    zmm13 = zmm1

zmm5 = arg1[5].d

if ((zmm5[0] f!= zmm4_1.d || zmm1.d f!= *(arg1 + 0x2c) || not(zmm2.d f== arg1[6].d))
        && (zmm9[0] f!= zmm4_1.d || zmm7[0] f!= zmm1.d || not(zmm11[0] f== zmm2.d))
        && not(__andps_xmmxud_memxud(zmm8, data_142d3f770)[0] <= 9.99999994e-09f))
    zmm10[0] = 1f / zmm8[0]
    zmm6.d = zmm6.d f* zmm10[0]
    zmm10[0] = zmm10[0] f* arg_10
    zmm6.d = zmm6.d f* zmm7[0]
    zmm10[0] = zmm10[0] * zmm9[0]
    zmm3.d = zmm3.d f* zmm10[0]
    zmm6.d = zmm6.d f+ zmm10[0]
    zmm3.d = zmm3.d f* zmm11[0]
    zmm6.d = zmm6.d f+ zmm3.d
    
    if (not(zmm14.d f!= zmm4_1.d) && not(zmm13.d f!= zmm1.d))
        if (zmm12.d f== zmm2.d || zmm6.d f>= 0.99000001f)
            goto label_141acf80a
        
        goto label_141acf7aa
    
    if (zmm6.d f>= 0.99000001f)
    label_141acf80a:
        
        if (zmm4_1.d f!= *(rdi + 0x58) || zmm1.d f!= *(rdi + 0x5c) || not(zmm2.d f== *(rdi + 0x60)))
            zmm1.d = zmm11.d f* *(arg1 + 0x2c)
            zmm7[0] = zmm7[0] f* arg1[6].d
            zmm2.d = zmm9.d f* arg1[6].d
            zmm1.d = zmm1.d f- zmm7[0]
            zmm11[0] = zmm11[0] * zmm5[0]
            zmm2.d = zmm2.d f- zmm11[0]
            var_e8.d = zmm1.d
            zmm9[0] = zmm9[0] f* *(arg1 + 0x2c)
            zmm1.d = zmm7.d f* zmm5[0]
            var_e8:4.d = zmm2.d
            zmm1.d = zmm1.d f- zmm9[0]
            int32_t var_e0_4 = zmm1.d
            int32_t var_d8
            sub_140ad6660(&var_d8, rdi + 0x64, &var_e8)
            int32_t var_d4
            zmm9 = var_d4
            zmm7 = var_d8
            zmm0_1 = zx.o(*(rdi + 0x58))
            int32_t rax_6 = *(rdi + 0x60)
            var_e8 = zmm0_1.q
            uint128_t zmm4_2 = var_e8.d
            float temp0_8[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            int32_t var_d0
            zmm12.d = zmm4_2.d f* var_d0
            temp0_8[0] = temp0_8[0] * zmm7[0]
            zmm11 = rax_6
            temp0_8[0] = temp0_8[0] f* var_d0
            zmm10 = zmm11
            zmm10[0] = zmm10[0] * zmm9[0]
            zmm10[0] = zmm10[0] - temp0_8[0]
            zmm11[0] = zmm11[0] * zmm7[0]
            zmm12.d = zmm12.d f- zmm11[0]
            zmm0_1 = zmm4_2
            zmm0_1[0] = zmm0_1[0] * zmm9[0]
            zmm10[0] = zmm10[0] + zmm10[0]
            temp0_8[0] = temp0_8[0] - zmm0_1[0]
            int32_t var_cc
            zmm0_1 = var_cc
            zmm12.d = zmm12.d f+ zmm12.d
            float zmm1_1 = zmm10[0] * zmm0_1[0]
            zmm13.d = zmm10.d f* var_d0
            temp0_8[0] = temp0_8[0] + temp0_8[0]
            zmm10[0] = zmm10[0] * zmm9[0]
            float zmm2_1 = zmm12.d * zmm0_1[0]
            float zmm3_1 = temp0_8[0] * zmm0_1[0]
            zmm0_1 = zmm12
            zmm14.d = temp0_8.d f* zmm9[0]
            zmm2_1 = zmm2_1 + temp0_8[0]
            zmm8 = arg_18
            zmm3_1 = zmm3_1 + zmm11[0]
            zmm9 = var_f8
            zmm11 = rax_3
            zmm12.d = zmm12.d f* zmm7[0]
            temp0_8[0] = temp0_8[0] * zmm7[0]
            zmm7 = zx.o(var_100)
            zmm12.d = zmm12.d f- zmm10[0]
            zmm0_1[0] = zmm0_1[0] f* var_d0
            zmm13.d = zmm13.d f- temp0_8[0]
            zmm14.d = zmm14.d f- zmm0_1[0]
            zmm12.d = zmm12.d f+ zmm3_1
            zmm13.d = zmm13.d f+ zmm2_1
            zmm14.d = zmm14.d f+ zmm1_1 f+ zmm4_2.d
    else
    label_141acf7aa:
        *(rdi + 0x58) = (_mm_unpacklo_ps(zmm14, zmm13.q)).q
        *(rdi + 0x60) = var_e0_2
        zmm7[0] = zmm7[0] f* arg1[6].d
        zmm11[0] = zmm11[0] f* *(arg1 + 0x2c)
        zmm3.d = zmm9.d f* arg1[6].d
        zmm1.d = zmm7.d f* arg1[5].d
        zmm11[0] = zmm11[0] - zmm7[0]
        zmm11[0] = zmm11[0] f* arg1[5].d
        zmm3.d = zmm3.d f- zmm11[0]
        zmm9[0] = zmm9[0] f* *(arg1 + 0x2c)
        zmm1.d = zmm1.d f- zmm9[0]
        *(rdi + 0x64) = (_mm_unpacklo_ps(zmm11, zmm3.q)).q
        *(rdi + 0x6c) = zmm1.d

uint128_t zmm0_2 = sinf(arg_20[0])
zmm14.d = zmm14.d f* zmm0_2.d
zmm13.d = zmm13.d f* zmm0_2.d
zmm12.d = zmm12.d f* zmm0_2.d
zmm9[0] = zmm9[0] * zmm15[0]
zmm7[0] = zmm7[0] * zmm15[0]
zmm14.d = zmm14.d f+ zmm9[0]
zmm11[0] = zmm11[0] * zmm15[0]
zmm13.d = zmm13.d f+ zmm7[0]
zmm12.d = zmm12.d f+ zmm11[0]
zmm14.d = zmm14.d f* zmm8[0]
zmm13.d = zmm13.d f* zmm8[0]
zmm14.d = zmm14.d f+ rbx[0xf].d
zmm12.d = zmm12.d f* zmm8[0]
zmm13.d = zmm13.d f+ *(rbx + 0x7c)
zmm12.d = zmm12.d f+ rbx[0x10].d
int32_t result = zmm12.d
*(rbx + 0x3c) = (_mm_unpacklo_ps(zmm14, zmm13.q)).q
*(rbx + 0x44) = result
return result
