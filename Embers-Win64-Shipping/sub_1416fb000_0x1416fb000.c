// 函数: sub_1416fb000
// 地址: 0x1416fb000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t r14 = 0
int32_t var_238 = 0
int32_t rdi = 0
int64_t var_198
float (* rax_3)[0x4] = sub_140ad7d70(arg2, &var_198, arg4)
float zmm5[0x4] = *(arg1 + 0xc)
float zmm0[0x4] = *(arg1 + 0x14)
float zmm2[0x4] = arg1[1].d
float zmm9[0x4] = *rax_3
float zmm13[0x4] = zmm2
float zmm11[0x4] = rax_3[2]
float zmm10[0x4] = rax_3[1]
float zmm4[0x4] = *arg1
float zmm12[0x4] = zmm5
float zmm15[0x4] = *(arg1 + 4)
zmm12[0] = zmm12[0] - zmm4[0]
float zmm14 = zmm0[0] f- *(arg1 + 8)
float temp0[0x4] = _mm_unpacklo_ps(zmm5, zmm0[0].q)
zmm13[0] = zmm13[0] - zmm15[0]
int32_t zmm8 = (zx.o(0)).d
float temp0_3[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0, _mm_unpacklo_ps(zmm2, 0)[0].q), zmm11)
float temp0_4[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
float temp0_5[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
float var_214 = zmm5[0]
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_4)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_5)
float var_238_1 = zmm4[0]
float temp0_11[0x4] = _mm_sub_ps(temp0_10, temp0_8)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_4)
float temp0_21[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_5), temp0_14), 
        _mm_add_ps(_mm_mul_ps(temp0_6, temp0_12), temp0_3)), 
    zmm10)
float var_218 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
var_198 = (_mm_unpacklo_ps(temp0_21, _mm_shuffle_ps(temp0_21, temp0_21, 0x55)[0].q)).q
float temp0_28[0x4] = _mm_mul_ps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, (*(arg1 + 8))[0].q), _mm_unpacklo_ps(zmm15, 0)[0].q), 
    zmm11)
float var_190 = var_218
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_4)
zmm15 = 0x3f800000
int64_t r10 = 2
void var_174
void* r9 = &var_174
int32_t i = 0
float temp0_33[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_5), temp0_30)
float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xc9), temp0_4)
float temp0_43[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd2), temp0_5), temp0_36), 
        _mm_add_ps(_mm_mul_ps(temp0_6, temp0_34), temp0_28)), 
    zmm10)
float var_218_1 = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)[0]
int64_t var_18c = (_mm_unpacklo_ps(temp0_43, _mm_shuffle_ps(temp0_43, temp0_43, 0x55)[0].q)).q
float var_184 = var_218_1
int64_t var_230
float zmm3[0x4]

do
    int64_t* rax_6
    int32_t rdi_1
    
    if (i != 0)
        int32_t* rax_7
        int32_t rdi_2
        
        if (i != 1)
            rdi_2 = rdi | 4
            int64_t var_1f8 = 0
            int32_t var_1f0_1 = 0x3f800000
            rax_7 = &var_1f8
        else
            rdi_2 = rdi | 2
            int32_t var_204 = 0
            int64_t var_200_1 = 0x3f800000
            rax_7 = &var_204
        
        rdi_1 = rdi_2 | 8
        int32_t var_1b4_1 = rax_7[2]
        int64_t var_1bc
        rax_6 = &var_1bc
        var_1bc = *rax_7
    else
        rdi_1 = rdi | 1
        var_230 = 0x3f800000
        int32_t var_228_1 = 0
        rax_6 = &var_230
    
    zmm0 = zx.o(*rax_6)
    zmm3 = zmm0
    zmm2 = zmm0
    zmm0 = rax_6[1].d
    int32_t rcx_2 = rdi_1 & 0xfffffff7
    zmm0[0] = zmm0[0] * zmm14
    float temp0_47[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    
    if ((rdi_1.b & 8) == 0)
        rcx_2 = rdi_1
    
    temp0_47[0] = temp0_47[0] * zmm13[0]
    zmm0[0] = zmm0[0] f+ *(arg1 + 8)
    int32_t rdx_2 = rcx_2 & 0xfffffffb
    zmm3[0] = zmm3[0] * zmm12[0]
    temp0_47[0] = temp0_47[0] f+ *(arg1 + 4)
    
    if ((rcx_2.b & 4) == 0)
        rdx_2 = rcx_2
    
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t rcx_4 = rdx_2 & 0xfffffffd
    float temp0_48[0x4] = _mm_unpacklo_ps(temp0_47, 0)
    
    if ((rdx_2.b & 2) == 0)
        rcx_4 = rdx_2
    
    float temp0_51[0x4] =
        _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_48[0].q), zmm11)
    int32_t rdx_4 = rcx_4 & 0xfffffffe
    
    if ((rcx_4.b & 1) == 0)
        rdx_4 = rcx_4
    
    float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xc9), temp0_4)
    float temp0_56[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xd2), temp0_5), temp0_53)
    float temp0_57[0x4] = _mm_add_ps(temp0_56, temp0_56)
    float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xc9), temp0_4)
    float temp0_66[0x4] = _mm_add_ps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xd2), temp0_5), temp0_59), 
            _mm_add_ps(_mm_mul_ps(temp0_6, temp0_57), temp0_51)), 
        zmm10)
    float var_1c0_1 = _mm_shuffle_ps(temp0_66, temp0_66, 0xaa)[0]
    *(r9 - 0xc) = (_mm_unpacklo_ps(temp0_66, _mm_shuffle_ps(temp0_66, temp0_66, 0x55)[0].q)).q
    *(r9 - 4) = var_1c0_1
    int64_t* rax_15
    int32_t rdx_5
    
    if (i != 0)
        int32_t* rax_16
        int32_t rcx_5
        
        if (i != 1)
            int64_t var_1d4 = 0
            rax_16 = &var_1d4
            int32_t var_1cc_1 = 0x3f800000
            rcx_5 = 0xc0
        else
            int32_t var_1e0 = 0
            rax_16 = &var_1e0
            int64_t var_1dc_1 = 0x3f800000
            rcx_5 = 0xa0
        
        rdx_5 = rdx_4 | rcx_5
        int32_t var_19c_1 = rax_16[2]
        int64_t var_1a4
        rax_15 = &var_1a4
        var_1a4 = *rax_16
    else
        rdx_5 = rdx_4 | 0x10
        int64_t var_1ec = 0x3f800000
        int32_t var_1e4_1 = 0
        rax_15 = &var_1ec
    
    zmm2 = zx.o(*rax_15)
    int32_t rax_18 = rax_15[1].d
    zmm3 = arg1[1].d
    zmm2[0] = zmm2[0] * zmm12[0]
    int32_t rcx_7 = rdx_5 & 0xffffff7f
    float temp0_70[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    temp0_70[0] = temp0_70[0] * zmm13[0]
    zmm5[0] = zmm5[0] - zmm2[0]
    zmm0 = rax_18
    zmm0[0] = zmm0[0] * zmm14
    
    if ((rdx_5.b & 0x80) == 0)
        rcx_7 = rdx_5
    
    zmm3[0] = zmm3[0] - temp0_70[0]
    int32_t rdx_7 = rcx_7 & 0xffffffbf
    float zmm1[0x4] = *(arg1 + 0x14)
    zmm1[0] = zmm1[0] - zmm0[0]
    zmm4 = var_238_1
    
    if ((rcx_7.b & 0x40) == 0)
        rdx_7 = rcx_7
    
    int32_t rcx_9 = rdx_7 & 0xffffffdf
    float temp0_71[0x4] = _mm_unpacklo_ps(zmm3, 0)
    float temp0_72[0x4] = _mm_unpacklo_ps(zmm5, zmm1[0].q)
    
    if ((rdx_7.b & 0x20) == 0)
        rcx_9 = rdx_7
    
    float temp0_74[0x4] = _mm_mul_ps(_mm_unpacklo_ps(temp0_72, temp0_71[0].q), zmm11)
    i += 1
    r10 += 2
    rdi = rcx_9 & 0xffffffef
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xc9), temp0_4)
    float temp0_79[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xd2), temp0_5), temp0_76)
    float temp0_80[0x4] = _mm_add_ps(temp0_79, temp0_79)
    float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xc9), temp0_4)
    zmm5 = var_214
    float temp0_89[0x4] = _mm_add_ps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xd2), temp0_5), temp0_82), 
            _mm_add_ps(_mm_mul_ps(temp0_6, temp0_80), temp0_74)), 
        zmm10)
    float var_208_1 = _mm_shuffle_ps(temp0_89, temp0_89, 0xaa)[0]
    *r9 = (_mm_unpacklo_ps(temp0_89, _mm_shuffle_ps(temp0_89, temp0_89, 0x55)[0].q)).q
    *(r9 + 8) = var_208_1
    r9 += 0x18
    
    if ((rcx_9.b & 0x10) == 0)
        rdi = rcx_9
while (i s< 3)

zmm13 = *(arg5 + 0x9c)
float* r8_1 = &var_190
float result_1 = 0f
int64_t rcx_10 = 0
int64_t i_6 = 8
int32_t var_130[0x16]
float result
int64_t i_1

do
    zmm0 = zx.o(*(arg3 + 0x1c))
    zmm10 = r8_1[-2]
    zmm11 = r8_1[-1]
    zmm12 = *r8_1
    zmm11[0] = zmm11[0] f- *(arg3 + 0x14)
    result = *(arg3 + 0x24)
    zmm12[0] = zmm12[0] f- *(arg3 + 0x18)
    var_230 = zmm0.q
    zmm10[0] = zmm10[0] f- *(arg3 + 0x10)
    zmm11[0] = zmm11[0] f* *(arg3 + 0x20)
    zmm12[0] = zmm12[0] f* *(arg3 + 0x24)
    zmm10[0] = zmm10[0] f* *(arg3 + 0x1c)
    zmm11[0] = zmm11[0] + zmm10[0]
    zmm13[0] = zmm13[0] + 9.99999975e-05f
    zmm11[0] = zmm11[0] + zmm12[0]
    
    if (not(zmm11[0] >= zmm13[0]))
        zmm13[0] = zmm13[0] - 9.99999975e-05f
        int64_t rdx_8 = 0
        float temp0_95[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_230.d, result[0].q), 
            _mm_unpacklo_ps(var_230:4.d, 0)[0].q)
        *(arg5 + 0x9c) = zmm11[0]
        zmm5 = *arg4
        float temp0_96[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xc9)
        float temp0_97[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xd2)
        float temp0_98[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        float temp0_99[0x4] = _mm_mul_ps(temp0_96, temp0_98)
        float temp0_100[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        float temp0_101[0x4] = _mm_mul_ps(temp0_97, temp0_100)
        float temp0_102[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm13[0] - zmm11[0]
        bool cond:5_1 = zmm13[0] < zmm11[0]
        bool cond:6_1 = zmm13[0] < zmm11[0]
        float temp0_103[0x4] = _mm_sub_ps(temp0_101, temp0_99)
        zmm13 = zmm11
        
        if (cond:5_1)
            rdx_8 = rcx_10
        
        float temp0_104[0x4] = _mm_add_ps(temp0_103, temp0_103)
        float temp0_105[0x4] = _mm_mul_ps(temp0_102, temp0_104)
        float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xc9), temp0_98)
        float temp0_108[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xd2)
        float temp0_109[0x4] = _mm_add_ps(temp0_105, temp0_95)
        float temp0_110[0x4] = _mm_mul_ps(temp0_108, temp0_100)
        float temp0_111[0x4] = _mm_unpacklo_ps(zmm11, 0)
        float temp0_113[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm10, zmm12[0].q), temp0_111[0].q)
        float temp0_115[0x4] = _mm_add_ps(_mm_sub_ps(temp0_110, temp0_107), temp0_109)
        float var_208_2 = _mm_shuffle_ps(temp0_115, temp0_115, 0xaa)[0]
        *(arg5 + 0x84) =
            (_mm_unpacklo_ps(temp0_115, _mm_shuffle_ps(temp0_115, temp0_115, 0x55)[0].q)).q
        *(arg5 + 0x8c) = var_208_2
        float temp0_119[0x4] = __mulps_xmmps_memps(temp0_113, arg4[2])
        zmm5 = *arg4
        float temp0_120[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        float temp0_121[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        float temp0_123[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_119, temp0_119, 0xc9), temp0_120)
        float temp0_125[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_119, temp0_119, 0xd2), temp0_121)
        float temp0_126[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_127[0x4] = _mm_sub_ps(temp0_125, temp0_123)
        float temp0_128[0x4] = _mm_add_ps(temp0_127, temp0_127)
        float temp0_129[0x4] = _mm_mul_ps(temp0_126, temp0_128)
        float temp0_131[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_128, temp0_128, 0xc9), temp0_120)
        float temp0_132[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xd2)
        float temp0_133[0x4] = _mm_add_ps(temp0_129, temp0_119)
        float temp0_137[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_132, temp0_121), temp0_131), temp0_133), arg4[1])
        float temp0_138[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0x55)
        float var_1c0_2 = _mm_shuffle_ps(temp0_137, temp0_137, 0xaa)[0]
        int64_t rax_25 = rdx_8 * 3
        float temp0_140[0x4] = _mm_unpacklo_ps(temp0_137, temp0_138[0].q)
        void var_138
        *(&var_138 + (rax_25 << 2)) = temp0_140.q
        var_130[rax_25] = var_1c0_2
        result = 0f
        
        if (cond:6_1)
            result = result_1
        
        *(arg5 + 0x90) = temp0_140.q
        *(arg5 + 0x98) = var_1c0_2
        rcx_10 = rdx_8 + 1
        result_1 = result i+ 1
    
    r8_1 = &r8_1[3]
    i_1 = i_6
    i_6 -= 1
while (i_1 != 1)

if (result_1 s> 1)
    int64_t result_2 = sx.q(result_1)
    zmm3 = zx.o(0)
    zmm4 = zx.o(0)
    
    if (result_2 s>= 4)
        void* rax_26 = &var_130
        int64_t i_4 = ((result_2 - 4) u>> 2) + 1
        r14 = i_4 << 2
        int64_t i_2
        
        do
            zmm8 = zmm8 f+ *(rax_26 - 8)
            zmm3[0] = zmm3[0] f+ *(rax_26 - 4)
            zmm4[0] = zmm4[0] f+ *rax_26
            zmm8 = zmm8 f+ *(rax_26 + 4)
            zmm3[0] = zmm3[0] f+ *(rax_26 + 8)
            zmm4[0] = zmm4[0] f+ *(rax_26 + 0xc)
            zmm8 = zmm8 f+ *(rax_26 + 0x10)
            zmm3[0] = zmm3[0] f+ *(rax_26 + 0x14)
            zmm4[0] = zmm4[0] f+ *(rax_26 + 0x18)
            zmm8 = zmm8 f+ *(rax_26 + 0x1c)
            zmm3[0] = zmm3[0] f+ *(rax_26 + 0x20)
            zmm4[0] = zmm4[0] f+ *(rax_26 + 0x24)
            rax_26 += 0x30
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    if (r14 s< result_2)
        int64_t i_5 = result_2 - r14
        int32_t* rcx_14 = &var_130[r14 * 3]
        int64_t i_3
        
        do
            zmm8 = zmm8 f+ rcx_14[-2]
            zmm3[0] = zmm3[0] f+ rcx_14[-1]
            zmm4[0] = zmm4[0] f+ *rcx_14
            rcx_14 = &rcx_14[3]
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
    zmm15[0] = 1f / _mm_cvtepi32_ps(zx.o(result_1))[0]
    zmm15[0] = zmm15[0] f* zmm8
    zmm15[0] = zmm15[0] * zmm3[0]
    zmm15[0] = zmm15[0] * zmm4[0]
    *(arg5 + 0x90) = (_mm_unpacklo_ps(zmm15, zmm15[0].q)).q
    result = zmm15[0]
    *(arg5 + 0x98) = result

__security_check_cookie(rax_1 ^ &var_258)
return result
