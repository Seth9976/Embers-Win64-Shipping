// 函数: sub_1426fa2f0
// 地址: 0x1426fa2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x100) == 0)
    return 

void* rax = *(arg1 + 0xe8)

if (rax == 0)
    return 

void* rax_1 = *(rax + 0xb0)
int64_t var_48
float var_40_1

if (rax_1 == 0)
    float rax_2 = data_143b58090
    var_48 = data_143b58088
    var_40_1 = rax_2
else
    float zmm1[0x4] = *(rax_1 + 0x1d0)
    var_48.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    var_48:4.d = temp0_1[0]
    temp0_2[0] = temp0_2[0] f- *(rax_1 + 0x114)
    var_40_1 = temp0_2[0]

int64_t var_58_1 = var_48
uint128_t zmm6_1
uint128_t zmm7_1
uint128_t zmm8_1
zmm6_1, zmm7_1, zmm8_1 = sub_141e912d0(arg1 + 0x148, &var_48)
void* rax_4 = *(arg1 + 0xe8)
char rdx_2 = *(arg1 + 0x1ba) & 0xfd
*(arg1 + 0x1ba) = rdx_2
int32_t var_68
uint128_t zmm0_1
uint128_t zmm1_1
uint128_t zmm2_1

if ((*(rax_4 + 0x124) & 2) == 0)
    zmm0_1.d = var_48.d.d f- var_58_1.d
    zmm1_1.d = var_48:4.d.d f- var_58_1:4.d
    void* rax_11 = *(arg1 + 0x100)
    zmm2_1.d = 1f f/ zmm6_1.d
    zmm0_1.d = zmm0_1.d f* zmm2_1.d
    zmm1_1.d = zmm1_1.d f* zmm2_1.d
    var_68 = zmm0_1.d
    zmm0_1.d = var_40_1.d f- var_40_1
    int32_t var_64_3 = zmm1_1.d
    zmm0_1.d = zmm0_1.d f* zmm2_1.d
    int32_t var_60_3 = zmm0_1.d
    int64_t rbx
    rbx.b = *(arg1 + 0x1e0) s< *(rax_11 + 0x30) - 2
    sub_140756d20(arg1 + 0xc0, arg1, &var_68)
    int64_t* rcx_9 = *(arg1 + 0xe8)
    (*(*rcx_9 + 0x518))(rcx_9, &var_68, zx.q(rbx.b))
    return 

zmm6_1.d = var_48.d.d f- var_58_1.d
uint128_t var_28_1 = zmm7_1
zmm7_1.d = var_48:4.d.d f- var_58_1:4.d
uint128_t var_38_1 = zmm8_1
zmm8_1.d = var_40_1.d f- var_40_1
zmm0_1.d = zmm6_1.d f* zmm6_1.d
zmm2_1.d = zmm7_1.d f* zmm7_1.d
zmm1_1.d = zmm8_1.d f* zmm8_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d

if (zmm2_1.d f== 1f)
    goto label_1426fa4b1

int32_t var_60_1
uint128_t zmm3_1

if (zmm2_1.d f>= 9.99999994e-09f)
    float temp0_3[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm2_1.d)
    zmm3_1.d = zmm2_1.d f* 0.5f
    zmm0_1.d = temp0_3.d f* temp0_3[0]
    zmm1_1.d = zmm3_1.d f* zmm0_1.d
    zmm2_1.d = 0.5f f- zmm1_1.d
    zmm0_1.d = temp0_3.d f* zmm2_1.d
    temp0_3[0] = temp0_3[0] f+ zmm0_1.d
    zmm1_1.d = temp0_3.d f* temp0_3[0]
    zmm3_1.d = zmm3_1.d f* zmm1_1.d
    zmm0_1.d = temp0_3.d f* (0.5f f- zmm3_1.d)
    temp0_3[0] = temp0_3[0] f+ zmm0_1.d
    zmm6_1.d = zmm6_1.d f* temp0_3[0]
    zmm7_1.d = zmm7_1.d f* temp0_3[0]
    zmm8_1.d = zmm8_1.d f* temp0_3[0]
label_1426fa4b1:
    var_60_1 = zmm8_1.d
    int32_t var_64_2 = zmm7_1.d
    var_68 = zmm6_1.d
else
    zmm1_1 = data_143dbb1fc
    var_68 = data_143dbb1f8.d
    var_60_1 = data_143dbb200.d
    int32_t var_64_1 = zmm1_1.d

*(arg1 + 0x180) = var_68.q
*(arg1 + 0x188) = var_60_1

if (*(arg1 + 0x1e0) s>= *(arg1 + 0x20c))
    void* r8_1 = *(arg1 + 0x100)
    int64_t* rcx_3
    
    if (*(r8_1 + 0x30) s<= 0)
        rcx_3 = &data_143b58088
    else
        rcx_3 = (sx.q(*(r8_1 + 0x30) - 1) << 5) + *(r8_1 + 0x28)
    
    zmm3_1 = *(arg1 + 0x204)
    zmm2_1 = zx.o(*rcx_3)
    zmm1_1.d = (*rcx_3).d f- var_58_1.d
    int32_t rax_9 = rcx_3[1].d
    zmm2_1.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d f- var_58_1:4.d
    zmm0_1.d = rax_9.d f- var_40_1
    zmm1_1.d = zmm1_1.d f* zmm1_1.d
    zmm2_1.d = zmm2_1.d f* zmm2_1.d
    zmm0_1.d = zmm0_1.d f* zmm0_1.d
    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
    zmm2_1.d = zmm2_1.d f+ zmm0_1.d
    zmm0_1.d = zmm3_1.d f* zmm3_1.d
    
    if (not(zmm2_1.d f>= zmm0_1.d))
        zmm1_1 = _mm_sqrt_ss(0, zmm2_1.d)
        *(arg1 + 0x1ba) = rdx_2 | 2
        zmm0_1.d = 1f f/ zmm3_1.d
        zmm2_1 = zx.o(0)
        zmm1_1.d = zmm1_1.d f* zmm0_1.d
        
        if (not(zmm1_1.d f< 0f))
            zmm2_1 = __minss_xmmss_memss(zmm1_1.d, 0x3f800000)
        
        zmm0_1.d = zmm2_1.d f* *(arg1 + 0x180)
        zmm1_1.d = zmm2_1.d f* *(arg1 + 0x184)
        zmm2_1.d = zmm2_1.d f* *(arg1 + 0x188)
        *(arg1 + 0x180) = zmm0_1.d
        *(arg1 + 0x184) = zmm1_1.d
        *(arg1 + 0x188) = zmm2_1.d

sub_140756d20(arg1 + 0xc0, arg1, arg1 + 0x180)
int64_t* rcx_5 = *(arg1 + 0xe8)
(*(*rcx_5 + 0x520))(rcx_5, arg1 + 0x180)
