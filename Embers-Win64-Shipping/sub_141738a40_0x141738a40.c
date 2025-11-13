// 函数: sub_141738a40
// 地址: 0x141738a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = *arg4
uint128_t* rdi = nullptr
uint128_t zmm4 = *(arg4 + 4)
uint128_t zmm0
zmm0.d = zmm3.d f- *arg3
int64_t zmm5 = *(arg4 + 8)
float zmm2 = zmm4.d f- arg3[1]
float zmm1 = zmm5.d f- arg3[2]
int128_t* r13 = arg4
int128_t zmm8
int128_t var_68 = zmm8
uint128_t zmm9 = *(arg1 + 0x2c)
zmm0.d = zmm0.d f* zmm9.d
uint128_t* var_148 = nullptr
int32_t r14 = 0
int128_t zmm10 = arg1[6].d
uint128_t zmm11 = *(arg1 + 0x34)
int32_t r12 = 0
void** const var_f8 = &data_142fc46f0
int32_t var_13c = 0
int32_t var_f0 = 0x1010000
char var_ec = 1
zmm2 = zmm2 f* zmm10.d f+ zmm0.d + zmm1 f* zmm11.d
zmm0.d = zmm9.d f* zmm2
zmm3.d = zmm3.d f- zmm0.d
zmm0.d = zmm11.d f* zmm2
zmm4.d = zmm4.d f- zmm10.d * zmm2
zmm5.d = zmm5.d f- zmm0.d
int32_t var_d8 = zmm3.d
zmm3 = arg1[5].d
int32_t var_d4 = zmm4.d
zmm4 = arg1[4].d
int32_t var_d0 = zmm5.d
zmm0.d = zmm4.d f- *arg3
zmm5 = *(arg1 + 0x24)
zmm0.d = zmm0.d f* zmm9.d
zmm2 = (zmm5.d f- arg3[1]) f* zmm10.d f+ zmm0.d + (zmm3.d f- arg3[2]) f* zmm11.d
zmm9.d = zmm9.d f* zmm2
zmm10.d = zmm10.d f* zmm2
zmm4.d = zmm4.d f- zmm9.d
zmm11.d = zmm11.d f* zmm2
zmm9 = arg5
zmm5.d = zmm5.d f- zmm10.d
zmm3.d = zmm3.d f- zmm11.d
uint64_t var_e8 = (_mm_unpacklo_ps(zmm4, zmm5)).q
zmm0 = *(arg1 + 0x64)
int32_t var_dc = zmm0.d
int32_t var_e0 = zmm3.d
int32_t var_128
uint128_t zmm0_1 = sub_141737e80(&var_f8, &var_128, arg3, &var_d8, zmm0, zmm9.d)
int32_t var_158
char var_11c

if (var_11c != 0)
    uint128_t zmm6_1
    zmm6_1.d = (*arg3).d f- var_128
    int32_t var_124
    uint128_t zmm7_1
    zmm7_1.d = arg3[1].d f- var_124
    int32_t var_120
    zmm8.d = arg3[2].d f- var_120
    zmm0_1.d = zmm6_1.d f* zmm6_1.d
    uint128_t zmm2_1
    zmm2_1.d = zmm7_1.d f* zmm7_1.d
    zmm2_1.d = zmm2_1.d f+ zmm0_1.d
    zmm2_1.d = zmm2_1.d f+ zmm8.d f* zmm8.d
    
    if (zmm2_1.d f== 1f)
        goto label_141738cd5
    
    float var_154_1
    int32_t var_150_1
    
    if (zmm2_1.d f>= 9.99999994e-09f)
        float zmm3_1 = zmm2_1.d
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm3_1)
        zmm3_1 = zmm3_1 * 0.5f
        zmm0_1.d = temp0_1.d f* temp0_1[0]
        zmm2_1.d = 0.5f - zmm3_1 f* zmm0_1.d
        zmm0_1.d = temp0_1.d f* zmm2_1.d
        temp0_1[0] = temp0_1[0] f+ zmm0_1.d
        zmm0_1.d = temp0_1.d f* (0.5f - zmm3_1 * temp0_1[0] * temp0_1[0])
        temp0_1[0] = temp0_1[0] f+ zmm0_1.d
        zmm6_1.d = zmm6_1.d f* temp0_1[0]
        zmm7_1.d = zmm7_1.d f* temp0_1[0]
        zmm8.d = zmm8.d f* temp0_1[0]
    label_141738cd5:
        var_150_1 = zmm8.d
        var_154_1 = zmm7_1.d
        var_158 = zmm6_1.d
    else
        float zmm1_1 = data_143dbb1fc
        var_158 = data_143dbb1f8.d
        var_150_1 = data_143dbb200.d
        var_154_1 = zmm1_1
    
    zmm0_1 = zx.o(var_128.q)
    void** const var_c8 = &data_142fc47b8
    uint64_t var_b8_1 = zmm0_1.q
    zmm0_1 = zx.o(var_158.q)
    int32_t var_b0_1 = var_120
    int32_t var_a4_1 = var_150_1
    int32_t var_c0_1 = 0x1000202
    char var_bc_1 = 0
    uint64_t var_ac_1 = zmm0_1.q
    sub_141737e80(&var_c8, &var_158, arg3, r13, zmm0_1, 0)
    float zmm4_2[0x4] = var_158
    int64_t zmm3_2 = var_154_1
    float zmm1_2 = zmm4_2[0]
    float zmm0_2[0x4] = var_150_1
    float zmm2_2 = zmm3_2.d f- arg3[1]
    zmm0_2[0] = zmm0_2[0] f- arg3[2]
    zmm1_2 = zmm1_2 f- *arg3
    int32_t var_12c_1 = var_150_1
    int32_t var_140_1 = 1
    zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
    zmm2_2 = zmm2_2 * zmm2_2 + zmm1_2 * zmm1_2 + zmm0_2[0]
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm4_2, zmm3_2)
    var_158.q = temp0_2.q
    int64_t var_134_1 = temp0_2.q
    int32_t temp0_3 = _mm_sqrt_ss(0, zmm2_2)
    sub_1405a4f90(&var_148)
    rdi = var_148
    r12 = var_13c
    r14 = var_140_1
    zmm0_1.d = temp0_3
    int32_t var_138
    var_138.o = zmm0_1
    *rdi = zmm0_1

int32_t var_118
float zmm0_3[0x4] = sub_141737e80(&arg1[2], &var_118, arg3, r13, zmm0_1, zmm9.d)
char var_10c

if (var_10c != 0)
    float zmm4_3[0x4] = var_118
    int32_t var_114
    int64_t zmm3_3 = var_114
    zmm4_3[0] = zmm4_3[0] f- *arg3
    int32_t var_110
    zmm0_3 = var_110
    float zmm2_3 = zmm3_3.d f- arg3[1]
    zmm0_3[0] = zmm0_3[0] f- arg3[2]
    zmm4_3[0] = zmm4_3[0] * zmm4_3[0]
    int64_t r13_1 = sx.q(r14)
    int32_t var_12c_2 = var_110
    zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
    r14 = (r13_1 + 1).d
    zmm2_3 = zmm2_3 * zmm2_3 + zmm4_3[0]
    float temp0_4[0x4] = _mm_unpacklo_ps(zmm4_3, zmm3_3)
    var_118.q = temp0_4.q
    int64_t var_134_2 = temp0_4.q
    float var_138_1 = _mm_sqrt_ss(0, zmm2_3 + zmm0_3[0])[0]
    
    if (r14 s> r12)
        sub_1405a4f90(&var_148)
        r12 = var_13c
        rdi = var_148
    
    zmm0_3 = var_138_1.o
    r13 = arg4
    rdi[r13_1] = zmm0_3

int32_t var_108
uint128_t zmm10_1 = sub_141737e80(&arg1[7], &var_108, arg3, r13, zmm0_3, zmm9.d)
char var_fc

if (var_fc != 0)
    float zmm4_4[0x4] = var_108
    int32_t var_104
    int64_t zmm3_4 = var_104
    zmm4_4[0] = zmm4_4[0] f- *arg3
    int32_t var_100
    float zmm0_4[0x4] = var_100
    float zmm2_4 = zmm3_4.d f- arg3[1]
    zmm0_4[0] = zmm0_4[0] f- arg3[2]
    zmm4_4[0] = zmm4_4[0] * zmm4_4[0]
    int64_t rbx_1 = sx.q(r14)
    int32_t var_12c_3 = var_100
    zmm0_4[0] = zmm0_4[0] * zmm0_4[0]
    r14 = (rbx_1 + 1).d
    zmm2_4 = zmm2_4 * zmm2_4 + zmm4_4[0]
    float temp0_6[0x4] = _mm_unpacklo_ps(zmm4_4, zmm3_4)
    var_108.q = temp0_6.q
    int64_t var_134_3 = temp0_6.q
    float var_138_2 = _mm_sqrt_ss(0, zmm2_4 + zmm0_4[0])[0]
    
    if (r14 s> r12)
        sub_1405a4f90(&var_148)
        rdi = var_148
    
    rdi[rbx_1] = var_138_2.o

int128_t* arg_20
arg_20.b = 0
uint128_t zmm0_5 = sub_1416e6770(rdi, r14, 0)
uint128_t* rbx_2 = rdi
void* r14_3 = &rdi[sx.q(r14)]
int32_t rax_11

if (rdi == r14_3)
label_141738fbc:
    int32_t var_150_2 = 0
    rax_11 = 0
    *arg2 = (_mm_unpacklo_ps(zmm10_1, zmm10_1.q)).q
    *(arg2 + 0xc) = 0
else
    double zmm6_3 = _mm_cvtps_pd(zmm9.q) + 0.0001
    
    while (true)
        (*(*arg1 + 0x20))(arg1, rbx_2 + 4, &var_158)
        
        if (fconvert.d(zmm0_5.d) <= zmm6_3)
            *arg2 = *(rbx_2 + 4)
            rax_11 = *(rbx_2 + 0xc)
            *(arg2 + 0xc) = 1
            break
        
        rbx_2 = &rbx_2[1]
        
        if (rbx_2 == r14_3)
            goto label_141738fbc

arg2[1].d = rax_11
var_f8 = &data_142fc3cd0

if (rdi != 0)
    sub_140a74f90(rdi)

return arg2
