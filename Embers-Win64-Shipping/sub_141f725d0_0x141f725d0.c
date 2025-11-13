// 函数: sub_141f725d0
// 地址: 0x141f725d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d
int32_t r13 = arg3
arg1[0x82].d = 0

if (rdi s> *(arg1 + 0x414))
    sub_141846c50(&arg1[0x81], rdi)

arg1[0x85].d = 0

if (rdi s> *(arg1 + 0x42c))
    sub_1405a5310(&arg1[0x84], rdi)

arg1[0x88].d = 0

if (rdi s> *(arg1 + 0x444))
    sub_141846c50(&arg1[0x87], rdi)

int64_t* rax_1 = (*(*arg1 + 0x868))(arg1)

if (rax_1 != 0)
    int64_t r8 = *rax_1
    (*(r8 + 0x290))(rax_1, zx.q(rdi), r8)

void* rdi_1 = *arg2
float zmm9[0x4] = zx.o(0)
uint64_t result = rdi_1 + sx.q(arg2[1].d) * 0xc
uint64_t result_1 = result
float var_bc
float zmm0[0x4]

if (rdi_1 != result)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    int32_t var_c4_1 = 0x3f800000
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int32_t var_c0_1 = 0x3f800000
    
    do
        int32_t* r13_1
        
        if (r13 != 1)
            int64_t var_b0
            r13_1 = &var_b0
            int32_t rax_2 = *(rdi_1 + 8)
            var_b0 = *rdi_1
            int32_t var_a8_1 = rax_2
        else
            zmm6 = *(arg1 + 0x1e0)
            r13_1 = &var_bc
            zmm0 = *(rdi_1 + 8)
            float zmm2[0x4] = *(rdi_1 + 4)
            zmm8 = *rdi_1
            float temp0_1[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f3b980)
            float temp0_5[0x4] = __subps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm0[0].q), 
                    _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)[0].q), 
                *(arg1 + 0x1d0))
            float temp0_6[0x4] = _mm_rcp_ps(zmm6)
            zmm8 = __andps_xmmxud_memxud(temp0_5, data_143f3b880)
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
            float temp0_9[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
            float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_9)
            float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_8)
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
            float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
            float temp0_16[0x4] = _mm_mul_ps(temp0_6, temp0_6)
            float temp0_17[0x4] = _mm_add_ps(temp0_6, temp0_6)
            float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
            float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm6)
            float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_18)
            float temp0_21[0x4] = _mm_sub_ps(temp0_17, temp0_19)
            float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_8)
            float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
            float temp0_25[0x4] = _mm_mul_ps(temp0_21, temp0_21)
            float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
            float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm6)
            float temp0_29[0x4] = __cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(zmm6, data_143f3b860), data_143f3b970, 2)
            float temp0_30[0x4] = _mm_sub_ps(temp0_26, temp0_27)
            float temp0_33[0x4] =
                _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_9))
            zmm6 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
            float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm6)
            var_bc = temp0_36[0]
            float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
            float var_b4_1 = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)[0]
            float var_b8_1 = temp0_37[0]
        
        int64_t r14_1 = sx.q(arg1[0x82].d)
        int32_t rax_3 = (r14_1 + 1).d
        arg1[0x82].d = rax_3
        
        if (rax_3 s> *(arg1 + 0x414))
            sub_140ac0cd0(&arg1[0x81])
        
        int32_t rax_4 = r13_1[2]
        int32_t* rcx_8 = r14_1 * 0x2c + arg1[0x81]
        *(rcx_8 + 4) = *r13_1
        rcx_8[3] = rax_4
        *rcx_8 = zmm9[0]
        *(rcx_8 + 0x10) = data_143dbb1f8.q
        rcx_8[6] = data_143dbb200
        *(rcx_8 + 0x1c) = data_143dbb1f8.q
        rcx_8[9] = data_143dbb200
        rcx_8[0xa].b = 1
        int64_t r14_2 = sx.q(arg1[0x85].d)
        int32_t rax_7 = (r14_2 + 1).d
        arg1[0x85].d = rax_7
        
        if (rax_7 s> *(arg1 + 0x42c))
            sub_1405c5060(&arg1[0x84])
        
        int32_t* rcx_12 = r14_2 * 0x50 + arg1[0x84]
        *rcx_12 = zmm9[0]
        *(rcx_12 + 0x10) = data_14399f720
        *(rcx_12 + 0x20) = data_14399f720
        *(rcx_12 + 0x30) = data_14399f720
        rcx_12[0x10].b = 1
        int64_t r14_3 = sx.q(arg1[0x88].d)
        int32_t rax_8 = (r14_3 + 1).d
        arg1[0x88].d = rax_8
        
        if (rax_8 s> *(arg1 + 0x444))
            sub_140ac0cd0(&arg1[0x87])
        
        int32_t* rcx_15 = r14_3 * 0x2c + arg1[0x87]
        *(rcx_15 + 4) = 0x3f800000.q
        rcx_15[3] = 0x3f800000
        *rcx_15 = zmm9[0]
        *(rcx_15 + 0x10) = data_143dbb1f8.q
        rcx_15[6] = data_143dbb200
        *(rcx_15 + 0x1c) = data_143dbb1f8.q
        result = zx.q(data_143dbb200)
        rcx_15[9] = result.d
        rcx_15[0xa].b = 1
        
        if (rax_1 != 0)
            result = (*(*rax_1 + 0x270))(rax_1, zmm9)
        
        r13 = arg3
        zmm9[0] = zmm9[0] + 1f
        rdi_1 += 0xc
    while (rdi_1 != result_1)

*(arg1 + 0x4e2) = 0

if (arg4 == 0)
    return result

float zmm1[0x4] = *(arg1 + 0x1e0)
int32_t r9 = *(arg1 + 0x4d4)
char r8_1 = *(arg1 + 0x4dc)
char rdx_8 = *(arg1 + 0x4e1)
float var_b8_2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
zmm0 = *(arg1 + 0x4e4)
var_bc = zmm1[0]
float var_b4_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
return sub_141f771f0(&arg1[0x81], rdx_8, r8_1, r9, 0, zmm0[0], &var_bc)
