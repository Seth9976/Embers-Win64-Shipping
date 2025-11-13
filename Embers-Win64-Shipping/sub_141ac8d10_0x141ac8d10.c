// 函数: sub_141ac8d10
// 地址: 0x141ac8d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = data_143f2b940
int64_t rcx
int64_t rbx

if (data_143de5480 == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    rcx.b = GetCurrentThreadId().d != data_143de5470

if (*(rdi + (rcx << 2)) == 0 || arg2 == 0)
    return 

void* r15_1 = *(arg2 + 0x20)

if (r15_1 == 0)
    return 

uint64_t rax

if (*(r15_1 + 0xa8) == 0)
    rax = sub_141ee69e0(r15_1)

if (*(r15_1 + 0xa8) == 0 && rax == 0)
    return 

void* r13_1 = *(r15_1 + 0xa8)

if (r13_1 == 0)
    r13_1 = sub_141ee69e0(r15_1)

int64_t rdi_1 = data_143f2b988
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

if (*(rdi_1 + (rcx_3 << 2)) != 1 || *(arg1 + 0x244) s>= 0)
    rax = zx.q(*(arg1 + 0x245))
    
    if ((rax.b & 1) != 0)
        rax.b &= 0xfe
        *(arg1 + 0x245) = rax.b
        uint64_t* rcx_6 = *(arg1 + 0x3b8)
        uint64_t rdx_2 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3
        
        if (rcx_6 u> &rcx_6[sx.q(*(arg1 + 0x3c0))])
            rdx_2 = 0
        
        if (rdx_2 != 0)
            do
                rax = *rcx_6
                rcx_6 = &rcx_6[1]
                rbx += 1
                *(rax + 0x120) = 0
            while (rbx != rdx_2)
    
    return 

int128_t** rdi_2 = *(arg1 + 0x3b8)
uint64_t r14_2 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rdi_2 u> &rdi_2[sx.q(*(arg1 + 0x3c0))])
    r14_2 = 0

if (r14_2 == 0)
    return 

float zmm6[0x4]
float var_48_1[0x4] = zmm6

do
    char rcx_4 = *(arg1 + 0x244)
    int128_t* rbp_1 = *rdi_2
    rax.b = rcx_4 u>> 7
    rbp_1[0x12].b = rax.b
    
    if (rcx_4 s< 0)
        int64_t* rcx_5 = *(r13_1 + 0x1b0)
        
        if (rcx_5 != 0)
            rbp_1[0x12].b = 1
            float zmm5[0x4] = *(r15_1 + 0x1c0)
            int64_t rax_5 = *rcx_5
            float temp0_4[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(*rbp_1, (*(rbp_1 + 8))[0].q), 
                    _mm_unpacklo_ps(*(rbp_1 + 4), zx.o(0)[0].q)[0].q), 
                *(r15_1 + 0x1e0))
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_6)
            float temp0_12[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_5), temp0_9)
            float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
            float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
            float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_5)
            float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_6)
            float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_4)
            float temp0_22[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_17, temp0_18), temp0_19), *(r15_1 + 0x1d0))
            float var_78 = temp0_22[0]
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
            float var_70_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
            float var_74_1 = temp0_23[0]
            void arg_18
            void arg_20
            (*(rax_5 + 0x1f8))(temp0_23, &var_78, rbp_1 + 0x12c, rbp_1 + 0x128, &arg_20, &arg_18, 
                var_78, var_70_1)
            float zmm3[0x4] = *(r15_1 + 0x1e0)
            uint32_t zmm4_1[0x4] = data_143f2b9a0
            float zmm5_1[0x4] = data_143f2b990
            float zmm0[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm5_1, _mm_and_ps(zmm3, zmm4_1), 1)) == 0)
                zmm6 = data_143dbb0c0
                zmm3 = data_143dbb0e0
            else
                zmm0 = data_143f2b810
                zmm6 = __mulps_xmmps_memps(*(r15_1 + 0x1c0), data_143f2b8e0)
                zmm0[0].q = zmm3 u>> 0x40
                float temp0_29[0x4] = _mm_shuffle_ps(zmm3, zmm0, 0xc4)
                float temp0_30[0x4] = _mm_rcp_ps(temp0_29)
                float temp0_31[0x4] = _mm_mul_ps(temp0_30, temp0_30)
                float temp0_34[0x4] =
                    _mm_sub_ps(_mm_add_ps(temp0_30, temp0_30), _mm_mul_ps(temp0_31, temp0_29))
                float temp0_35[0x4] = _mm_mul_ps(temp0_34, temp0_34)
                float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_34)
                float temp0_37[0x4] = _mm_mul_ps(temp0_35, temp0_29)
                float temp0_39[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_29, zmm4_1), zmm5_1, 2)
                float temp0_40[0x4] = _mm_sub_ps(temp0_36, temp0_37)
                zmm3 = __andps_xmmxud_memxud(_mm_and_ps(temp0_39, temp0_40 ^ zx.o(0)) ^ temp0_40, 
                    data_143f2b820)
            
            float zmm2[0x4] = rbp_1[0x13].d
            float temp0_43[0x4] = _mm_unpacklo_ps(*(rbp_1 + 0x12c), (*(rbp_1 + 0x134))[0].q)
            float temp0_44[0x4] = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
            float temp0_45[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            float temp0_47[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_43, temp0_44[0].q), zmm3)
            zmm4_1 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_49[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc9), temp0_45)
            float temp0_54[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xd2), zmm4_1), temp0_51)
            float temp0_55[0x4] = _mm_add_ps(temp0_54, temp0_54)
            float temp0_56[0x4] = _mm_mul_ps(temp0_49, temp0_55)
            float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xc9), temp0_45)
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xd2)
            float temp0_60[0x4] = _mm_add_ps(temp0_56, temp0_47)
            float temp0_63[0x4] =
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_59, zmm4_1), temp0_58), temp0_60)
            float var_64_1 = _mm_shuffle_ps(temp0_63, temp0_63, 0xaa)[0]
            *(rbp_1 + 0x12c) =
                (_mm_unpacklo_ps(temp0_63, _mm_shuffle_ps(temp0_63, temp0_63, 0x55)[0].q)).q
            *(rbp_1 + 0x134) = var_64_1
            zmm0 = zx.o(0)
            zmm0[0] = float.s(rand())
            zmm0[0] = zmm0[0] * 3.05185094e-05f
            zmm0[0] = zmm0[0] + zmm0[0]
            *(rbp_1 + 0x138) = zmm0[0]
            *(rbp_1 + 0x124) = *(arg1 + 0x190)
    
    rdi_2 = &rdi_2[1]
    rbx += 1
while (rbx != r14_2)
