// 函数: sub_14267b270
// 地址: 0x14267b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint32_t zmm2[0x4] = data_143f71820
float zmm3[0x4] = data_143f71810
int32_t r15 = arg3
int32_t r14 = arg2
float zmm9[0x4] = arg4[2]
float var_a8[0x4]
uint32_t zmm1[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(zmm9, zmm2), 1)) == 0)
    zmm1 = data_143dbb0d0
    var_a8 = data_143dbb0c0
    float var_88_1[0x4] = data_143dbb0e0
    uint32_t var_98_1[0x4] = zmm1
else
    float zmm0[0x4] = data_143f717b0
    float temp0_3[0x4] = __mulps_xmmps_memps(*arg4, data_143f71800)
    float zmm5[0x4] = arg4[1]
    zmm0[0].q = zmm9 u>> 0x40
    float temp0_4[0x4] = _mm_shuffle_ps(zmm9, zmm0, 0xc4)
    zmm1 = _mm_rcp_ps(temp0_4)
    var_a8 = temp0_3
    float temp0_6[0x4] = _mm_mul_ps(zmm1, zmm1)
    zmm1 = _mm_sub_ps(_mm_add_ps(zmm1, zmm1), _mm_mul_ps(temp0_6, temp0_4))
    float temp0_10[0x4] = _mm_mul_ps(zmm1, zmm1)
    zmm1 = _mm_add_ps(zmm1, zmm1)
    float temp0_12[0x4] = _mm_mul_ps(temp0_10, temp0_4)
    float temp0_14[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_4, zmm2), zmm3, 2)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
    zmm1 = _mm_sub_ps(zmm1, temp0_12)
    zmm2 = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
    zmm9 = __andps_xmmxud_memxud(_mm_and_ps(temp0_14, zx.o(0) ^ zmm1) ^ zmm1, data_143f717c0)
    float temp0_21[0x4] = _mm_mul_ps(zmm5, zmm9)
    float var_88[0x4] = zmm9
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_15)
    float temp0_26[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xd2), zmm2), temp0_23)
    float temp0_27[0x4] = _mm_add_ps(temp0_26, temp0_26)
    float temp0_28[0x4] = _mm_mul_ps(temp0_18, temp0_27)
    zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), zmm2)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc9)
    float temp0_32[0x4] = _mm_add_ps(temp0_28, temp0_21)
    float var_98[0x4] = __andps_xmmxud_memxud(
        _mm_sub_ps(zx.o(0), 
            _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_31, temp0_15)), temp0_32)), 
        data_143f717c0)
int32_t var_c8
sub_140ae2c60(arg7, &var_c8, &var_a8)
float zmm0_1[0x4] = arg4[2]
float temp0_38[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
temp0_38[0] = temp0_38[0] * zmm0_1[0]
int64_t var_e8 = 0
float temp0_39[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
int32_t var_e0 = 0
temp0_38[0] = temp0_38[0] * temp0_39[0]
temp0_38[0] - 0f
bool c = temp0_38[0] < 0f
float zmm1_1[0x4] = var_c8
zmm1_1[0] = zmm1_1[0] * 2f
zmm1_1[0] = zmm1_1[0] - 0.5f
int32_t rax_4 = int.d(zmm1_1[0]) s>> 1
int32_t r13

if (rax_4 - 1 s>= 0)
    r13 = r15
    
    if (rax_4 s<= r15)
        r13 = rax_4 - 1
else
    r13 = 0

int32_t var_c4
zmm1_1 = var_c4
zmm1_1[0] = zmm1_1[0] * 2f
int32_t var_10c = r13
zmm1_1[0] = zmm1_1[0] - 0.5f
int32_t rax_6 = int.d(zmm1_1[0]) s>> 1
int32_t rcx_2

if (rax_6 - 1 s>= 0)
    rcx_2 = r14
    
    if (rax_6 s<= r14)
        rcx_2 = rax_6 - 1
else
    rcx_2 = 0

int32_t var_bc
zmm0_1 = var_bc
zmm1_1 = 0xbf000000
zmm0_1[0] = zmm0_1[0] * 2f
zmm1_1[0] = -0.5f - zmm0_1[0]
int32_t rax_8 = int.d(zmm1_1[0]) s>> 1
int32_t rsi_1

if (1 - rax_8 s>= 0)
    rsi_1 = r15
    
    if (1 - rax_8 s< r15)
        rsi_1 = 1 - rax_8
else
    rsi_1 = 0

int32_t var_b8
zmm0_1 = var_b8
zmm0_1[0] = zmm0_1[0] * 2f
uint128_t zmm3_1
zmm3_1.d = -0.5f - zmm0_1[0]
int32_t result = int.d(zmm3_1.d) s>> 1

if (1 - result s< 0)
    r14 = 0
else if (1 - result s< r14)
    r14 = 1 - result

int32_t i_2 = rsi_1 - r13
int32_t r14_1 = r14 - rcx_2
int32_t i_3 = i_2
int32_t var_108 = r14_1

if (i_2 s> 0 && r14_1 s> 0)
    int32_t rcx_3 = arg5[1].d
    int32_t result_1 = i_2 - 1
    int32_t rbp_3 = rcx_3 s/ 3
    int32_t rdx_4 = r14_1 - 1
    int32_t var_110_1 = rbp_3
    uint64_t rdx_6 = zx.q(r14_1 * i_2)
    int32_t rdx_7 = rdx_6.d + rcx_3 + (rdx_6 << 1).d
    
    if (rdx_7 s> *(arg5 + 0xc))
        sub_1405dadb0(arg5, rdx_7)
    
    result = arg6[1].d
    int32_t rdx_8 = result + result_1 * rdx_4 * 6
    
    if (rdx_8 s> *(arg6 + 0xc))
        result = sub_1405dadb0(arg6, rdx_8)
    
    int32_t r12_3 = 0
    
    if (r14_1 s> 0)
        do
            if (i_2 s> 0)
                int32_t rcx_7 = rcx_2
                uint64_t i_1 = zx.q(i_2)
                int32_t r14_2 = r13
                int32_t rbp_6 = r15 - r13 - 1
                result = r12_3 + rcx_7
                uint64_t i
                
                do
                    int64_t rsi_2 = sx.q(arg5[1].d)
                    int32_t rax_11 = r14_2
                    
                    if (c == 0)
                        rax_11 = rbp_6
                    
                    float temp0_40[0x4] = _mm_cvtepi32_ps(zx.o(r14_2))
                    zmm3_1 = _mm_cvtepi32_ps(zx.o(result))
                    int64_t rax_16 = *arg1
                    zmm3_1 = _mm_unpacklo_ps(zmm3_1, 0)
                    float zmm4_1[0x4] = *arg4
                    float temp0_43[0x4] = _mm_cvtepi32_ps(zx.o(sx.d(
                        *(rax_16 + (sx.q(rax_11 * arg3 + r12_3 + rcx_7) << 1)))))
                    float temp0_44[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                    float temp0_47[0x4] = __mulps_xmmps_memps(
                        _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_40, temp0_43[0].q), zmm3_1.q), 
                        arg4[2])
                    zmm3_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                    float temp0_49[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                    float temp0_51[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc9), temp0_44)
                    float temp0_54[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xd2), zmm3_1), temp0_51)
                    float temp0_55[0x4] = _mm_add_ps(temp0_54, temp0_54)
                    float temp0_56[0x4] = _mm_mul_ps(temp0_49, temp0_55)
                    float temp0_58[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xc9), temp0_44)
                    float temp0_59[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xd2)
                    float temp0_60[0x4] = _mm_add_ps(temp0_56, temp0_47)
                    float temp0_64[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_59, zmm3_1), temp0_58), temp0_60), 
                        arg4[1])
                    int32_t rax_18 = (rsi_2 + 1).d
                    arg5[1].d = rax_18
                    var_e8.o = temp0_64
                    
                    if (rax_18 s> *(arg5 + 0xc))
                        sub_1406105e0(arg5)
                    
                    *(*arg5 + (rsi_2 << 2)) = var_e8.d[0]
                    int64_t rsi_3 = sx.q(arg5[1].d)
                    int32_t rax_20 = (rsi_3 + 1).d
                    arg5[1].d = rax_20
                    
                    if (rax_20 s> *(arg5 + 0xc))
                        sub_1406105e0(arg5)
                    
                    *(*arg5 + (rsi_3 << 2)) = var_e8:4.d[0]
                    int64_t rsi_4 = sx.q(arg5[1].d)
                    int32_t rax_22 = (rsi_4 + 1).d
                    arg5[1].d = rax_22
                    
                    if (rax_22 s> *(arg5 + 0xc))
                        sub_1406105e0(arg5)
                    
                    r14_2 += 1
                    rcx_7 = rcx_2
                    rbp_6 -= 1
                    *(*arg5 + (rsi_4 << 2)) = var_e0[0]
                    result = r12_3 + rcx_7
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                i_2 = i_3
                r15 = arg3
                r13 = var_10c
                r14_1 = var_108
            
            r12_3 += 1
        while (r12_3 s< r14_1)
        
        rbp_3 = var_110_1
    
    int32_t r13_2 = 0
    
    if (rdx_4 s> 0)
        int32_t rcx_13 = rdx_4
        result = i_2 - 1
        
        do
            int32_t rdi_1 = 0
            
            if (result s> 0)
                int32_t rax_24 = var_10c
                void* rdx_13 = &arg1[2]
                bool r8_2 = c
                void* var_f0_1 = rdx_13
                int32_t r14_5 = r15 - rax_24 - 1
                
                do
                    int32_t rcx_14 = rax_24 + rdi_1
                    void* rax_25 = *(rdx_13 + 0x10)
                    
                    if (r8_2 == 0)
                        rcx_14 = r14_5
                    
                    int32_t rcx_17 = rcx_14 * r15 + r13_2 + rcx_2
                    
                    if (rax_25 != 0)
                        rdx_13 = rax_25
                    
                    int32_t rax_26 = rcx_17
                    
                    if (rcx_17 s< 0)
                        rax_26 = rcx_17 + 0x1f
                    
                    if (not(test_bit(*(rdx_13 + (sx.q(rax_26 s>> 5) << 2)), rcx_17 & 0x1f)))
                        int32_t rcx_21 = r13_2 * i_2 + rdi_1
                        int32_t r15_3 = (r13_2 + 1) * i_2 + rdi_1
                        int32_t r12_4 = r15_3
                        int32_t rax_30 = rcx_21 + rbp_3
                        int64_t rbp_7 = sx.q(arg6[1].d)
                        int32_t rsi_5 = rcx_21 + 1
                        
                        if (r8_2 == 0)
                            r12_4 = rsi_5
                        
                        if (r8_2 == 0)
                            rsi_5 = r15_3
                        
                        int32_t rax_31 = (rbp_7 + 1).d
                        arg6[1].d = rax_31
                        
                        if (rax_31 s> *(arg6 + 0xc))
                            sub_1405a4cf0(arg6)
                        
                        *(*arg6 + (rbp_7 << 2)) = rax_30
                        int64_t rbp_8 = sx.q(arg6[1].d)
                        int32_t r15_4 = r15_3 + var_110_1 + 1
                        int32_t rax_35 = (rbp_8 + 1).d
                        arg6[1].d = rax_35
                        
                        if (rax_35 s> *(arg6 + 0xc))
                            sub_1405a4cf0(arg6)
                        
                        *(*arg6 + (rbp_8 << 2)) = r15_4
                        int64_t rbp_9 = sx.q(arg6[1].d)
                        int32_t rax_37 = (rbp_9 + 1).d
                        arg6[1].d = rax_37
                        
                        if (rax_37 s> *(arg6 + 0xc))
                            sub_1405a4cf0(arg6)
                        
                        *(*arg6 + (rbp_9 << 2)) = r12_4 + var_110_1
                        int64_t rbp_10 = sx.q(arg6[1].d)
                        int32_t rax_39 = (rbp_10 + 1).d
                        arg6[1].d = rax_39
                        
                        if (rax_39 s> *(arg6 + 0xc))
                            sub_1405a4cf0(arg6)
                        
                        *(*arg6 + (rbp_10 << 2)) = rax_30
                        rbp_3 = var_110_1
                        int64_t rsi_6 = sx.q(arg6[1].d)
                        int32_t rax_41 = (rsi_6 + 1).d
                        arg6[1].d = rax_41
                        
                        if (rax_41 s> *(arg6 + 0xc))
                            sub_1405a4cf0(arg6)
                        
                        *(*arg6 + (rsi_6 << 2)) = rsi_5 + rbp_3
                        int64_t rsi_7 = sx.q(arg6[1].d)
                        int32_t rax_43 = (rsi_7 + 1).d
                        arg6[1].d = rax_43
                        
                        if (rax_43 s> *(arg6 + 0xc))
                            sub_1405a4cf0(arg6)
                        
                        r8_2 = c
                        *(*arg6 + (rsi_7 << 2)) = r15_4
                        r15 = arg3
                    
                    i_2 = i_3
                    rdi_1 += 1
                    rdx_13 = var_f0_1
                    r14_5 -= 1
                    rax_24 = var_10c
                while (rdi_1 s< result_1)
                
                result = result_1
                rcx_13 = rdx_4
            
            i_2 = i_3
            r13_2 += 1
        while (r13_2 s< rcx_13)

__security_check_cookie(rax_1 ^ &var_138)
return result
